/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_0] [5] [2] = (max(((-(arr_3 [i_0] [i_1]))), 12723));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [9] = (min((max(3584, (var_10 | var_4))), (((-(arr_6 [0] [i_1]))))));
                                var_16 = (((var_3 * (arr_5 [i_4] [i_4 - 3] [i_3 + 1]))));
                                var_17 = ((!(((((var_12 < (arr_3 [i_0] [i_1]))) ? (max(18446744073709551608, var_7)) : 10)))));
                            }
                        }
                    }
                    var_18 = var_0;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_6] [i_1] [19] [i_2] [i_5] [i_6] = ((!(arr_9 [i_0] [i_1] [i_2] [i_5] [i_6])));
                                arr_22 [i_0] [i_6] = (max(18446744073709551609, var_4));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            var_19 = (max(var_19, ((min(0, 32119)))));
                            arr_29 [12] [i_7] [5] [i_7] [0] = ((~(max(11066, (((arr_19 [i_0] [i_0] [i_1] [i_7] [i_8]) ^ var_12))))));
                            var_20 = 0;
                            arr_30 [i_0] [i_1] [i_7] = (((max((arr_17 [i_0]), (arr_17 [i_0])))) ? (((~(((arr_25 [14] [i_0]) ^ (arr_1 [i_0] [i_0])))))) : (((~(arr_9 [18] [18] [i_1] [i_7] [i_8])))));
                        }
                    }
                }
                var_21 = 0;
                var_22 = (max(var_22, ((max(((min(-1917742870, var_7))), (arr_28 [4] [i_1] [5] [i_0]))))));
            }
        }
    }
    var_23 = var_0;
    var_24 *= ((var_11 ? (max(var_14, -var_9)) : var_7));
    #pragma endscop
}
