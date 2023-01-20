package com.smoke.openglapp;

import androidx.appcompat.app.AppCompatActivity;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.WindowInsetsControllerCompat;

import android.content.Context;
import android.opengl.GLSurfaceView;

import android.os.Bundle;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

import android.os.SystemClock;
import android.view.MotionEvent;
import android.widget.RelativeLayout;

import com.smoke.openglapp.textures.begin_texture;
import com.google.android.gms.ads.AdRequest;
import com.google.android.gms.ads.AdSize;
import com.google.android.gms.ads.AdView;
import com.google.android.gms.ads.MobileAds;
import com.google.android.gms.ads.initialization.InitializationStatus;
import com.google.android.gms.ads.initialization.OnInitializationCompleteListener;

class render implements GLSurfaceView.Renderer {
    Engine eng = new Engine();

    ivec2 screenres = new ivec2();

    Carpats game = new Carpats();

    boolean enginerun = true;

    int framecnt = 0;

    clickZone transzone = new clickZone();
    clickZone usezone = new clickZone();

    void carMove(){
        if(eng.touchpos.x < screenres.x/2){
            if(game.enginerun && game.fuel > 0){
                if(game.cspeed < (game.speed * (eng.touchpos.x/screenres.x)) * game.transmission){
                    game.cspeed += 0.005;
                }
                if(game.cspeed > (game.speed * (eng.touchpos.x/screenres.x)) * game.transmission){
                    game.cspeed -= 0.005;
                }
                eng.pos.z += game.cspeed;
            }
        }else if(eng.touchpos.x > screenres.x/2){
            eng.rot.x += (((eng.touchpos.x/ (screenres.x*1.7))*2) -1)*0.1;
            eng.rot.y += (float) ((((-eng.touchpos.y/screenres.y)*2) +1)*0.01);
        }
    }

    boolean clc=false;

    Mesh platbtn = new Mesh();

    clickZone playzone = new clickZone();

    @Override
    public void onSurfaceCreated(GL10 gl10, EGLConfig eglConfig) {
        eng.Init();
        eng.shadowProj.buildperspectivemat(90, 0.1f, 100, 1, 0);
        //eng.shadowProj.buildorthomat(1, -1, 1, -1, 0.1f, 100f);
        eng.shadowTrans.buildtranslatemat(new vec3(0, -5, 0), 0);
        eng.shadowxrot.buildxrotmat(-1.5f, 0);
        eng.shadowyrot.buildyrotmat(0, 0);
        eng.setLight(0, new vec3(5, 3, 0), new vec3(1, 1, 1f), 1);
        eng.camsize.y = 2.5f;

        game.initCar(eng);
        game.initwaystone(eng);
        game.initgrassway(eng);
        game.initlimitsg(eng);

        transzone.corner1 = new vec2(0, 0);
        transzone.corner2 = new vec2(0.2f, 0.2f);
        usezone.corner1 = new vec2(0.3f, 0);
        usezone.corner2 = new vec2(0.5f, 0.2f);

        eng.camsize.y = 2.5f;
        eng.pos = new vec3(2.92f, -2.1f, 2.7f);
        eng.rot = new vec2(2.4f, 0.019f);
        game.incar = false;

        game.menu = true;

        platbtn.vertexes = new float[18];
        platbtn.vertexes[0] = -0.1f;
        platbtn.vertexes[1] = -0.2f;
        platbtn.vertexes[2] = 0;
        platbtn.vertexes[3] = -0.1f;
        platbtn.vertexes[4] = 0;
        platbtn.vertexes[5] = 0;
        platbtn.vertexes[6] = 0.1f;
        platbtn.vertexes[7] = 0;
        platbtn.vertexes[8] = 0;
        platbtn.vertexes[9] = -0.1f;
        platbtn.vertexes[10] = -0.2f;
        platbtn.vertexes[11] = 0;
        platbtn.vertexes[12] = 0.1f;
        platbtn.vertexes[13] = 0;
        platbtn.vertexes[14] = 0;
        platbtn.vertexes[15] = 0.1f;
        platbtn.vertexes[16] = -0.2f;
        platbtn.vertexes[17] = 0;

        platbtn.uv = new float[12];
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

        platbtn.normals = new float[18];

        platbtn.texture = new begin_texture().pixels;
        platbtn.specular = new begin_texture().pixels;

        platbtn.texResolution = new begin_texture().res;
        platbtn.initMesh(new res().fragmentuiShaderCode, new res().vertexuiShaderCode, eng);
        platbtn.meshPosition.x = 100000;
        platbtn.enablePLayerInteract = false;

        playzone.corner1 = new vec2(0.4f, 0.5f);
        playzone.corner2 = new vec2(0.6f, 0.6f);
    }

    @Override
    public void onSurfaceChanged(GL10 gl10, int i, int i1) {
        screenres.x = i;
        screenres.y = i1;
    }

