package com.smoke.openglapp;

public class res {
    public final String vertexShaderCode =
            "#version 320 es\n" +
                    "in vec3 positions;" +
                    "in vec3 normals;" +
                    "in vec2 uv;" +
                    "uniform mat4 proj;" +
                    "uniform mat4 translate;" +
                    "uniform mat4 xrot;" +
                    "uniform mat4 yrot;" +
                    "uniform mat4 meshm;" +

                    "uniform mat4 sproj[10];" +
                    "uniform mat4 stranslate[10];" +
                    "uniform mat4 sxrot[10];" +
                    "uniform mat4 syrot[10];" +

                    "out vec2 fuv;"+
                    "out vec3 fnormals;"+
                    "out vec3 fpos;"+
                    "out vec4 projlightmat;"+

                    "void main() {" +
                    "  gl_Position = proj * xrot * yrot * translate * meshm * vec4(positions, 1.0f);" +
                    "fuv = vec2(uv.x, uv.y+1.0);"+
                    "fnormals = mat3(transpose(inverse(mat4(1.0f)))) * normals;"+
                    "fpos = vec3(mat4(1.0f) * vec4(positions, 1.0f));"+
                    "projlightmat = sproj[0] * sxrot[0] * syrot[0] * stranslate[0] * meshm * vec4(positions, 1.0f);"+
                    "}";

    public final String fragmentShaderCode =
            "#version 320 es\n" +
                    "precision mediump float;" +
                    "uniform sampler2D tex1;"+
                    "uniform sampler2D spec1;"+
                    "uniform sampler2D shadowMap0;"+
                    "uniform vec3 lightsPos[10];"+
                    "uniform vec3 lightsCol[10];"+
                    "uniform int lightStates[10];"+
                    "uniform vec3 viewPos;"+
                    "in vec4 projlightmat;"+
                    "in vec2 fuv;"+
                    "in vec3 fnormals;"+
                    "in vec3 fpos;"+
                    "layout(location = 0) out vec4 color;"+
                    "float shadowMapping(){" +
                    "  vec3 projected = projlightmat.xyz / projlightmat.w;" +
                    "  float shadow = 0.0f;" +
                    "  if(projected.z <= 1.0f){" +
                    "   projected = (projected + 1.0f)/2.0f;" +
                    "   float closestDepth = texture(shadowMap0, projected.xy).r;" +
                    "   float currentDepth = projected.z;" +
                    "   if(currentDepth - 0.001 > closestDepth){" +
                    "       shadow+=1.0f;" +
                    "   }" +
                    "  }" +
                    "  return shadow;" +
                    "}" +
                    "float phongl(vec3 lightpos){" +
                    "  float ambient = 0.1;" +
                    "  vec3 norm = normalize(fnormals);" +
                    "  vec3 ldir = normalize(lightpos-fpos);" +
                    "  float diffuse = max(dot(norm, ldir), 0.0);" +
                    "  vec3 viewDir = normalize(-viewPos - fpos);" +
                    "  vec3 halfwayDir = normalize(ldir + viewDir);" +
                    "  float spec = pow(max(dot(norm, halfwayDir), 0.0), 16.0) * texture(spec1, fuv).r;" +
                    "  return float(spec + diffuse)*(1.0-shadowMapping())+ambient;" +
                    "}" +
                    "void main() {" +
                    "  vec3 toOut;" +
                    "  toOut += phongl(lightsPos[0]) * lightsCol[0] * texture(tex1, fuv).rgb;" +
                    "  color = vec4( toOut, 1.0);" +
                    "}";

    public final String fragmentShaderCode2 =
            "#version 320 es\n" +
                    "precision mediump float;" +
                    "uniform sampler2D tex1;"+
                    "uniform sampler2D spec1;"+
                    "uniform sampler2D shadowMap0;"+
                    "uniform vec3 lightsPos[10];"+
                    "in vec4 projlightmat;"+
                    "in vec2 fuv;"+
                    "in vec3 fnormals;"+
                    "layout(location = 0) out vec4 color;"+
                    "void main() {" +
                    "  color = vec4(texture(shadowMap0, fuv).rrr, 1.0);" +
                    "}";
    public final String vertexuiShaderCode =
            "#version 320 es\n" +
                    "in vec3 positions;" +
                    "in vec2 uv;" +
                    "out vec2 fuv;" +
                    "void main() {" +
                    "  gl_Position = vec4(positions, 1.0f);" +
                    "   fuv = uv;"+
                    "}";

    public final String fragmentuiShaderCode =
            "#version 320 es\n" +
                    "precision mediump float;" +
                    "uniform sampler2D tex1;"+
                    "in vec2 fuv;" +
                    "out vec4 color;" +
                    "void main() {" +
                    "  color = vec4( texture(tex1, fuv).rgb, 1);" +
                    "}";
}
