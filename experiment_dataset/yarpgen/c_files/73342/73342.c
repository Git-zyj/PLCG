/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((min(-646, (-566963216 - 3130295172))), var_3));
    var_11 += 10;
    var_12 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 *= ((-650 - (max(1204453788, 6))));
        var_14 = (min((min(250, 3130295169)), ((min(24962, 92)))));
        arr_2 [i_0] = (min((!2047), (min(1204453774, -2129377959))));
        var_15 = ((!(((65520 && 160) || (((1 ? 248 : 0)))))));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_6 [5] = 254;
        var_16 = (max((~4076522782), ((211 ? 1007587308450054302 : 249))));
        arr_7 [i_1 + 1] [i_1 + 1] = (min(((((116 != 1) + (~1)))), (min(255, 1164672124))));
        arr_8 [i_1 + 1] = (max((max(282596107, 3886554506)), ((min(113, -194287454)))));
        var_17 = -1;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_11 [i_2] [8] = ((-(0 + 4596293108006138929)));
        var_18 -= 59042;
    }
    #pragma endscop
}