    @Override
    public void onDrawFrame(GL10 gl10) {
        framecnt++;
        if(game.passescnt == 50){
            game.passescnt = 0;
            game.cash = 50;
        }
        eng.shadowTrans.buildtranslatemat(game.lPos, 0);
        eng.setLight(0, new vec3(-game.lPos.x, 5, game.lPos.z), new vec3(1, 1, 1f), 1);
        eng.beginShadowPass(0);

        if (!(game.grass)) {
            game.drawwaystone(eng);
        } else if (game.grass) {
            game.drawgrassway(game.enablegas, eng);
        }
        switch(game.speedlimit){
            case 1:
                game.limitsg[0].Draw(eng);
                break;
            case 2:
                game.limitsg[1].Draw(eng);
                break;
        }
        game.drawCar(eng);
        eng.beginMainPass(screenres);

        if(game.menu){
            platbtn.Draw(eng);
            clc = playzone.update(screenres, eng.touchpos, true);
            if(clc){
                game.menu=false;
            }
            clc = false;
        }

       clc = transzone.update(screenres, eng.touchpos, true);
       if(clc&&eng.allowmove&& game.incar){
           switch(game.transmission){
               case -1:
                   game.transmission = 0;
                   break;
               case 0:
                   game.transmission = 2;
                   break;
               case 2:
                   game.transmission = 3;
                   break;
               case 3:
                   game.transmission = 4;
                   break;
               case 4:
                   game.transmission = 5;
                   break;
               case 5:
                   game.transmission = 6;
                   break;
               case 6:
                   game.transmission = 7;
                   break;
               case 7:
                   game.transmission = -1;
                   break;
           }
           SystemClock.sleep(100);
       }
       clc = false;

        clc = usezone.update(screenres, eng.touchpos, true);
        if(clc&& !game.menu){
            if(game.nearcar){
                if (!(game.incar)) {
                    game.incar = true;
                    game.enginerun = true;
                } else if (game.incar) {
                    game.incar = false;
                    game.enginerun = false;
                    eng.pos.x = 2.5f;
                    eng.lastPos.x = 2.5f;
                }
                SystemClock.sleep(200);
            }
            if(game.nearstation){
                game.cash--;
                game.fuel = 300;
                SystemClock.sleep(200);
            }
        }
        clc = false;

        if(!game.menu) {
            if (game.incar) {
                carMove();
                eng.touchControls = false;
            } else {
                eng.touchControls = true;
            }
        }else{
            eng.touchControls = false;
        }

        if(eng.pos.z > game.lPos.z+8){
            game.lPos.z = eng.pos.z+8;
        }

        if(!game.menu){
            game.drawmoneyindic(eng);
        }
        if (!(game.grass)) {
            game.drawwaystone(eng);
        } else if (game.grass) {
            game.drawgrassway(game.enablegas, eng);
        }
        switch(game.speedlimit){
            case 1:
                game.limitsg[0].Draw(eng);
                break;
            case 2:
                game.limitsg[1].Draw(eng);
                break;
        }
        game.drawCar(eng);

        eng.endFrame(screenres);
        if(game.cash <= 0 || game.fuel == 0){
            game.cash = 50;
            game.fuel = 120;
            game.lPos.z = 0;
            eng.camsize.y = 2.5f;
            eng.pos = new vec3(1.92f, -1.95f, 1.7f);
            eng.rot = new vec2(2.4f, 0.019f);
            game.carcas.meshPosition.z = game.zpos;
            game.saloon.meshPosition.z = game.zpos;
            game.stwheel.meshPosition.z = game.zpos;
            game.wheels[0].meshPosition.z = game.zpos - 1.8f;
            game.wheels[1].meshPosition.z = game.zpos + 2.4f;
            game.incar = false;
            game.enablegas = false;
            game.grass = false;
            game.splm = false;
            game.is30 = false;
            game.speedlimit = 0;
            game.passescnt = 0;
        }
        if(framecnt == 90){
            if(enginerun && game.fuel > 0){
                game.fuel--;
                if(game.speedlimit == 1 && game.transmission > 4){
                    game.cash -= 5;
                }
                if(game.speedlimit == 2 && game.transmission > 6){
                    game.cash -= 5;
                }
            }
            framecnt= 0;
        }
    }
}

class surface extends GLSurfaceView {

    private final render renderer;

    private int mActivePointerId;

    @Override
    public boolean onTouchEvent(MotionEvent e) {
        if(e.getAction() == android.view.MotionEvent.ACTION_UP){
            renderer.eng.touchpos.x = 0;
            renderer.eng.touchpos.y = 0;
            renderer.eng.speed = 0;
            renderer.eng.allowmove = false;
        }else{
            renderer.eng.touchpos.x = e.getRawX();
            renderer.eng.touchpos.y = e.getRawY();
            renderer.eng.allowmove = true;
        }
        return true;
    }

    public surface(Context context) {
        super(context);
        setEGLContextClientVersion(2);

        renderer = new render();
        setRenderer(renderer);
    }
}

public class MainActivity extends AppCompatActivity {

    private GLSurfaceView glView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        WindowInsetsControllerCompat windowInsetsController = ViewCompat.getWindowInsetsController(getWindow().getDecorView());
        windowInsetsController.setSystemBarsBehavior(WindowInsetsControllerCompat.BEHAVIOR_SHOW_TRANSIENT_BARS_BY_SWIPE);
        windowInsetsController.hide(WindowInsetsCompat.Type.systemBars());
        getSupportActionBar().hide();
        glView = new surface(this);
        setContentView(glView);
        MobileAds.initialize(this, new OnInitializationCompleteListener() {
            @Override
            public void onInitializationComplete(InitializationStatus initializationStatus) {
            }
        });
        AdView adView = new AdView(this);
        adView.setAdSize(AdSize.BANNER);
        adView.setAdUnitId("ca-app-pub-6172758153697468/4422082855");
        AdRequest adRequest = new AdRequest.Builder().build();
        adView.loadAd(adRequest);
        RelativeLayout.LayoutParams layout = new RelativeLayout.LayoutParams(RelativeLayout.LayoutParams.WRAP_CONTENT, RelativeLayout.LayoutParams.WRAP_CONTENT);
        layout.width = 3000;
        addContentView(adView, layout);
    }
}