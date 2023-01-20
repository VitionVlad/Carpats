#include <iostream>

#include <chrono>

#include <thread>

#include "Prop.hpp"

#include "res.hpp"

Engine eng;

float cspeed = 0.05;

float speed = 0.05;

int transmission = 2;

bool mousefocused = true;

bool incar = true;

bool nearcar = true;

bool enginerun = false;

int fuel = 120;

int cash = 50;

bool nearstation = false;

vec3 lPos = vec3(0, -5, 0);

bool menu = true;

int passescnt = 0;

void movecallback(){
    using namespace std::this_thread;
    using namespace std::chrono;
    int state = glfwGetKey(eng.window, GLFW_KEY_W);
    if (state == GLFW_PRESS){ //w
        if(incar == true){
            if(enginerun == true && fuel > 0){
                if(cspeed < speed * transmission){
                    cspeed += 0.005;
                }
                if(cspeed > speed * transmission){
                    cspeed -= 0.005;
                }
                eng.pos.z += cspeed;
            }
        }else{
            eng.pos.z += cos(eng.rot.y) * cos(eng.rot.x) * speed;
            eng.pos.x += cos(eng.rot.y) * sin(eng.rot.x) * -speed;
        }
    }
    state = glfwGetKey(eng.window, GLFW_KEY_A);
    if (state == GLFW_PRESS && incar == false){ // a
        eng.pos.x += cos(eng.rot.y) * cos(eng.rot.x) * speed;
        eng.pos.z -= cos(eng.rot.y) * sin(eng.rot.x) * -speed;
    }
    state = glfwGetKey(eng.window, GLFW_KEY_S);
    if (state == GLFW_PRESS){ // s
        if(incar == true){
            cspeed = 0;
        }else{
            eng.pos.z -= cos(eng.rot.y) * cos(eng.rot.x) * speed;
            eng.pos.x -= cos(eng.rot.y) * sin(eng.rot.x) * -speed;
        }
    }
    state = glfwGetKey(eng.window, GLFW_KEY_D);
    if (state == GLFW_PRESS && incar == false){ //d
        eng.pos.x -= cos(eng.rot.y) * cos(eng.rot.x) * speed;
        eng.pos.z += cos(eng.rot.y) * sin(eng.rot.x) * -speed;
    }
    state = glfwGetKey(eng.window, GLFW_KEY_E);
    if (state == GLFW_PRESS){ //d
        if(nearcar == true){
            switch(incar){
                case false:
                incar = true;
                break;
                case true:
                incar = false;
                eng.pos.x = 2.5;
                eng.lastPos.x = 2.5;
                break;
            }
            sleep_for(milliseconds(200));
        }
        if(nearstation == true){
            cash--;
            fuel = 300;
            sleep_for(milliseconds(200));
        }
    }
    state = glfwGetKey(eng.window, GLFW_KEY_F11);
    if (state == GLFW_PRESS){ //d
        switch(mousefocused){
            case false:
            mousefocused = true;
            break;
            case true:
            mousefocused = false;
            break;
        }
        sleep_for(milliseconds(200));
    }
    state = glfwGetKey(eng.window, GLFW_KEY_Q);
    if (state == GLFW_PRESS && incar == true){ //d
        switch(enginerun){
            case false:
            enginerun = true;
            break;
            case true:
            enginerun = false;
            break;
        }
        sleep_for(milliseconds(200));
    }
    state = glfwGetKey(eng.window, GLFW_KEY_ESCAPE);
    if (state == GLFW_PRESS){ //d
        switch(menu){
            case false:
            menu = true;
            mousefocused = false;
            break;
            case true:
            menu = false;
            mousefocused = true;
            break;
        }
        sleep_for(milliseconds(200));
    }
    state = glfwGetKey(eng.window, GLFW_KEY_N);
    if (state == GLFW_PRESS && incar == true){ //d
        cspeed = 0;
        transmission = 0;
    }
    state = glfwGetKey(eng.window, GLFW_KEY_R);
    if (state == GLFW_PRESS && incar == true){ //d
        cspeed = 0;
        transmission = -1;
    }
    state = glfwGetKey(eng.window, GLFW_KEY_1);
    if (state == GLFW_PRESS && incar == true){ //d
        transmission = 2;
    }
    state = glfwGetKey(eng.window, GLFW_KEY_2);
    if (state == GLFW_PRESS && incar == true){ //d
        transmission = 3;
    }
    state = glfwGetKey(eng.window, GLFW_KEY_3);
    if (state == GLFW_PRESS && incar == true){ //d
        transmission = 4;
    }
    state = glfwGetKey(eng.window, GLFW_KEY_4);
    if (state == GLFW_PRESS && incar == true){ //d
        transmission = 5;
    }
    state = glfwGetKey(eng.window, GLFW_KEY_5);
    if (state == GLFW_PRESS && incar == true){ //d
        transmission = 6;
    }
    state = glfwGetKey(eng.window, GLFW_KEY_6);
    if (state == GLFW_PRESS && incar == true){ //d
        transmission = 7;
    }
}

vec2 mousepos;

bool mouseclicked = false;

