/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [1]);
        var_18 -= arr_1 [i_0];
        arr_4 [i_0] [i_0] = min(((min((min((arr_2 [i_0] [i_0]), 16465)), var_2))), (min(((-(arr_1 [23]))), 3003105975)));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (((((var_6 ? 17431 : (arr_6 [i_1])))) || -17431));
        var_19 = ((-(((max((arr_0 [i_1]), var_4)) << (((~var_1) - 95))))));
        var_20 = (((min((arr_5 [i_1]), -17432)) / var_1));
        var_21 -= (-(-17434 / -17430));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_22 = (!17443);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    arr_14 [i_2] = var_17;
                    arr_15 [i_4] [i_3] [i_2] = (max(17431, -var_10));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_23 = (min(((max(17443, (arr_19 [i_6 + 4] [i_6] [i_6 + 4] [i_5 - 1] [1] [i_5 - 1])))), (arr_19 [i_6 + 3] [i_6] [i_5] [i_5 - 1] [9] [i_5 - 1])));
                                arr_22 [i_2] [i_4] [i_4] [i_5] [i_6] &= ((min(17431, var_10)) + (17431 / var_2));
                                arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_3] &= (max(-var_10, ((min((arr_20 [i_6 + 4] [i_2] [i_4] [i_6 + 4] [i_6 - 2]), 17443)))));
                                arr_24 [i_2] [8] [4] [i_5] [i_6 - 3] = (-17419 >= 17431);
                            }
                        }
                    }
                }
            }
        }
        var_24 = ((-17443 ? 17443 : -17447));
        arr_25 [i_2] = (min(-17430, (!var_7)));
    }
    var_25 = 17424;
    var_26 = ((+(((17443 > var_5) ? var_13 : -var_1))));
    #pragma endscop
}
