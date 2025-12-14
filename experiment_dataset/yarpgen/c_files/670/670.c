/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = ((((-1 + (min(64, 8510042986640632383))))) ? ((614005874 ? (arr_1 [i_0 - 2]) : 8510042986640632372)) : (((max(60, 165)))));
        arr_4 [i_0] |= (min(4294967286, (max(7978645155087435447, (!65515)))));
        var_20 -= ((((((((1 ? 11818318309821429734 : 614005874))) ? 2721857378 : 113))) ? (arr_0 [i_0 - 1]) : (max(((((arr_0 [14]) == 41))), (arr_2 [i_0 - 2])))));
    }
    for (int i_1 = 3; i_1 < 24;i_1 += 1)
    {
        arr_7 [i_1] = (min(6628425763888121881, (-7978645155087435447 + 109)));
        var_21 &= ((((max(-27, -80))) ? -61 : (arr_6 [4])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_22 = 3896944180;
        var_23 = 59386;
    }
    var_24 = 614005874;
    #pragma endscop
}
