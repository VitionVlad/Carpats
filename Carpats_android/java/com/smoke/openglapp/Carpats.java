package com.smoke.openglapp;

import com.smoke.openglapp.car.carcas_model;
import com.smoke.openglapp.car.carcas_normals;
import com.smoke.openglapp.car.carcas_uv;
import com.smoke.openglapp.car.saloon_model;
import com.smoke.openglapp.car.saloon_normals;
import com.smoke.openglapp.car.saloon_uv;
import com.smoke.openglapp.car.steering_wheel_model;
import com.smoke.openglapp.car.steering_wheel_normals;
import com.smoke.openglapp.car.steering_wheel_uv;
import com.smoke.openglapp.car.wheels_model;
import com.smoke.openglapp.car.wheels_normals;
import com.smoke.openglapp.car.wheels_uv;
import com.smoke.openglapp.textures.albedo_texture;
import com.smoke.openglapp.textures.dollar_texture;
import com.smoke.openglapp.textures.intico_texture;
import com.smoke.openglapp.textures.l30_texture;
import com.smoke.openglapp.textures.l60_texture;
import com.smoke.openglapp.textures.lowflppm_texture;
import com.smoke.openglapp.textures.n0_texture;
import com.smoke.openglapp.textures.n7_texture;
import com.smoke.openglapp.textures.n8_texture;
import com.smoke.openglapp.textures.n9_texture;
import com.smoke.openglapp.textures.spec_texture;
import com.smoke.openglapp.textures.tr1_texture;
import com.smoke.openglapp.textures.tr2_texture;
import com.smoke.openglapp.textures.tr3_texture;
import com.smoke.openglapp.textures.tr4_texture;
import com.smoke.openglapp.textures.tr5_texture;
import com.smoke.openglapp.textures.tr6_texture;
import com.smoke.openglapp.textures.trn_texture;
import com.smoke.openglapp.textures.trr_texture;
import com.smoke.openglapp.ways.fence_model;
import com.smoke.openglapp.ways.fence_normals;
import com.smoke.openglapp.ways.fence_uv;
import com.smoke.openglapp.ways.gas_model;
import com.smoke.openglapp.ways.gas_normals;
import com.smoke.openglapp.ways.gas_uv;
import com.smoke.openglapp.ways.mountain_model;
import com.smoke.openglapp.ways.mountain_normals;
import com.smoke.openglapp.ways.mountain_uv;
import com.smoke.openglapp.ways.speedlm_model;
import com.smoke.openglapp.ways.speedlm_normals;
import com.smoke.openglapp.ways.speedlm_uv;
import com.smoke.openglapp.ways.stone_model;
import com.smoke.openglapp.ways.stone_normals;
import com.smoke.openglapp.ways.stone_uv;
import com.smoke.openglapp.ways.waustone_model;
import com.smoke.openglapp.ways.waustone_normals;
import com.smoke.openglapp.ways.waustone_uv;
import com.smoke.openglapp.ways.waygrass_model;
import com.smoke.openglapp.ways.waygrass_normals;
import com.smoke.openglapp.ways.waygrass_uv;

import java.util.Random;

public class Carpats {
    float cspeed = 0.05f;

    float speed = 0.05f;

    int transmission = 7;

    boolean mousefocused = true;

    boolean incar = true;

    boolean nearcar = true;

    boolean enginerun = true;

    int fuel = 120;

    int cash = 50;

    boolean nearstation = false;

    vec3 lPos = new vec3(0, -5, 0);

    boolean menu = false;

    int passescnt = 0;

    Mesh carcas = new Mesh();
    Mesh saloon = new Mesh();
    Mesh stwheel = new Mesh();
    Mesh[] wheels = new Mesh[2];
    float zpos = 0.7f;

    Mesh[] tr = new Mesh[8];
    Mesh[] sym1 = new Mesh[10];
    Mesh[] sym2 = new Mesh[10];
    Mesh lowfl = new Mesh();
    Mesh[] speedlm = new Mesh[2];
    Mesh dolarsym = new Mesh();
    Mesh interactm= new Mesh();

    int speedlimit = 0;

    boolean enablegas = false;

    boolean grass = false;

    boolean splm = false;

    boolean is30 = false;

    boolean randomBool(){
        Random rd = new Random();
        return rd.nextBoolean();
    }

