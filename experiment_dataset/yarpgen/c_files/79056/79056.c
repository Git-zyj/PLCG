/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = (((arr_2 [i_2 + 2]) ? (min((arr_2 [i_2 - 1]), (arr_2 [i_2 + 1]))) : (((!(arr_2 [i_2 - 1]))))));

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        var_19 = ((min(14004, 26845)));
                        arr_11 [i_0] [7] [10] = (arr_8 [i_1] [16] [i_3]);
                        var_20 = ((max(var_6, -26846)));

                        for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
                        {
                            arr_16 [i_0] [i_1] [i_2] = ((((max((((arr_10 [i_3] [i_1] [10] [i_3]) ? 26845 : -26845)), ((((arr_12 [i_4] [i_3 + 3] [i_0] [i_0]) || var_7)))))) ? ((((!1) && (arr_14 [i_0] [i_0] [i_0] [i_0])))) : (arr_4 [i_4] [i_4] [i_4 - 1])));
                            arr_17 [3] [i_1] [3] = (((min((var_4 || -26845), ((0 && (arr_13 [i_3]))))) || ((min((arr_7 [i_0] [i_2 - 1] [i_0] [i_3 + 1]), var_15)))));
                        }
                        for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_21 = ((~((((1 ^ (arr_20 [i_5] [i_3] [i_2] [i_1] [i_5]))) | 1))));
                            var_22 = (((((max(var_13, 0)))) ? 6 : var_12));
                            var_23 = (((arr_2 [i_2 + 2]) / ((min(var_7, (arr_3 [i_0]))))));
                        }
                        for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_24 = (arr_1 [i_0] [i_1]);
                            arr_23 [i_6] [i_1] = (((((arr_22 [4] [i_1] [i_2 + 1] [i_3] [i_3 + 2] [i_6 - 1]) + 2937207741))));
                            var_25 = min(((!(arr_14 [i_0] [i_0] [i_0] [i_3]))), (!var_12));
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            var_26 += 3196906369;
                            arr_26 [i_3] [15] [i_1] [i_0] = arr_21 [i_2 + 2] [i_2] [i_1] [i_3 + 1] [i_3] [i_3 + 1] [i_7 - 1];
                        }
                        arr_27 [5] [9] [i_1] [i_0] [i_0] = (((~-26846) ? (((max(252, var_15)) ^ var_12)) : ((((arr_15 [i_0]) ^ var_16)))));
                    }
                    var_27 = -var_9;
                }
            }
        }
        var_28 = ((((0 && var_6) || (!1))) || ((min((min(1, 4064)), (127 && 0)))));
    }

    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_29 = max((((((arr_5 [i_8]) ? 1 : var_4)))), (~var_9));
        var_30 = var_11;
        var_31 = (arr_22 [7] [i_8] [7] [i_8] [1] [i_8]);
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        var_32 = (max(var_32, ((max(var_14, ((((min(var_16, (arr_4 [18] [i_9] [12])))) ? (~var_13) : (arr_8 [i_9] [i_9] [1]))))))));
        var_33 = (min(((((arr_22 [i_9] [5] [i_9] [i_9] [i_9] [i_9]) / var_4))), (min((arr_33 [i_9] [18]), (((arr_0 [i_9]) / var_13))))));
    }
    var_34 = var_5;
    #pragma endscop
}