void mousecallback(){
    int state = glfwGetMouseButton(eng.window, GLFW_MOUSE_BUTTON_LEFT);
    if (state == GLFW_PRESS){
        mouseclicked = true;
    }else{
        mouseclicked = false;
    }
    if(mousefocused == true){
        glfwSetInputMode(eng.window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
        glfwGetCursorPos(eng.window, &mousepos.x, &mousepos.y);
        eng.rot.x = mousepos.x/eng.resolution.x;
        eng.rot.y = -mousepos.y/eng.resolution.y;
        if(eng.rot.y > 1.5){
            eng.rot.y = 1.5;
        }
        if(eng.rot.y < -1.5){
            eng.rot.y = -1.5;
        }
    }else{
        glfwSetInputMode(eng.window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);
        glfwGetCursorPos(eng.window, &mousepos.x, &mousepos.y);
    }
}

Mesh carcas;
Mesh saloon;
Mesh stwheel;
Mesh wheels[2];
float zpos = 0.7;

Mesh tr[8];
Mesh sym1[10];
Mesh sym2[10];
Mesh lowfl;
Mesh speedlm[2];
Mesh dolarsym;

int speedlimit = 0;

void initCar(){
    for(int i = 0; i != 8; i++){
        tr[i].vertexes[0] = -1;
        tr[i].vertexes[1] = 0.9;
        tr[i].vertexes[2] = 0;
        tr[i].vertexes[3] = -1;
        tr[i].vertexes[4] = 1;
        tr[i].vertexes[5] = 0;
        tr[i].vertexes[6] = -0.9;
        tr[i].vertexes[7] = 1;
        tr[i].vertexes[8] = 0;
        tr[i].vertexes[9] = -1;
        tr[i].vertexes[10] = 0.9;
        tr[i].vertexes[11] = 0;
        tr[i].vertexes[12] = -0.9;
        tr[i].vertexes[13] = 1;
        tr[i].vertexes[14] = 0;
        tr[i].vertexes[15] = -0.9;
        tr[i].vertexes[16] = 0.9;
        tr[i].vertexes[17] = 0;
        tr[i].totalv = 6;

        tr[i].uv[0] = 0;
        tr[i].uv[1] = 1;
        tr[i].uv[2] = 0;
        tr[i].uv[3] = 0;
        tr[i].uv[4] = 1;
        tr[i].uv[5] = 0;
        tr[i].uv[6] = 0;
        tr[i].uv[7] = 1;
        tr[i].uv[8] = 1;
        tr[i].uv[9] = 0;
        tr[i].uv[10] = 1;
        tr[i].uv[11] = 1;
    }

    eng.copyucharArray(tr1_texture().pixels, tr[0].texture);
    eng.copyucharArray(tr2_texture().pixels, tr[1].texture);
    eng.copyucharArray(tr3_texture().pixels, tr[2].texture);
    eng.copyucharArray(tr4_texture().pixels, tr[3].texture);
    eng.copyucharArray(tr5_texture().pixels, tr[4].texture);
    eng.copyucharArray(tr6_texture().pixels, tr[5].texture);
    eng.copyucharArray(trr_texture().pixels, tr[6].texture);
    eng.copyucharArray(trn_texture().pixels, tr[7].texture);

    for(int i = 0; i!= 8; i++){
        tr[i].texResolution.x = tr1_texture().resx;
        tr[i].texResolution.y = tr1_texture().resy;
        tr[i].initMesh(fragmentuiShaderCode, vertexuiShaderCode, eng);
        tr[i].meshPosition.x = 100000;
        tr[i].enablePLayerInteract = false;
    }

    for(int i = 0; i != 10; i++){
        sym1[i].vertexes[0] = -0.7;
        sym1[i].vertexes[1] = 0.9;
        sym1[i].vertexes[2] = 0;
        sym1[i].vertexes[3] = -0.7;
        sym1[i].vertexes[4] = 1;
        sym1[i].vertexes[5] = 0;
        sym1[i].vertexes[6] = -0.6;
        sym1[i].vertexes[7] = 1;
        sym1[i].vertexes[8] = 0;
        sym1[i].vertexes[9] = -0.7;
        sym1[i].vertexes[10] = 0.9;
        sym1[i].vertexes[11] = 0;
        sym1[i].vertexes[12] = -0.6;
        sym1[i].vertexes[13] = 1;
        sym1[i].vertexes[14] = 0;
        sym1[i].vertexes[15] = -0.6;
        sym1[i].vertexes[16] = 0.9;
        sym1[i].vertexes[17] = 0;
        sym1[i].totalv = 6;

        sym1[i].uv[0] = 0;
        sym1[i].uv[1] = 1;
        sym1[i].uv[2] = 0;
        sym1[i].uv[3] = 0;
        sym1[i].uv[4] = 1;
        sym1[i].uv[5] = 0;
        sym1[i].uv[6] = 0;
        sym1[i].uv[7] = 1;
        sym1[i].uv[8] = 1;
        sym1[i].uv[9] = 0;
        sym1[i].uv[10] = 1;
        sym1[i].uv[11] = 1;
    }

    eng.copyucharArray(n0_texture().pixels, sym1[0].texture);
    eng.copyucharArray(tr1_texture().pixels, sym1[1].texture);
    eng.copyucharArray(tr2_texture().pixels, sym1[2].texture);
    eng.copyucharArray(tr3_texture().pixels, sym1[3].texture);
    eng.copyucharArray(tr4_texture().pixels, sym1[4].texture);
    eng.copyucharArray(tr5_texture().pixels, sym1[5].texture);
    eng.copyucharArray(tr6_texture().pixels, sym1[6].texture);
    eng.copyucharArray(n7_texture().pixels, sym1[7].texture);
    eng.copyucharArray(n8_texture().pixels, sym1[8].texture);
    eng.copyucharArray(n9_texture().pixels, sym1[9].texture);

    for(int i = 0; i!= 10; i++){
        sym1[i].texResolution.x = tr1_texture().resx;
        sym1[i].texResolution.y = tr1_texture().resy;
        sym1[i].initMesh(fragmentuiShaderCode, vertexuiShaderCode, eng);
        sym1[i].meshPosition.x = 100000;
        sym1[i].enablePLayerInteract = false;
    }

    for(int i = 0; i != 10; i++){
        sym2[i].vertexes[0] = -0.6;
        sym2[i].vertexes[1] = 0.9;
        sym2[i].vertexes[2] = 0;
        sym2[i].vertexes[3] = -0.6;
        sym2[i].vertexes[4] = 1;
        sym2[i].vertexes[5] = 0;
        sym2[i].vertexes[6] = -0.5;
        sym2[i].vertexes[7] = 1;
        sym2[i].vertexes[8] = 0;
        sym2[i].vertexes[9] = -0.6;
        sym2[i].vertexes[10] = 0.9;
        sym2[i].vertexes[11] = 0;
        sym2[i].vertexes[12] = -0.5;
        sym2[i].vertexes[13] = 1;
        sym2[i].vertexes[14] = 0;
        sym2[i].vertexes[15] = -0.5;
        sym2[i].vertexes[16] = 0.9;
        sym2[i].vertexes[17] = 0;
        sym2[i].totalv = 6;

        sym2[i].uv[0] = 0;
        sym2[i].uv[1] = 1;
        sym2[i].uv[2] = 0;
        sym2[i].uv[3] = 0;
        sym2[i].uv[4] = 1;
        sym2[i].uv[5] = 0;
        sym2[i].uv[6] = 0;
        sym2[i].uv[7] = 1;
        sym2[i].uv[8] = 1;
        sym2[i].uv[9] = 0;
        sym2[i].uv[10] = 1;
        sym2[i].uv[11] = 1;
    }

    eng.copyucharArray(n0_texture().pixels, sym2[0].texture);
    eng.copyucharArray(tr1_texture().pixels,sym2[1].texture);
    eng.copyucharArray(tr2_texture().pixels,sym2[2].texture);
    eng.copyucharArray(tr3_texture().pixels,sym2[3].texture);
    eng.copyucharArray(tr4_texture().pixels,sym2[4].texture);
    eng.copyucharArray(tr5_texture().pixels,sym2[5].texture);
    eng.copyucharArray(tr6_texture().pixels,sym2[6].texture);
    eng.copyucharArray(n7_texture().pixels, sym2[7].texture);
    eng.copyucharArray(n8_texture().pixels, sym2[8].texture);
    eng.copyucharArray(n9_texture().pixels, sym2[9].texture);

    for(int i = 0; i!= 10; i++){
        sym2[i].texResolution.x = tr1_texture().resx;
        sym2[i].texResolution.y = tr1_texture().resy;
        sym2[i].initMesh(fragmentuiShaderCode, vertexuiShaderCode, eng);
        sym2[i].meshPosition.x = 100000;
        sym2[i].enablePLayerInteract = false;
    }

    for(int i = 0; i != 2; i++){
        speedlm[i].vertexes[0] = -0.8;
        speedlm[i].vertexes[1] = 0.9;
        speedlm[i].vertexes[2] = 0;
        speedlm[i].vertexes[3] = -0.8;
        speedlm[i].vertexes[4] = 1;
        speedlm[i].vertexes[5] = 0;
        speedlm[i].vertexes[6] = -0.7;
        speedlm[i].vertexes[7] = 1;
        speedlm[i].vertexes[8] = 0;
        speedlm[i].vertexes[9] = -0.8;
        speedlm[i].vertexes[10] = 0.9;
        speedlm[i].vertexes[11] = 0;
        speedlm[i].vertexes[12] = -0.7;
        speedlm[i].vertexes[13] = 1;
        speedlm[i].vertexes[14] = 0;
        speedlm[i].vertexes[15] = -0.7;
        speedlm[i].vertexes[16] = 0.9;
        speedlm[i].vertexes[17] = 0;
        speedlm[i].totalv = 6;

        speedlm[i].uv[0] = 0;
        speedlm[i].uv[1] = 1;
        speedlm[i].uv[2] = 0;
        speedlm[i].uv[3] = 0;
        speedlm[i].uv[4] = 1;
        speedlm[i].uv[5] = 0;
        speedlm[i].uv[6] = 0;
        speedlm[i].uv[7] = 1;
        speedlm[i].uv[8] = 1;
        speedlm[i].uv[9] = 0;
        speedlm[i].uv[10] = 1;
        speedlm[i].uv[11] = 1;
    }

    eng.copyucharArray(l30_texture().pixels, speedlm[0].texture);
    eng.copyucharArray(l60_texture().pixels, speedlm[1].texture);

    for(int i = 0; i!= 2; i++){
        speedlm[i].texResolution.x = l30_texture().resx;
        speedlm[i].texResolution.y = l30_texture().resy;
        speedlm[i].initMesh(fragmentuiShaderCode, vertexuiShaderCode, eng);
        speedlm[i].meshPosition.x = 100000;
        speedlm[i].enablePLayerInteract = false;
    }

    lowfl.vertexes[0] = -0.9;
    lowfl.vertexes[1] = 0.9;
    lowfl.vertexes[2] = 0;
    lowfl.vertexes[3] = -0.9;
    lowfl.vertexes[4] = 1;
    lowfl.vertexes[5] = 0;
    lowfl.vertexes[6] = -0.8;
    lowfl.vertexes[7] = 1;
    lowfl.vertexes[8] = 0;
    lowfl.vertexes[9] = -0.9;
    lowfl.vertexes[10] = 0.9;
    lowfl.vertexes[11] = 0;
    lowfl.vertexes[12] = -0.8;
    lowfl.vertexes[13] = 1;
    lowfl.vertexes[14] = 0;
    lowfl.vertexes[15] = -0.8;
    lowfl.vertexes[16] = 0.9;
    lowfl.vertexes[17] = 0;
    lowfl.totalv = 6;

    lowfl.uv[0] = 0;
    lowfl.uv[1] = 1;
    lowfl.uv[2] = 0;
    lowfl.uv[3] = 0;
    lowfl.uv[4] = 1;
    lowfl.uv[5] = 0;
    lowfl.uv[6] = 0;
    lowfl.uv[7] = 1;
    lowfl.uv[8] = 1;
    lowfl.uv[9] = 0;
    lowfl.uv[10] = 1;
    lowfl.uv[11] = 1;

    eng.copyucharArray(lowfl_texture().pixels, lowfl.texture);

    lowfl.texResolution.x = lowfl_texture().resx;
    lowfl.texResolution.y = lowfl_texture().resy;
    lowfl.initMesh(fragmentuiShaderCode, vertexuiShaderCode, eng);
    lowfl.meshPosition.x = 100000;
    lowfl.enablePLayerInteract = false;

    dolarsym.vertexes[0] = -0.5;
    dolarsym.vertexes[1] = 0.9;
    dolarsym.vertexes[2] = 0;
    dolarsym.vertexes[3] = -0.5;
    dolarsym.vertexes[4] = 1;
    dolarsym.vertexes[5] = 0;
    dolarsym.vertexes[6] = -0.4;
    dolarsym.vertexes[7] = 1;
    dolarsym.vertexes[8] = 0;
    dolarsym.vertexes[9] = -0.5;
    dolarsym.vertexes[10] = 0.9;
    dolarsym.vertexes[11] = 0;
    dolarsym.vertexes[12] = -0.4;
    dolarsym.vertexes[13] = 1;
    dolarsym.vertexes[14] = 0;
    dolarsym.vertexes[15] = -0.4;
    dolarsym.vertexes[16] = 0.9;
    dolarsym.vertexes[17] = 0;
    dolarsym.totalv = 6;

    dolarsym.uv[0] = 0;
    dolarsym.uv[1] = 1;
    dolarsym.uv[2] = 0;
    dolarsym.uv[3] = 0;
    dolarsym.uv[4] = 1;
    dolarsym.uv[5] = 0;
    dolarsym.uv[6] = 0;
    dolarsym.uv[7] = 1;
    dolarsym.uv[8] = 1;
    dolarsym.uv[9] = 0;
    dolarsym.uv[10] = 1;
    dolarsym.uv[11] = 1;

    eng.copyucharArray(dollar_texture().pixels, dolarsym.texture);

    dolarsym.texResolution.x = dollar_texture().resx;
    dolarsym.texResolution.y = dollar_texture().resy;
    dolarsym.initMesh(fragmentuiShaderCode, vertexuiShaderCode, eng);
    dolarsym.meshPosition.x = 100000;
    dolarsym.enablePLayerInteract = false;

    eng.copyFloatArray(carcas_model().verts, carcas.vertexes);
    eng.copyFloatArray(carcas_normals().normals, carcas.normals);
    eng.copyFloatArray(carcas_uv().uv, carcas.uv);
    eng.copyucharArray(albedo_texture().pixels, carcas.texture);
    eng.copyucharArray(spec_texture().pixels, carcas.specular);
    carcas.totalv = carcas_model().totalv;
    carcas.texResolution.x = albedo_texture().resx;
    carcas.texResolution.y = albedo_texture().resy;
    carcas.meshPosition.z = zpos;
    carcas.meshPosition.y = 1.5;
    carcas.initMesh(fragmentShaderCode, vertexShaderCode, eng);
    carcas.enablePLayerInteract = false;

    eng.copyFloatArray(saloon_model().verts, saloon.vertexes);
    eng.copyFloatArray(saloon_normals().normals, saloon.normals);
    eng.copyFloatArray(saloon_uv().uv, saloon.uv);
    eng.copyucharArray(albedo_texture().pixels, saloon.texture);
    eng.copyucharArray(spec_texture().pixels, saloon.specular);
    saloon.totalv = saloon_model().totalv;
    saloon.texResolution.x = albedo_texture().resx;
    saloon.texResolution.y = albedo_texture().resy;
    saloon.meshPosition.z = zpos;
    saloon.meshPosition.y = 1.5;
    saloon.initMesh(fragmentShaderCode, vertexShaderCode, eng);
    saloon.enablePLayerInteract = false;

    eng.copyFloatArray(stwheel_model().verts, stwheel.vertexes);
    eng.copyFloatArray(stwheel_normals().normals, stwheel.normals);
    eng.copyFloatArray(stwheel_uv().uv, stwheel.uv);
    eng.copyucharArray(albedo_texture().pixels, stwheel.texture);
    eng.copyucharArray(spec_texture().pixels, stwheel.specular);
    stwheel.totalv = stwheel_model().totalv;
    stwheel.texResolution.x = albedo_texture().resx;
    stwheel.texResolution.y = albedo_texture().resy;
    stwheel.meshPosition.z = zpos;
    stwheel.meshPosition.y = 1.5;
    stwheel.initMesh(fragmentShaderCode, vertexShaderCode, eng);
    stwheel.enablePLayerInteract = false;

    eng.copyFloatArray(wheels_model().verts, wheels[0].vertexes);
    eng.copyFloatArray(wheels_normals().normals, wheels[0].normals);
    eng.copyFloatArray(wheels_uv().uv, wheels[0].uv);
    eng.copyucharArray(albedo_texture().pixels, wheels[0].texture);
    eng.copyucharArray(spec_texture().pixels, wheels[0].specular);
    wheels[0].totalv = wheels_model().totalv;
    wheels[0].texResolution.x = albedo_texture().resx;
    wheels[0].texResolution.y = albedo_texture().resy;
    wheels[0].meshPosition.z = zpos - 1.3;
    wheels[0].meshPosition.y = 1.6;
    wheels[0].meshPosition.x = -6.645f;
    wheels[0].initMesh(fragmentShaderCode, vertexShaderCode, eng);
    wheels[0].enablePLayerInteract = false;

    eng.copyFloatArray(wheels_model().verts, wheels[1].vertexes);
    eng.copyFloatArray(wheels_normals().normals, wheels[1].normals);
    eng.copyFloatArray(wheels_uv().uv, wheels[1].uv);
    eng.copyucharArray(albedo_texture().pixels, wheels[1].texture);
    eng.copyucharArray(spec_texture().pixels, wheels[1].specular);
    wheels[1].totalv = wheels_model().totalv;
    wheels[1].texResolution.x = albedo_texture().resx;
    wheels[1].texResolution.y = albedo_texture().resy;
    wheels[1].meshPosition.z = zpos + 2.3;
    wheels[1].meshPosition.y = 1.6;
    wheels[1].meshPosition.x = -6.645f;
    wheels[1].initMesh(fragmentShaderCode, vertexShaderCode, eng);
    wheels[1].enablePLayerInteract = false;
}

bool enablegas = false;

bool grass = false;

bool splm = false;

bool is30 = false;

bool randomBool(){
    return 0 + (rand() % (1 - 0 + 1)) == 1;
}

void drawCar(){
    if(incar == true){
        nearcar = true;
        wheels[1].enablePLayerInteract = false;
        wheels[0].enablePLayerInteract = false;
        stwheel.enablePLayerInteract = false;
        saloon.enablePLayerInteract = false;
        carcas.enablePLayerInteract = false;
        eng.pos.x = 0.9;
        carcas.meshPosition.z = zpos - eng.pos.z;
        saloon.meshPosition.z = zpos - eng.pos.z;
        stwheel.meshPosition.z = zpos - eng.pos.z;
        wheels[0].meshPosition.z = zpos - 1.8 - eng.pos.z;
        wheels[1].meshPosition.z = zpos + 2.4 - eng.pos.z;
        if(menu == false){
            switch(transmission){
                case -1:
                tr[6].Draw(eng);
                break;
                case 0:
                tr[7].Draw(eng);
                break;
                case 2:
                tr[0].Draw(eng);
                break;
                case 3:
                tr[1].Draw(eng);
                break;
                case 4:
                tr[2].Draw(eng);
                break;
                case 5:
                tr[3].Draw(eng);
                break;
                case 6:
                tr[4].Draw(eng);
                break;
                case 7:
                tr[5].Draw(eng);
                break;
            }
            if(fuel < 60){
                lowfl.Draw(eng);
            }
            if(speedlimit != 0){
                speedlm[speedlimit-1].Draw(eng);
            }
        }
    }else{
        carcas.enablePLayerInteract = true;
    }
    carcas.Draw(eng);
    if(eng.between(eng.pos.x, carcas.meshPosition.x - carcas.aabb.x - 0.2, carcas.meshPosition.x + carcas.aabb.x + 0.2) && eng.between(-eng.pos.z, carcas.meshPosition.z - carcas.aabb.z - 0.2, carcas.aabb.z + carcas.meshPosition.z + 0.2)){
        nearcar = true;
    }else{
        nearcar = false;
    }
    saloon.Draw(eng);
    stwheel.Draw(eng);
    wheels[0].Draw(eng);
    wheels[1].Draw(eng);
    if(incar == true){
        nearcar = true;
    }
    if(eng.pos.z < -8){
        eng.pos.z = -8;
    }
    if(eng.pos.z > 190){
        eng.pos.z = -8;
        lPos.z = 0;
        grass = randomBool();
        enablegas = randomBool();
        eng.pos.y = -2;
        is30 = randomBool();
        splm = randomBool();
        if(is30 == true){
            speedlimit = 1;
        }else{
            speedlimit = 2;
        }
        if(splm == false){
            speedlimit = 0;
        }
        passescnt++;
    }
}

Mesh fence;
Mesh mountain;
Mesh waystone;

void initwaystone(){
    eng.copyFloatArray(waystone_model().verts, waystone.vertexes);
    eng.copyFloatArray(waystone_normals().normals, waystone.normals);
    eng.copyFloatArray(waystone_uv().uv, waystone.uv);
    eng.copyucharArray(albedo_texture().pixels, waystone.texture);
    eng.copyucharArray(spec_texture().pixels, waystone.specular);
    waystone.totalv = waystone_model().totalv;
    waystone.texResolution.x = albedo_texture().resx;
    waystone.texResolution.y = albedo_texture().resy;
    waystone.meshPosition.y = -0.5f;
    waystone.meshPosition.z = -90;
    waystone.initMesh(fragmentShaderCode, vertexShaderCode, eng);

    eng.copyFloatArray(fence_model().verts, fence.vertexes);
    eng.copyFloatArray(fence_normals().normals, fence.normals);
    eng.copyFloatArray(fence_uv().uv, fence.uv);
    eng.copyucharArray(albedo_texture().pixels, fence.texture);
    eng.copyucharArray(spec_texture().pixels, fence.specular);
    fence.totalv = fence_model().totalv;
    fence.texResolution.x = albedo_texture().resx;
    fence.texResolution.y = albedo_texture().resy;
    fence.meshPosition.y = -0.5f;
    fence.meshPosition.x = -10;
    fence.meshPosition.z = -90;
    fence.initMesh(fragmentShaderCode, vertexShaderCode, eng);

    eng.copyFloatArray(mountain_model().verts, mountain.vertexes);
    eng.copyFloatArray(mountain_normals().normals, mountain.normals);
    eng.copyFloatArray(mountain_uv().uv, mountain.uv);
    eng.copyucharArray(albedo_texture().pixels, mountain.texture);
    eng.copyucharArray(spec_texture().pixels, mountain.specular);
    mountain.totalv = mountain_model().totalv;
    mountain.texResolution.x = albedo_texture().resx;
    mountain.texResolution.y = albedo_texture().resy;
    mountain.meshPosition.y = -0.5f;
    mountain.meshPosition.x = 10;
    mountain.meshPosition.z = -90;
    mountain.initMesh(fragmentShaderCode, vertexShaderCode, eng);
}

void drawwaystone(){
    waystone.Draw(eng);
    fence.Draw(eng);
    mountain.Draw(eng);
}

Mesh waygrass;
Mesh gas;
Mesh gm[2];
Mesh stone[2];

void initgrassway(){
    eng.copyFloatArray(waygrass_model().verts, waygrass.vertexes);
    eng.copyFloatArray(waygrass_normals().normals, waygrass.normals);
    eng.copyFloatArray(waygrass_uv().uv, waygrass.uv);
    eng.copyucharArray(albedo_texture().pixels, waygrass.texture);
    eng.copyucharArray(spec_texture().pixels, waygrass.specular);
    waygrass.totalv = waygrass_model().totalv;
    waygrass.texResolution.x = albedo_texture().resx;
    waygrass.texResolution.y = albedo_texture().resy;
    waygrass.meshPosition.y = -0.5f;
    waygrass.meshPosition.z = -90;
    waygrass.initMesh(fragmentShaderCode, vertexShaderCode, eng);

    eng.copyFloatArray(gasstat_model().verts, gas.vertexes);
    eng.copyFloatArray(gasstat_normals().normals, gas.normals);
    eng.copyFloatArray(gasstat_uv().uv, gas.uv);
    eng.copyucharArray(albedo_texture().pixels, gas.texture);
    eng.copyucharArray(spec_texture().pixels, gas.specular);
    gas.totalv = gasstat_model().totalv;
    gas.texResolution.x = albedo_texture().resx;
    gas.texResolution.y = albedo_texture().resy;
    gas.meshPosition.y = 2.5f;
    gas.meshPosition.x = -18;
    gas.meshPosition.z = -90;
    gas.initMesh(fragmentShaderCode, vertexShaderCode, eng);

    eng.copyFloatArray(mountain_model().verts, gm[0].vertexes);
    eng.copyFloatArray(mountain_normals().normals, gm[0].normals);
    eng.copyFloatArray(mountain_uv().uv, gm[0].uv);
    eng.copyucharArray(albedo_texture().pixels, gm[0].texture);
    eng.copyucharArray(spec_texture().pixels, gm[0].specular);
    gm[0].totalv = mountain_model().totalv;
    gm[0].texResolution.x = albedo_texture().resx;
    gm[0].texResolution.y = albedo_texture().resy;
    gm[0].meshPosition.y = -0.5f;
    gm[0].meshPosition.x = 10;
    gm[0].meshPosition.z = -90;
    gm[0].initMesh(fragmentShaderCode, vertexShaderCode, eng);
    eng.copyFloatArray(mountain_model().verts, gm[1].vertexes);
    eng.copyFloatArray(mountain_normals().normals, gm[1].normals);
    eng.copyFloatArray(mountain_uv().uv, gm[1].uv);
    eng.copyucharArray(albedo_texture().pixels, gm[1].texture);
    eng.copyucharArray(spec_texture().pixels, gm[1].specular);
    gm[1].totalv = mountain_model().totalv;
    gm[1].texResolution.x = albedo_texture().resx;
    gm[1].texResolution.y = albedo_texture().resy;
    gm[1].meshPosition.y = -0.5f;
    gm[1].meshPosition.x = -20;
    gm[1].meshPosition.z = -90;
    gm[1].initMesh(fragmentShaderCode, vertexShaderCode, eng);

    eng.copyFloatArray(stone_model().verts, stone[0].vertexes);
    eng.copyFloatArray(stone_normals().normals, stone[0].normals);
    eng.copyFloatArray(stone_uv().uv, stone[0].uv);
    eng.copyucharArray(albedo_texture().pixels, stone[0].texture);
    eng.copyucharArray(spec_texture().pixels, stone[0].specular);
    stone[0].totalv = stone_model().totalv;
    stone[0].texResolution.x = albedo_texture().resx;
    stone[0].texResolution.y = albedo_texture().resy;
    stone[0].meshPosition.y = -0.5f;
    stone[0].meshPosition.x = -17.5;
    stone[0].meshPosition.z = 10;
    stone[0].initMesh(fragmentShaderCode, vertexShaderCode, eng);
    eng.copyFloatArray(stone_model().verts, stone[1].vertexes);
    eng.copyFloatArray(stone_normals().normals, stone[1].normals);
    eng.copyFloatArray(stone_uv().uv, stone[1].uv);
    eng.copyucharArray(albedo_texture().pixels, stone[1].texture);
    eng.copyucharArray(spec_texture().pixels, stone[1].specular);
    stone[1].totalv = stone_model().totalv;
    stone[1].texResolution.x = albedo_texture().resx;
    stone[1].texResolution.y = albedo_texture().resy;
    stone[1].meshPosition.y = -0.5f;
    stone[1].meshPosition.x = -17.5;
    stone[1].meshPosition.z = -190;
    stone[1].initMesh(fragmentShaderCode, vertexShaderCode, eng);
}

void drawgrassway(bool gasstation){
    waygrass.Draw(eng);
    if(gasstation == true){
        gas.Draw(eng);
        if(eng.between(-eng.pos.x, gas.meshPosition.x - gas.aabb.x - 0.2, gas.meshPosition.x + gas.aabb.x + 0.2) && eng.between(-eng.pos.z, gas.meshPosition.z - gas.aabb.z - 0.2, gas.aabb.z + gas.meshPosition.z + 0.2)){
            nearstation = true;
        }else{
            nearstation = false;
        }
    }else{
        nearstation = false;
    }
    gm[0].Draw(eng);
    gm[1].Draw(eng);
    stone[0].Draw(eng);
    stone[1].Draw(eng);
}

void drawmoneyindic(){
    dolarsym.Draw(eng);
    int num1 = (int) cash/10;
    int num2 = cash-(num1*10);
    switch(num1){
        case 0:
        sym1[0].Draw(eng);
        break;
        case 1:
        sym1[1].Draw(eng);
        break;
        case 2:
        sym1[2].Draw(eng);
        break;
        case 3:
        sym1[3].Draw(eng);
        break;
        case 4:
        sym1[4].Draw(eng);
        break;
        case 5:
        sym1[5].Draw(eng);
        break;
        case 6:
        sym1[6].Draw(eng);
        break;
        case 7:
        sym1[7].Draw(eng);
        break;
        case 8:
        sym1[8].Draw(eng);
        break;
        case 9:
        sym1[9].Draw(eng);
        break;
    }
    switch(num2){
        case 0:
        sym2[0].Draw(eng);
        break;
        case 1:
        sym2[1].Draw(eng);
        break;
        case 2:
        sym2[2].Draw(eng);
        break;
        case 3:
        sym2[3].Draw(eng);
        break;
        case 4:
        sym2[4].Draw(eng);
        break;
        case 5:
        sym2[5].Draw(eng);
        break;
        case 6:
        sym2[6].Draw(eng);
        break;
        case 7:
        sym2[7].Draw(eng);
        break;
        case 8:
        sym2[8].Draw(eng);
        break;
        case 9:
        sym2[9].Draw(eng);
        break;
    }
}

Mesh limitsg[2];

void initlimitsg(){
    eng.copyFloatArray(speedlimit_model().verts, limitsg[0].vertexes);
    eng.copyFloatArray(speedlimit_normals().normals, limitsg[0].normals);
    eng.copyFloatArray(speedlimit_uv().uv, limitsg[0].uv);
    eng.copyucharArray(l30_texture().pixels, limitsg[0].texture);
    eng.copyucharArray(spec_texture().pixels, limitsg[0].specular);
    limitsg[0].totalv = speedlimit_model().totalv;
    limitsg[0].texResolution.x = albedo_texture().resx;
    limitsg[0].texResolution.y = albedo_texture().resy;
    limitsg[0].meshPosition.y = -0.5f;
    limitsg[0].meshPosition.x = 5;
    limitsg[0].meshPosition.z = -5;
    limitsg[0].initMesh(fragmentShaderCode, vertexShaderCode, eng);
    eng.copyFloatArray(speedlimit_model().verts, limitsg[1].vertexes);
    eng.copyFloatArray(speedlimit_normals().normals, limitsg[1].normals);
    eng.copyFloatArray(speedlimit_uv().uv, limitsg[1].uv);
    eng.copyucharArray(l60_texture().pixels, limitsg[1].texture);
    eng.copyucharArray(spec_texture().pixels, limitsg[1].specular);
    limitsg[1].totalv = speedlimit_model().totalv;
    limitsg[1].texResolution.x = albedo_texture().resx;
    limitsg[1].texResolution.y = albedo_texture().resy;
    limitsg[1].meshPosition.y = -0.5f;
    limitsg[1].meshPosition.x = 5;
    limitsg[1].meshPosition.z = -5;
    limitsg[1].initMesh(fragmentShaderCode, vertexShaderCode, eng);
}

bool fllscreen = false;

int main(int argc, char **argv){
    eng.Init();
    glfwSetWindowTitle(eng.window, "Carpats");
    eng.shadowProj.buildperspectivemat(110, 0.1, 100, 1, 0);
    //eng.shadowProj.buildorthomat(1, -1, 1, -1, 0.1, 100f);
    eng.shadowTrans.buildtranslatemat(vec3(0, -5, 0), 0);
    eng.shadowxrot.buildxrotmat(-1.5f, 0);
    eng.shadowyrot.buildyrotmat(0, 0);
    eng.setLight(0, vec3(5, 3, 0), vec3(1, 1, 1), 1);

    eng.camsize.y = 2.5;
    eng.pos = vec3(1.92, -1.95, 2.5);
    eng.lastPos = eng.pos;
    mousefocused = false;
    eng.rot = vec2(2.4, 0.019);
    incar = false;

    initCar();

    initwaystone();

    initgrassway();

    initlimitsg();

    clickZone playzone;
    playzone.corner1 = vec2(0.4, 0.5);
    playzone.corner2 = vec2(0.6, 0.6);

    Mesh platbtn;
    platbtn.vertexes[0] = -0.1;
    platbtn.vertexes[1] = -0.2;
    platbtn.vertexes[2] = 0;
    platbtn.vertexes[3] = -0.1;
    platbtn.vertexes[4] = 0;
    platbtn.vertexes[5] = 0;
    platbtn.vertexes[6] = 0.1;
    platbtn.vertexes[7] = 0;
    platbtn.vertexes[8] = 0;
    platbtn.vertexes[9] = -0.1;
    platbtn.vertexes[10] = -0.2;
    platbtn.vertexes[11] = 0;
    platbtn.vertexes[12] = 0.1;
    platbtn.vertexes[13] = 0;
    platbtn.vertexes[14] = 0;
    platbtn.vertexes[15] = 0.1;
    platbtn.vertexes[16] = -0.2;
    platbtn.vertexes[17] = 0;
    platbtn.totalv = 6;

    platbtn.uv[0] = 0;
    platbtn.uv[1] = 1;
    platbtn.uv[2] = 0;
    platbtn.uv[3] = 0;
    platbtn.uv[4] = 1;
    platbtn.uv[5] = 0;
    platbtn.uv[6] = 0;
    platbtn.uv[7] = 1;
    platbtn.uv[8] = 1;
    platbtn.uv[9] = 0;
    platbtn.uv[10] = 1;
    platbtn.uv[11] = 1;

    eng.copyucharArray(begin_texture().pixels, platbtn.texture);

    platbtn.texResolution.x = begin_texture().resx;
    platbtn.texResolution.y = begin_texture().resy;
    platbtn.initMesh(fragmentuiShaderCode, vertexuiShaderCode, eng);
    platbtn.meshPosition.x = 100000;
    platbtn.enablePLayerInteract = false;

    clickZone fullzone;
    fullzone.corner1 = vec2(0.6, 0.5);
    fullzone.corner2 = vec2(0.65, 0.6);

    Mesh fullscreen;
    fullscreen.vertexes[0] = 0.2;
    fullscreen.vertexes[1] = -0.2;
    fullscreen.vertexes[2] = 0;
    fullscreen.vertexes[3] = 0.2;
    fullscreen.vertexes[4] = 0;
    fullscreen.vertexes[5] = 0;
    fullscreen.vertexes[6] = 0.3;
    fullscreen.vertexes[7] = 0;
    fullscreen.vertexes[8] = 0;
    fullscreen.vertexes[9] = 0.2;
    fullscreen.vertexes[10] = -0.2;
    fullscreen.vertexes[11] = 0;
    fullscreen.vertexes[12] = 0.3;
    fullscreen.vertexes[13] = 0;
    fullscreen.vertexes[14] = 0;
    fullscreen.vertexes[15] = 0.3;
    fullscreen.vertexes[16] = -0.2;
    fullscreen.vertexes[17] = 0;
    fullscreen.totalv = 6;

    fullscreen.uv[0] = 0;
    fullscreen.uv[1] = 1;
    fullscreen.uv[2] = 0;
    fullscreen.uv[3] = 0;
    fullscreen.uv[4] = 1;
    fullscreen.uv[5] = 0;
    fullscreen.uv[6] = 0;
    fullscreen.uv[7] = 1;
    fullscreen.uv[8] = 1;
    fullscreen.uv[9] = 0;
    fullscreen.uv[10] = 1;
    fullscreen.uv[11] = 1;

    eng.copyucharArray(full_texture().pixels, fullscreen.texture);

    fullscreen.texResolution.x = full_texture().resx;
    fullscreen.texResolution.y = full_texture().resy;
    fullscreen.initMesh(fragmentuiShaderCode, vertexuiShaderCode, eng);
    fullscreen.meshPosition.x = 100000;
    fullscreen.enablePLayerInteract = false;

    clickZone quitzone;
    quitzone.corner1 = vec2(0.35, 0.5);
    quitzone.corner2 = vec2(0.425, 0.6);

    Mesh quidbtn;
    quidbtn.vertexes[0] = -0.3;
    quidbtn.vertexes[1] = -0.2;
    quidbtn.vertexes[2] = 0;
    quidbtn.vertexes[3] = -0.3;
    quidbtn.vertexes[4] = 0;
    quidbtn.vertexes[5] = 0;
    quidbtn.vertexes[6] = -0.15;
    quidbtn.vertexes[7] = 0;
    quidbtn.vertexes[8] = 0;
    quidbtn.vertexes[9] = -0.3;
    quidbtn.vertexes[10] = -0.2;
    quidbtn.vertexes[11] = 0;
    quidbtn.vertexes[12] = -0.15;
    quidbtn.vertexes[13] = 0;
    quidbtn.vertexes[14] = 0;
    quidbtn.vertexes[15] = -0.15;
    quidbtn.vertexes[16] = -0.2;
    quidbtn.vertexes[17] = 0;
    quidbtn.totalv = 6;

    quidbtn.uv[0] = 0;
    quidbtn.uv[1] = 1;
    quidbtn.uv[2] = 0;
    quidbtn.uv[3] = 0;
    quidbtn.uv[4] = 1;
    quidbtn.uv[5] = 0;
    quidbtn.uv[6] = 0;
    quidbtn.uv[7] = 1;
    quidbtn.uv[8] = 1;
    quidbtn.uv[9] = 0;
    quidbtn.uv[10] = 1;
    quidbtn.uv[11] = 1;

    eng.copyucharArray(quit_texture().pixels, quidbtn.texture);

    quidbtn.texResolution.x = full_texture().resx;
    quidbtn.texResolution.y = full_texture().resy;
    quidbtn.initMesh(fragmentuiShaderCode, vertexuiShaderCode, eng);
    quidbtn.meshPosition.x = 100000;
    quidbtn.enablePLayerInteract = false;

    GLFWimage icon;
    icon.height = 20;
    icon.width = 20;
    icon.pixels = new unsigned char[65535];
    eng.copyucharArray(icon_texture().pixels, icon.pixels);
    glfwSetWindowIcon(eng.window, 1, &icon);

    double lastTime = glfwGetTime();
    int nbFrames = 0;
    string tittle;
    double currentTime;

    while (!glfwWindowShouldClose(eng.window)){
        mousecallback();

        if(passescnt == 50){
            passescnt = 0;
            cash = 50;
        }

        eng.beginShadowPass(0);
        switch(grass){
            case false:
            drawwaystone();
            break;
            case true:
            drawgrassway(enablegas);
            break;
        }
        switch(speedlimit){
            case 1:
            limitsg[0].Draw(eng);
            break;
            case 2:
            limitsg[1].Draw(eng);
            break;
        }
        drawCar();
        eng.beginMainPass();
        if(menu == false){
            movecallback();
        }

        eng.shadowTrans.buildtranslatemat(lPos, 0);
        eng.setLight(0, vec3(-lPos.x, 5, lPos.z), vec3(1, 1, 1), 1);
        if(eng.pos.z > lPos.z+8){
            lPos.z = eng.pos.z+8;
        }
        if(menu == false){
            drawmoneyindic();
        }
        switch(grass){
            case false:
            drawwaystone();
            break;
            case true:
            drawgrassway(enablegas);
            break;
        }
        switch(speedlimit){
            case 1:
            limitsg[0].Draw(eng);
            break;
            case 2:
            limitsg[1].Draw(eng);
            break;
        }
        drawCar();
        if(menu == true){
            platbtn.Draw(eng);
            fullscreen.Draw(eng);
            quidbtn.Draw(eng);
        }

        if(playzone.update(eng.resolution, mousepos, mouseclicked) == true && menu == true){
            menu = false;
            mousefocused = true;
        }

        if(quitzone.update(eng.resolution, mousepos, mouseclicked) == true && menu == true){
            glfwSetWindowMonitor(eng.window, NULL, 0, 0, eng.resolution.x, eng.resolution.y, 60);
            return 1;
        }

        if(fullzone.update(eng.resolution, mousepos, mouseclicked) == true && menu == true){
            switch (fllscreen){
                case false:
                glfwSetWindowMonitor(eng.window, glfwGetPrimaryMonitor(), 0, 0, eng.resolution.x, eng.resolution.y, 60);
                fllscreen = true;
                break;
                case true:
                glfwSetWindowMonitor(eng.window, NULL, 0, 0, eng.resolution.x, eng.resolution.y, 60);
                fllscreen = false;
                break;
            }
        }

        eng.endFrame();

        currentTime = glfwGetTime();
        nbFrames++;
        if ( currentTime - lastTime >= 1.0 ){
            tittle = to_string(nbFrames)+" FPS / Carpats (x86-64) / Linux";
            glfwSetWindowTitle(eng.window, tittle.c_str());
            nbFrames = 0;
            lastTime += 1.0;
            if(enginerun == true && fuel > 0){
                fuel--;
                if(speedlimit == 1 && transmission > 4){
                    cash -= 5;
                }
                if(speedlimit == 2 && transmission > 6){
                    cash -= 5;
                }
            }else{
            }
        }
        if(cash <= 0 || fuel == 0){
            cash = 50;
            fuel = 120;
            lPos.z = 0;
            eng.camsize.y = 2.5;
            eng.pos = vec3(1.92, -1.95, 1.7);
            eng.rot = vec2(2.4, 0.019);
            carcas.meshPosition.z = zpos;
            saloon.meshPosition.z = zpos;
            stwheel.meshPosition.z = zpos;
            wheels[0].meshPosition.z = zpos - 1.8;
            wheels[1].meshPosition.z = zpos + 2.4;
            incar = false;
            enablegas = false;
            grass = false;
            splm = false;
            is30 = false;
            speedlimit = 0;
            passescnt = 0;
        }
    }
    return 1;
}