    public void initCar(Engine eng){
        for(int i = 0; i != 8; i++){
            tr[i] = new Mesh();
            tr[i].vertexes = new float[18];
            tr[i].vertexes[0] = -1;
            tr[i].vertexes[1] = 0.9f;
            tr[i].vertexes[2] = 0;
            tr[i].vertexes[3] = -1;
            tr[i].vertexes[4] = 1;
            tr[i].vertexes[5] = 0;
            tr[i].vertexes[6] = -0.9f;
            tr[i].vertexes[7] = 1;
            tr[i].vertexes[8] = 0;
            tr[i].vertexes[9] = -1;
            tr[i].vertexes[10] = 0.9f;
            tr[i].vertexes[11] = 0;
            tr[i].vertexes[12] = -0.9f;
            tr[i].vertexes[13] = 1;
            tr[i].vertexes[14] = 0;
            tr[i].vertexes[15] = -0.9f;
            tr[i].vertexes[16] = 0.9f;
            tr[i].vertexes[17] = 0;

            tr[i].uv = new float[12];
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

            tr[i].normals = new float[18];
        }

        tr[0].texture = new tr1_texture().pixels;
        tr[1].texture = new tr2_texture().pixels;
        tr[2].texture = new tr3_texture().pixels;
        tr[3].texture = new tr4_texture().pixels;
        tr[4].texture = new tr5_texture().pixels;
        tr[5].texture = new tr6_texture().pixels;
        tr[6].texture = new trr_texture().pixels;
        tr[7].texture = new trn_texture().pixels;

        tr[0].specular = new tr1_texture().pixels;
        tr[1].specular = new tr2_texture().pixels;
        tr[2].specular = new tr3_texture().pixels;
        tr[3].specular = new tr4_texture().pixels;
        tr[4].specular = new tr5_texture().pixels;
        tr[5].specular = new tr6_texture().pixels;
        tr[6].specular = new trr_texture().pixels;
        tr[7].specular = new trn_texture().pixels;

        for(int i = 0; i!= 8; i++){
            tr[i].texResolution = new tr1_texture().res;
            tr[i].initMesh(new res().fragmentuiShaderCode, new res().vertexuiShaderCode, eng);
            tr[i].meshPosition.x = 100000;
            tr[i].enablePLayerInteract = false;
        }


        for(int i = 0; i != 10; i++){
            sym1[i] = new Mesh();
            sym1[i].vertexes = new float[18];
            sym1[i].vertexes[0] = -0.7f;
            sym1[i].vertexes[1] = 0.9f;
            sym1[i].vertexes[1] = 0.9f;
            sym1[i].vertexes[2] = 0;
            sym1[i].vertexes[3] = -0.7f;
            sym1[i].vertexes[4] = 1;
            sym1[i].vertexes[5] = 0;
            sym1[i].vertexes[6] = -0.6f;
            sym1[i].vertexes[7] = 1;
            sym1[i].vertexes[8] = 0;
            sym1[i].vertexes[9] = -0.7f;
            sym1[i].vertexes[10] = 0.9f;
            sym1[i].vertexes[11] = 0;
            sym1[i].vertexes[12] = -0.6f;
            sym1[i].vertexes[13] = 1;
            sym1[i].vertexes[14] = 0;
            sym1[i].vertexes[15] = -0.6f;
            sym1[i].vertexes[16] = 0.9f;
            sym1[i].vertexes[17] = 0;

            sym1[i].uv = new float[12];
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

            sym1[i].normals = new float[18];
        }

        sym1[0].texture = new n0_texture().pixels;
        sym1[1].texture = new tr1_texture().pixels;
        sym1[2].texture = new tr2_texture().pixels;
        sym1[3].texture = new tr3_texture().pixels;
        sym1[4].texture = new tr4_texture().pixels;
        sym1[5].texture = new tr5_texture().pixels;
        sym1[6].texture = new tr6_texture().pixels;
        sym1[7].texture = new n7_texture().pixels;
        sym1[8].texture = new n8_texture().pixels;
        sym1[9].texture = new n9_texture().pixels;

        sym1[0].specular = new n0_texture().pixels;
        sym1[1].specular = new tr1_texture().pixels;
        sym1[2].specular = new tr2_texture().pixels;
        sym1[3].specular = new tr3_texture().pixels;
        sym1[4].specular = new tr4_texture().pixels;
        sym1[5].specular = new tr5_texture().pixels;
        sym1[6].specular = new tr6_texture().pixels;
        sym1[7].specular = new n7_texture().pixels;
        sym1[8].specular = new n8_texture().pixels;
        sym1[9].specular = new n9_texture().pixels;

        for(int i = 0; i!= 10; i++){
            sym1[i].texResolution = new tr1_texture().res;
            sym1[i].initMesh(new res().fragmentuiShaderCode, new res().vertexuiShaderCode, eng);
            sym1[i].meshPosition.x = 100000;
            sym1[i].enablePLayerInteract = false;
        }

        for(int i = 0; i != 10; i++){
            sym2[i] = new Mesh();
            sym2[i].vertexes = new float[18];
            sym2[i].vertexes[0] = -0.6f;
            sym2[i].vertexes[1] = 0.9f;
            sym2[i].vertexes[2] = 0;
            sym2[i].vertexes[3] = -0.6f;
            sym2[i].vertexes[4] = 1;
            sym2[i].vertexes[5] = 0;
            sym2[i].vertexes[6] = -0.5f;
            sym2[i].vertexes[7] = 1;
            sym2[i].vertexes[8] = 0;
            sym2[i].vertexes[9] = -0.6f;
            sym2[i].vertexes[10] = 0.9f;
            sym2[i].vertexes[11] = 0;
            sym2[i].vertexes[12] = -0.5f;
            sym2[i].vertexes[13] = 1;
            sym2[i].vertexes[14] = 0;
            sym2[i].vertexes[15] = -0.5f;
            sym2[i].vertexes[16] = 0.9f;
            sym2[i].vertexes[17] = 0;

            sym2[i].uv = new float[12];
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

            sym2[i].normals = new float[18];
        }

        sym2[0].texture = new n0_texture().pixels;
        sym2[1].texture = new tr1_texture().pixels;
        sym2[2].texture = new tr2_texture().pixels;
        sym2[3].texture = new tr3_texture().pixels;
        sym2[4].texture = new tr4_texture().pixels;
        sym2[5].texture = new tr5_texture().pixels;
        sym2[6].texture = new tr6_texture().pixels;
        sym2[7].texture = new n7_texture().pixels;
        sym2[8].texture = new n8_texture().pixels;
        sym2[9].texture = new n9_texture().pixels;

        sym2[0].specular = new n0_texture().pixels;
        sym2[1].specular = new tr1_texture().pixels;
        sym2[2].specular = new tr2_texture().pixels;
        sym2[3].specular = new tr3_texture().pixels;
        sym2[4].specular = new tr4_texture().pixels;
        sym2[5].specular = new tr5_texture().pixels;
        sym2[6].specular = new tr6_texture().pixels;
        sym2[7].specular = new n7_texture().pixels;
        sym2[8].specular = new n8_texture().pixels;
        sym2[9].specular = new n9_texture().pixels;

        for(int i = 0; i!= 10; i++){
            sym2[i].texResolution = new tr1_texture().res;
            sym2[i].initMesh(new res().fragmentuiShaderCode, new res().vertexuiShaderCode, eng);
            sym2[i].meshPosition.x = 100000;
            sym2[i].enablePLayerInteract = false;
        }

        for(int i = 0; i != 2; i++){
            speedlm[i] = new Mesh();
            speedlm[i].vertexes = new float[18];
            speedlm[i].vertexes[0] = -0.8f;
            speedlm[i].vertexes[1] = 0.9f;
            speedlm[i].vertexes[2] = 0;
            speedlm[i].vertexes[3] = -0.8f;
            speedlm[i].vertexes[4] = 1;
            speedlm[i].vertexes[5] = 0;
            speedlm[i].vertexes[6] = -0.7f;
            speedlm[i].vertexes[7] = 1;
            speedlm[i].vertexes[8] = 0;
            speedlm[i].vertexes[9] = -0.8f;
            speedlm[i].vertexes[10] = 0.9f;
            speedlm[i].vertexes[11] = 0;
            speedlm[i].vertexes[12] = -0.7f;
            speedlm[i].vertexes[13] = 1;
            speedlm[i].vertexes[14] = 0;
            speedlm[i].vertexes[15] = -0.7f;
            speedlm[i].vertexes[16] = 0.9f;
            speedlm[i].vertexes[17] = 0;

            speedlm[i].uv = new float[12];
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

            speedlm[i].normals = new float[18];
        }
        speedlm[0].texture = new l30_texture().pixels;
        speedlm[1].texture = new l60_texture().pixels;
        speedlm[0].specular = new l30_texture().pixels;
        speedlm[1].specular = new l60_texture().pixels;
        for(int i = 0; i!= 2; i++){
            speedlm[i].texResolution = new l30_texture().res;
            speedlm[i].initMesh(new res().fragmentuiShaderCode, new res().vertexuiShaderCode, eng);
            speedlm[i].meshPosition.x = 100000;
            speedlm[i].enablePLayerInteract = false;
        }


        lowfl.vertexes = new float[18];
        lowfl.vertexes[0] = -0.9f;
        lowfl.vertexes[1] = 0.9f;
        lowfl.vertexes[2] = 0;
        lowfl.vertexes[3] = -0.9f;
        lowfl.vertexes[4] = 1;
        lowfl.vertexes[5] = 0;
        lowfl.vertexes[6] = -0.8f;
        lowfl.vertexes[7] = 1;
        lowfl.vertexes[8] = 0;
        lowfl.vertexes[9] = -0.9f;
        lowfl.vertexes[10] = 0.9f;
        lowfl.vertexes[11] = 0;
        lowfl.vertexes[12] = -0.8f;
        lowfl.vertexes[13] = 1;
        lowfl.vertexes[14] = 0;
        lowfl.vertexes[15] = -0.8f;
        lowfl.vertexes[16] = 0.9f;
        lowfl.vertexes[17] = 0;
        lowfl.uv = new float[12];
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
        lowfl.normals = new float[18];
        lowfl.texture = new lowflppm_texture().pixels;
        lowfl.specular = new lowflppm_texture().pixels;
        lowfl.texResolution = new lowflppm_texture().res;
        lowfl.initMesh(new res().fragmentuiShaderCode, new res().vertexuiShaderCode, eng);
        lowfl.meshPosition.x = 100000;
        lowfl.enablePLayerInteract = false;

        dolarsym.vertexes = new float[18];
        dolarsym.vertexes[0] = -0.5f;
        dolarsym.vertexes[1] = 0.9f;
        dolarsym.vertexes[2] = 0;
        dolarsym.vertexes[3] = -0.5f;
        dolarsym.vertexes[4] = 1;
        dolarsym.vertexes[5] = 0;
        dolarsym.vertexes[6] = -0.4f;
        dolarsym.vertexes[7] = 1;
        dolarsym.vertexes[8] = 0;
        dolarsym.vertexes[9] = -0.5f;
        dolarsym.vertexes[10] = 0.9f;
        dolarsym.vertexes[11] = 0;
        dolarsym.vertexes[12] = -0.4f;
        dolarsym.vertexes[13] = 1;
        dolarsym.vertexes[14] = 0;
        dolarsym.vertexes[15] = -0.4f;
        dolarsym.vertexes[16] = 0.9f;
        dolarsym.vertexes[17] = 0;
        dolarsym.uv = new float[12];
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
        dolarsym.normals = new float[18];
        dolarsym.texture = new dollar_texture().pixels;
        dolarsym.specular = new dollar_texture().pixels;
        dolarsym.texResolution = new dollar_texture().res;
        dolarsym.initMesh(new res().fragmentuiShaderCode, new res().vertexuiShaderCode, eng);
        dolarsym.meshPosition.x = 100000;
        dolarsym.enablePLayerInteract = false;

        interactm.vertexes = new float[18];
        interactm.vertexes[0] = -0.4f;
        interactm.vertexes[1] = 0.9f;
        interactm.vertexes[2] = 0;
        interactm.vertexes[3] = -0.4f;
        interactm.vertexes[4] = 1;
        interactm.vertexes[5] = 0;
        interactm.vertexes[6] = -0.3f;
        interactm.vertexes[7] = 1;
        interactm.vertexes[8] = 0;
        interactm.vertexes[9] = -0.4f;
        interactm.vertexes[10] = 0.9f;
        interactm.vertexes[11] = 0;
        interactm.vertexes[12] = -0.3f;
        interactm.vertexes[13] = 1;
        interactm.vertexes[14] = 0;
        interactm.vertexes[15] = -0.3f;
        interactm.vertexes[16] = 0.9f;
        interactm.vertexes[17] = 0;
        interactm.uv = new float[12];
        interactm.uv[0] = 0;
        interactm.uv[1] = 1;
        interactm.uv[2] = 0;
        interactm.uv[3] = 0;
        interactm.uv[4] = 1;
        interactm.uv[5] = 0;
        interactm.uv[6] = 0;
        interactm.uv[7] = 1;
        interactm.uv[8] = 1;
        interactm.uv[9] = 0;
        interactm.uv[10] = 1;
        interactm.uv[11] = 1;
        interactm.normals = new float[18];
        interactm.texture = new intico_texture().pixels;
        interactm.specular = new intico_texture().pixels;
        interactm.texResolution = new intico_texture().res;
        interactm.initMesh(new res().fragmentuiShaderCode, new res().vertexuiShaderCode, eng);
        interactm.meshPosition.x = 100000;
        interactm.enablePLayerInteract = false;

        carcas.vertexes = new carcas_model().verts;
        carcas.uv = new carcas_uv().verts;
        carcas.normals = new carcas_normals().verts;
        carcas.texture = new albedo_texture().pixels;
        carcas.specular = new spec_texture().pixels;
        carcas.texResolution = new albedo_texture().res;
        carcas.meshPosition.z = zpos;
        carcas.meshPosition.y = 1.5f;
        carcas.initMesh(new res().fragmentShaderCode, new res().vertexShaderCode, eng);
        carcas.enablePLayerInteract = false;

        saloon.vertexes = new saloon_model().verts;
        saloon.uv = new saloon_uv().verts;
        saloon.normals = new saloon_normals().verts;
        saloon.texture = new albedo_texture().pixels;
        saloon.specular = new spec_texture().pixels;
        saloon.texResolution = new albedo_texture().res;
        saloon.meshPosition.z = zpos;
        saloon.meshPosition.y = 1.5f;
        saloon.initMesh(new res().fragmentShaderCode, new res().vertexShaderCode, eng);
        saloon.enablePLayerInteract = false;

        stwheel.vertexes = new steering_wheel_model().verts;
        stwheel.uv = new steering_wheel_uv().verts;
        stwheel.normals = new steering_wheel_normals().verts;
        stwheel.texture = new albedo_texture().pixels;
        stwheel.specular = new spec_texture().pixels;
        stwheel.texResolution = new albedo_texture().res;
        stwheel.meshPosition.z = zpos;
        stwheel.meshPosition.y = 1.5f;
        stwheel.initMesh(new res().fragmentShaderCode, new res().vertexShaderCode, eng);
        stwheel.enablePLayerInteract = false;

        wheels[0] = new Mesh();
        wheels[0].vertexes = new wheels_model().verts;
        wheels[0].uv = new wheels_uv().verts;
        wheels[0].normals = new wheels_normals().verts;
        wheels[0].texture = new albedo_texture().pixels;
        wheels[0].specular = new spec_texture().pixels;
        wheels[0].texResolution = new albedo_texture().res;
        wheels[0].meshPosition.z = zpos - 1.3f;
        wheels[0].meshPosition.y = 1.6f;
        wheels[0].meshPosition.x = -6.645f;
        wheels[0].initMesh(new res().fragmentShaderCode, new res().vertexShaderCode, eng);
        wheels[0].enablePLayerInteract = false;

        wheels[1] = new Mesh();
        wheels[1].vertexes = new wheels_model().verts;
        wheels[1].uv = new wheels_uv().verts;
        wheels[1].normals = new wheels_normals().verts;
        wheels[1].texture = new albedo_texture().pixels;
        wheels[1].specular = new spec_texture().pixels;
        wheels[1].texResolution = new albedo_texture().res;
        wheels[1].meshPosition.z = zpos + 2.3f;
        wheels[1].meshPosition.y = 1.6f;
        wheels[1].meshPosition.x = -6.645f;
        wheels[1].initMesh(new res().fragmentShaderCode, new res().vertexShaderCode, eng);
        wheels[1].enablePLayerInteract = false;
    }
    void drawCar(Engine eng){
        if(incar == true){
            nearcar = true;
            wheels[1].enablePLayerInteract = false;
            wheels[0].enablePLayerInteract = false;
            stwheel.enablePLayerInteract = false;
            saloon.enablePLayerInteract = false;
            carcas.enablePLayerInteract = false;
            eng.pos.x = 0.9f;
            carcas.meshPosition.z = zpos - eng.pos.z;
            saloon.meshPosition.z = zpos - eng.pos.z;
            stwheel.meshPosition.z = zpos - eng.pos.z;
            wheels[0].meshPosition.z = zpos - 1.8f - eng.pos.z;
            wheels[1].meshPosition.z = zpos + 2.4f - eng.pos.z;
            if(!menu){
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
        if(eng.between(eng.pos.x, carcas.meshPosition.x - carcas.aabb.x - 0.2f, carcas.meshPosition.x + carcas.aabb.x + 0.2f) && eng.between(-eng.pos.z, carcas.meshPosition.z - carcas.aabb.z - 0.2f, carcas.aabb.z + carcas.meshPosition.z + 0.2f)){
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
        if(!menu){
            interactm.Draw(eng);
        }
    }
    Mesh fence;
    Mesh mountain;
    Mesh waystone;
    void initwaystone(Engine eng){
        waystone = new Mesh();
        waystone.vertexes = new waustone_model().verts;
        waystone.uv = new waustone_uv().verts;
        waystone.normals = new waustone_normals().verts;
        waystone.texture = new albedo_texture().pixels;
        waystone.specular = new spec_texture().pixels;
        waystone.texResolution = new albedo_texture().res;
        waystone.meshPosition.y = -0.5f;
        waystone.meshPosition.z = -90;
        waystone.initMesh(new res().fragmentShaderCode, new  res().vertexShaderCode, eng);

        fence = new Mesh();
        fence.vertexes = new fence_model().verts;
        fence.uv = new fence_uv().verts;
        fence.normals = new fence_normals().verts;
        fence.texture = new albedo_texture().pixels;
        fence.specular = new spec_texture().pixels;
        fence.texResolution = new albedo_texture().res;
        fence.meshPosition.y = -0.5f;
        fence.meshPosition.x = -10;
        fence.meshPosition.z = -90;
        fence.initMesh(new  res().fragmentShaderCode, new  res().vertexShaderCode, eng);

        mountain = new Mesh();
        mountain.vertexes = new mountain_model().verts;
        mountain.uv = new mountain_uv().verts;
        mountain.normals = new mountain_normals().verts;
        mountain.texture = new albedo_texture().pixels;
        mountain.specular = new spec_texture().pixels;
        mountain.texResolution = new albedo_texture().res;
        mountain.meshPosition.y = -0.5f;
        mountain.meshPosition.x = 10;
        mountain.meshPosition.z = -90;
        mountain.initMesh(new  res().fragmentShaderCode, new  res().vertexShaderCode, eng);
    }

    void drawwaystone(Engine eng){
        waystone.Draw(eng);
        fence.Draw(eng);
        mountain.Draw(eng);
    }
    Mesh waygrass = new Mesh();
    Mesh gas = new Mesh();
    Mesh[] gm = new Mesh[2];
    Mesh[] stone = new Mesh[2];
    void initgrassway(Engine eng){
        waygrass.vertexes = new waygrass_model().verts;
        waygrass.uv = new waygrass_uv().verts;
        waygrass.normals = new waygrass_normals().verts;
        waygrass.texture = new albedo_texture().pixels;
        waygrass.specular = new spec_texture().pixels;
        waygrass.texResolution = new albedo_texture().res;
        waygrass.meshPosition.y = -0.5f;
        waygrass.meshPosition.z = -90;
        waygrass.initMesh(new  res().fragmentShaderCode, new  res().vertexShaderCode, eng);

        gas.vertexes = new gas_model().verts;
        gas.uv = new gas_uv().verts;
        gas.normals = new gas_normals().verts;
        gas.texture = new albedo_texture().pixels;
        gas.specular = new spec_texture().pixels;
        gas.texResolution = new albedo_texture().res;
        gas.meshPosition.y = 2.5f;
        gas.meshPosition.x = -18;
        gas.meshPosition.z = -90;
        gas.initMesh(new  res().fragmentShaderCode, new  res().vertexShaderCode, eng);

        gm[0] = new Mesh();
        gm[0].vertexes = new mountain_model().verts;
        gm[0].uv = new mountain_uv().verts;
        gm[0].normals = new mountain_normals().verts;
        gm[0].texture = new albedo_texture().pixels;
        gm[0].specular = new spec_texture().pixels;
        gm[0].texResolution = new albedo_texture().res;
        gm[0].meshPosition.y = -0.5f;
        gm[0].meshPosition.x = 10;
        gm[0].meshPosition.z = -90;
        gm[0].initMesh(new  res().fragmentShaderCode, new  res().vertexShaderCode, eng);
        gm[1] = new Mesh();
        gm[1].vertexes = new mountain_model().verts;
        gm[1].uv = new mountain_uv().verts;
        gm[1].normals = new mountain_normals().verts;
        gm[1].texture = new albedo_texture().pixels;
        gm[1].specular = new spec_texture().pixels;
        gm[1].texResolution = new albedo_texture().res;
        gm[1].meshPosition.y = -0.5f;
        gm[1].meshPosition.x = -20;
        gm[1].meshPosition.z = -90;
        gm[1].initMesh(new  res().fragmentShaderCode, new  res().vertexShaderCode, eng);

        stone[0] = new Mesh();
        stone[0].vertexes = new stone_model().verts;
        stone[0].uv = new stone_uv().verts;
        stone[0].normals = new stone_normals().verts;
        stone[0].texture = new albedo_texture().pixels;
        stone[0].specular = new spec_texture().pixels;
        stone[0].texResolution = new albedo_texture().res;
        stone[0].meshPosition.y = -0.5f;
        stone[0].meshPosition.x = -17.5f;
        stone[0].meshPosition.z = 10;
        stone[0].initMesh(new  res().fragmentShaderCode, new  res().vertexShaderCode, eng);
        stone[1] = new Mesh();
        stone[1].vertexes = new stone_model().verts;
        stone[1].uv = new stone_uv().verts;
        stone[1].normals = new stone_normals().verts;
        stone[1].texture = new albedo_texture().pixels;
        stone[1].specular = new spec_texture().pixels;
        stone[1].texResolution = new albedo_texture().res;
        stone[1].meshPosition.y = -0.5f;
        stone[1].meshPosition.x = -17.5f;
        stone[1].meshPosition.z = -190;
        stone[1].initMesh(new  res().fragmentShaderCode, new  res().vertexShaderCode, eng);
    }
    void drawgrassway(boolean gasstation, Engine eng){
        waygrass.Draw(eng);
        if(gasstation == true){
            gas.Draw(eng);
            if(eng.between(-eng.pos.x, gas.meshPosition.x - gas.aabb.x - 0.2f, gas.meshPosition.x + gas.aabb.x + 0.2f) && eng.between(-eng.pos.z, gas.meshPosition.z - gas.aabb.z - 0.2f, gas.aabb.z + gas.meshPosition.z + 0.2f)){
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
    void drawmoneyindic(Engine eng){
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
    Mesh[] limitsg = new Mesh[2];
    void initlimitsg(Engine eng){
        limitsg[0] = new Mesh();
        limitsg[0].vertexes = new speedlm_model().verts;
        limitsg[0].normals = new speedlm_normals().verts;
        limitsg[0].uv = new speedlm_uv().verts;
        limitsg[0].texture = new l30_texture().pixels;
        limitsg[0].specular = new spec_texture().pixels;
        limitsg[0].texResolution = new albedo_texture().res;
        limitsg[0].meshPosition.y = -0.5f;
        limitsg[0].meshPosition.x = 5;
        limitsg[0].meshPosition.z = -5;
        limitsg[0].initMesh(new  res().fragmentShaderCode, new  res().vertexShaderCode, eng);
        limitsg[1] = new Mesh();
        limitsg[1].vertexes = new speedlm_model().verts;
        limitsg[1].normals = new speedlm_normals().verts;
        limitsg[1].uv = new speedlm_uv().verts;
        limitsg[1].texture = new l60_texture().pixels;
        limitsg[1].specular = new spec_texture().pixels;
        limitsg[1].texResolution = new albedo_texture().res;
        limitsg[1].meshPosition.y = -0.5f;
        limitsg[1].meshPosition.x = 5;
        limitsg[1].meshPosition.z = -5;
        limitsg[1].initMesh(new  res().fragmentShaderCode, new  res().vertexShaderCode, eng);
    }
}
