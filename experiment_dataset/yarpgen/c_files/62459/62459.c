/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((max(((var_12 >> (var_5 - 18559994))), var_12)) >> ((((max(var_5, var_7))) / (max(var_6, var_2))))));
    var_17 = (max(var_17, (((((((var_3 / var_13) * (var_13 / var_7)))) ? (min(var_10, (var_7 < var_11))) : (((((var_14 / var_7) && ((min(var_6, var_11))))))))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = ((var_11 ? (((-6 & 0) & (var_6 + var_9))) : (((var_3 / var_15) & (min(var_10, var_3))))));
                    arr_9 [i_2] = (max((0 != 1), (((var_2 + var_4) > (var_15 - var_15)))));
                    var_19 = (min(var_19, ((((var_6 - var_4) / (var_15 + var_8))))));
                }
            }
        }
        var_20 = (min(var_7, ((var_0 ? (497 + 1) : (var_7 + var_12)))));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_21 = ((((var_7 + (var_13 != var_3))) * (((((max(var_14, var_14))) * (var_3 & var_8))))));
        var_22 = (((var_5 - var_2) / var_14));
        var_23 = (max((((var_0 > (var_9 & var_5)))), (((var_3 % var_2) & (var_12 + var_9)))));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 8;i_5 += 1)
        {
            {
                var_24 = var_9;
                var_25 = ((((var_0 >> ((min(var_11, var_3))))) ^ (((((var_10 << (var_11 - 167)))) ? ((min(var_8, var_11))) : (var_8 | var_3)))));
                arr_17 [i_5] [i_5] = var_5;
            }
        }
    }
    #pragma endscop
}
