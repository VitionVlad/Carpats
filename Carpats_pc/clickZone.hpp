#include "vec2.hpp"

#include "ivec2.hpp"

class clickZone{
    public:
    vec2 corner1 = vec2(0, 0);
    vec2 corner2 = vec2(1, 1);
    clickZone(vec2 v1, vec2 v2){
        corner1.x = v1.x;
        corner1.y = v1.y;
        corner2.x = v2.x;
        corner2.y = v2.y;
    }
    clickZone(){}
    bool update(ivec2 screenResolution, vec2 pointerCoord, bool isClicking){
        vec2 pc = vec2(pointerCoord.x / screenResolution.x, pointerCoord.y / screenResolution.y);
        return pc.x >= corner1.x && pc.y >= corner1.y && pc.x <= corner2.x && pc.y <= corner2.y && isClicking == true;
    }
};