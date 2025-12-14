/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~var_2);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = (max(((((-(arr_0 [i_0] [i_0]))) * (-11412 || -781549866))), (arr_2 [1])));
        var_18 = ((((1 ? 16 : var_14)) < -88));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_19 &= max(((min(245, var_11))), (min(1, var_7)));
        var_20 = (((((min(((var_14 ? var_2 : var_7)), (min(var_2, -1129220867)))) + 9223372036854775807)) >> (((max(var_1, (((arr_5 [i_1]) ? var_4 : var_10)))) + 3410))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_21 = ((((((((((arr_6 [i_2]) >= (arr_7 [i_2]))))) + (((arr_6 [4]) % var_3))))) ? (((-1 > 16777208) | 1102528641)) : var_1));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    arr_15 [i_4] = (arr_6 [i_4]);
                    var_22 &= arr_9 [13] [i_3] [i_3];
                    var_23 = (min(var_23, var_1));
                }
            }
        }
    }
    var_24 += (((((var_6 ? (var_4 & var_3) : (((min(32822, -75))))))) ? var_0 : (min(var_0, var_9))));
    var_25 = ((((max(var_13, var_14))) ? var_15 : ((((var_1 | var_11) / (var_12 <= var_1))))));
    var_26 -= (((max(((-781549848 ? 2305843009205305344 : 1)), -var_0)) | ((min((var_3 * var_15), (~var_3))))));
    #pragma endscop
}
