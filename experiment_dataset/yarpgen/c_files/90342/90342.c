/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((((var_5 ? var_8 : 744232439)) * ((var_5 ? var_8 : var_2)))), (min((var_6 || var_2), (744232439 / 225)))));
    var_15 = (max(var_15, var_0));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = (max(var_16, (((((var_3 || (arr_0 [i_0]))) || (arr_0 [i_0]))))));
        var_17 = ((((-2147483647 - 1) ? (((148 ? (arr_1 [i_0] [i_0]) : 2778197388))) : 15913752027771837849)));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_18 = (min(var_18, var_3));
            arr_4 [i_0] = (((var_0 && 8812813858513827080) | var_12));
            arr_5 [i_1] [i_1] [6] = (max(((max(742, -8812813858513827080))), (-var_1 < var_1)));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_8 [i_0] [i_2] [i_2] = ((((((((var_3 ? var_12 : var_9))) ? (var_7 / var_3) : (((var_4 ? var_9 : 37)))))) ? ((var_12 >> (((arr_0 [i_0]) - 15927973083722384706)))) : ((min(149, var_8)))));
                var_19 -= (108 | 224);
                var_20 += (((max(0, (var_6 && var_3))) >> (var_4 - 63)));
                arr_9 [i_0] [i_1] [i_2] [i_0] = (((arr_7 [i_2] [i_2] [13]) ? (((arr_6 [i_0] [i_1] [i_2]) ? (((8589934591 ? (arr_6 [i_0] [i_0] [i_2]) : var_4))) : (max((arr_0 [i_0]), var_10)))) : (((((max(var_9, var_12))) | (arr_3 [i_1] [i_2]))))));
            }
        }
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 9;i_6 += 1)
                {
                    {
                        arr_22 [i_4] [i_4] = ((62996 || (((var_11 / (arr_0 [i_4 + 3]))))));
                        var_21 = ((((((arr_15 [i_6 + 1] [i_5 - 1] [i_4 + 2]) + var_11))) || var_4));
                        var_22 = (max(var_22, (107 - 108)));
                        var_23 = (min(108, 15913752027771837849));
                    }
                }
            }
        }
        arr_23 [i_3] [i_3] &= 4077974249075178798;
    }
    var_24 |= var_1;
    #pragma endscop
}
