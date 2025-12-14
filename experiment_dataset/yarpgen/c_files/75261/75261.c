/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 = (((+(min((arr_5 [i_0]), (arr_4 [9] [5] [i_0]))))));
                    var_12 = arr_5 [i_0];
                    arr_9 [i_0] [i_0] [i_2 + 1] = var_0;
                }
            }
        }
        arr_10 [i_0] = (var_3 > (arr_0 [i_0]));

        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            var_13 = var_6;
            arr_15 [i_0] = ((255 != (arr_12 [i_3 + 1])));
        }
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {
                {
                    arr_21 [i_0] [i_0] [i_0] = 11;

                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {
                        arr_25 [i_0] [i_4] [i_0] [i_6 + 3] = var_8;
                        arr_26 [i_0] = (((arr_16 [i_0]) && (arr_16 [i_0])));
                        var_14 = (max(var_14, var_6));
                        arr_27 [i_6] [i_0] = 9223372036854775807;
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_15 = ((var_6 ? var_1 : var_3));
        var_16 = 133955584;
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        var_17 = -29954;
        var_18 -= (min((((!((max(var_5, (arr_2 [0] [i_8]))))))), (max(var_6, 133955599))));
        var_19 = ((5426 | (min(9223372036854775808, ((((arr_29 [i_8]) * var_8)))))));
    }
    #pragma endscop
}
