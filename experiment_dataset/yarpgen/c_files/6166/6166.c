/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_9 >> (var_2 + 11098)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 |= (~((-(arr_1 [i_0] [i_0]))));
        arr_4 [i_0] = var_9;
        var_12 = (!-138572819315013064);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_13 = (!7891979239816201849);
        var_14 = -6491;
        var_15 += var_0;
        var_16 = (arr_5 [i_1]);
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_13 [i_2] [i_2] = (arr_11 [i_2] [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    arr_19 [i_4] [i_3] [i_3] = 10554764833893349766;
                    arr_20 [i_2] [i_4] [i_2] [i_2] = 10554764833893349766;

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        var_17 = var_9;
                        var_18 = (min(var_18, (arr_9 [i_3 + 1])));
                        var_19 = ((var_3 - (arr_14 [i_3 - 4] [i_3 + 1])));
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                    {
                        var_20 = -var_5;
                        var_21 = var_3;
                        var_22 -= (var_1 && var_1);

                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            arr_29 [i_2] [i_3] [i_4] [i_2] [i_4] = (((var_4 % 106) ? ((((arr_17 [i_3 + 2] [i_3 - 3]) ? (arr_17 [i_3 + 1] [i_3 - 1]) : (arr_17 [i_3 - 1] [i_3 + 2])))) : ((-(arr_25 [i_2] [i_3 - 1] [i_7] [i_7 + 1] [i_4] [i_7])))));
                            var_23 -= (min(((~(0 & 18446744073709551615))), ((min(var_1, (arr_26 [i_2] [i_3] [i_4] [i_3] [i_7]))))));
                            arr_30 [i_2] [i_2] [i_2] [i_2] [i_4] = (arr_17 [i_3 + 1] [i_7]);
                            var_24 = (max(var_24, (arr_11 [i_2] [i_2])));
                        }
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            arr_33 [i_8] [i_6] [i_4] [i_4] [i_2] = ((~(arr_5 [i_3 - 3])));
                            var_25 ^= (((((arr_11 [i_3 - 2] [i_3]) | -138572819315013050)) & ((((arr_24 [i_3 - 4] [i_3 - 4] [i_8]) ? (arr_11 [i_3 + 2] [i_3 + 2]) : (arr_11 [i_3 - 4] [i_3]))))));
                            var_26 = ((((arr_23 [i_3 - 4] [i_3 - 2]) & (arr_18 [i_8] [i_4] [i_6]))));
                        }
                        for (int i_9 = 3; i_9 < 18;i_9 += 1)
                        {
                            var_27 |= (~var_0);
                            var_28 = ((-((((arr_31 [i_4] [i_3] [i_4] [i_6] [i_4]) >= (arr_31 [i_4] [i_9] [i_2] [i_6] [i_9]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
