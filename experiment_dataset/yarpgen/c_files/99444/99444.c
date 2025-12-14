/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((max(var_0, var_3)))) ? var_8 : var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (min(var_13, (arr_0 [23] [23])));
        var_14 = 46003;
        var_15 = (((arr_1 [i_0]) * (arr_1 [i_0])));
    }
    var_16 = ((((~(~var_8))) | ((~((min(0, var_5)))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        {
                            var_17 ^= ((min((0 - 255), (min(4294967290, 8160)))));

                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 10;i_5 += 1)
                            {
                                arr_13 [i_1] [4] [i_1] [i_2] [i_2] = (((arr_11 [i_4 + 2] [i_2] [i_2 - 3] [i_2] [i_2 - 3]) - var_10));
                                arr_14 [i_2] [i_2] [7] [i_3 - 1] [i_5] [3] = 32753;
                                var_18 = ((((arr_10 [i_5] [8]) + var_2)));
                                var_19 = var_2;
                                arr_15 [i_1] [i_2] [i_2] [i_4] [i_5] [i_1] = (var_5 / 16);
                            }
                            for (int i_6 = 3; i_6 < 8;i_6 += 1) /* same iter space */
                            {
                                arr_18 [i_4] [i_2] [i_2] [i_1] = ((~((min((arr_11 [i_6] [i_2] [i_2] [i_6 - 1] [i_6 - 3]), var_5)))));
                                var_20 = (max(((((arr_11 [i_4] [i_2] [i_4 - 1] [0] [i_3 - 1]) ? var_8 : var_5))), -5235606038109890503));
                                var_21 = 0;
                            }
                            /* vectorizable */
                            for (int i_7 = 3; i_7 < 8;i_7 += 1) /* same iter space */
                            {
                                var_22 -= (70 * 0);
                                var_23 += ((121 <= (arr_2 [i_2 - 1] [i_4 + 2])));
                                var_24 += ((~(27 + -7431545935866914633)));
                                var_25 = (~0);
                            }
                            for (int i_8 = 3; i_8 < 8;i_8 += 1) /* same iter space */
                            {
                                arr_23 [i_1] [i_2] [i_3] [i_2] [i_1] = ((((((arr_17 [i_2] [i_1] [i_3 - 2] [i_8 + 2] [i_2]) | 0))) ? ((((max((-2147483647 - 1), 17317308137472))) ? var_11 : (!var_8))) : var_8));
                                arr_24 [2] [i_2] [i_2] [i_4] [3] = var_4;
                                arr_25 [i_4] [i_2] [i_4] [i_4] [i_4 + 2] = 3508639920798406479;
                            }
                        }
                    }
                }
                arr_26 [i_1] [i_2] = (-5235606038109890503 != var_9);
            }
        }
    }
    #pragma endscop
}
