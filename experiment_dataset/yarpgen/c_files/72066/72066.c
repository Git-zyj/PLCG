/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = var_5;

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_16 = (max(var_16, var_5));
                        var_17 *= (((arr_3 [i_1] [i_1] [i_3]) | ((((arr_3 [i_1] [i_1] [i_1]) < (arr_3 [i_1] [i_1] [i_1]))))));
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_18 = ((+(((((((arr_10 [i_0] [i_0] [i_2] [i_4] [17]) ^ (arr_10 [i_0] [i_0] [i_1] [i_2] [7])))) || (((arr_11 [i_0] [i_1] [i_0] [i_0]) < (arr_5 [i_0] [i_2]))))))));
                        var_19 = (((arr_10 [i_0] [i_0] [i_2] [i_4] [i_4 - 1]) > (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])));
                    }
                    for (int i_5 = 1; i_5 < 24;i_5 += 1)
                    {
                        arr_14 [i_2] [i_0] = (arr_9 [i_5 - 1] [i_0] [i_0] [i_0]);
                        var_20 = var_8;
                        arr_15 [i_0] [i_0] = (47 | -124);
                        arr_16 [i_0] [i_0] [i_2] = (!var_14);
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_21 ^= (arr_11 [i_0] [i_1] [i_2] [i_1]);

                        for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                        {
                            var_22 = (arr_13 [i_0]);
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((-23 < (!var_9)));
                            var_23 |= (~0);
                        }
                        for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                        {
                            arr_25 [i_0] [i_0] = arr_3 [i_0] [i_1] [i_0];
                            arr_26 [i_0] [i_0] [i_0] [19] [i_0] = arr_3 [i_0] [i_1] [i_0];
                            var_24 *= (((((max((arr_13 [i_1]), (arr_11 [2] [i_1] [i_1] [i_1]))))) + var_6));
                            var_25 = (arr_8 [9] [9] [i_2] [i_8]);
                            var_26 = (((arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]) - ((~(arr_11 [i_0] [i_1] [i_2] [i_0])))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                        {
                            arr_29 [i_0] [i_9] = (arr_13 [i_0]);
                            arr_30 [i_9] [i_6] [i_0] [i_1] [i_0] = (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                        for (int i_10 = 3; i_10 < 23;i_10 += 1)
                        {
                            var_27 = var_14;
                            var_28 = ((var_5 - (arr_11 [i_0] [i_1] [i_2] [i_0])));
                            var_29 = (((arr_11 [3] [1] [3] [i_0]) | 1));
                        }
                    }
                    var_30 = (max((min(var_10, var_0)), var_2));
                }
            }
        }
    }
    var_31 = (var_1 | var_11);
    #pragma endscop
}
