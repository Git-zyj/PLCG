/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((min(var_12, var_9))), (((var_6 && (!var_14))))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [12] [i_0] = (max((~var_3), var_8));
        arr_3 [0] = ((!(((~(var_12 & var_6))))));
    }
    var_16 = var_6;
    var_17 = (max((((((var_1 ? var_1 : var_1))) | (min(var_7, var_9)))), var_10));

    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_18 = (max(var_18, (((-(max((~var_12), var_9)))))));
                        var_19 = (var_3 / var_9);
                        arr_13 [i_4] [i_4] [i_3] [i_2] [i_4] [i_1] &= ((((!(var_0 * var_3))) ? ((var_8 ? (var_6 || var_0) : (!var_1))) : (~var_3)));
                        var_20 = ((((!(var_8 ^ var_0)))) & (!var_10));
                        var_21 = (((((~var_8) ? (!var_5) : var_6)) >> (((((var_8 ? var_3 : var_1)) > (var_2 == var_7))))));
                    }
                }
            }
        }
        arr_14 [i_1] = ((((max(var_4, var_9))) || (var_6 <= var_14)));
        var_22 = ((~((~(var_5 + var_12)))));
    }
    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        var_23 ^= ((((((var_4 + var_5) ? (var_0 == var_0) : var_7))) / (max((var_14 == var_5), ((var_4 ? var_14 : var_12))))));
        var_24 ^= (((((max(var_14, var_4)) | (var_12 | var_7)))) ? ((((var_2 == (var_7 == var_2))))) : ((-((var_1 ? var_14 : var_13)))));
    }
    #pragma endscop
}
