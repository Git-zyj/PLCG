/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [3] [i_0] [i_4] [i_4] [9] = (~237);
                                var_17 = (max(var_17, (arr_14 [i_4 - 2] [i_4 - 2] [i_4 - 1] [i_4] [10] [i_4] [i_4 - 1])));
                                arr_16 [i_1] [i_3] [i_0] = (((arr_11 [i_0 - 1] [i_2] [i_4 - 1] [i_3] [i_4] [i_4]) ? var_9 : -var_14));
                                var_18 = (arr_5 [i_0]);
                            }
                        }
                    }
                    var_19 = ((arr_11 [i_0] [8] [i_0] [i_0 + 2] [i_0] [i_0]) >= (arr_2 [i_0]));
                    var_20 = ((!(arr_6 [i_1])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_21 ^= (arr_1 [i_0]);
                                var_22 = (((arr_7 [i_0] [i_0 + 2] [i_0 - 1] [i_0]) ? var_14 : var_10));
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = ((var_6 ? 32743 : (arr_10 [i_5] [8] [i_5] [i_5])));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 8;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_23 = (max(var_23, (arr_6 [i_8 - 2])));
                                var_24 = (((arr_12 [i_0] [i_1] [i_8] [6]) && (((80 ? 2710956684 : 0)))));
                                arr_31 [i_0] [i_1] [i_1] [i_9] [i_9] |= (((((arr_1 [i_7]) ? var_6 : (arr_26 [i_0] [i_1] [i_7] [i_8] [i_9]))) | (arr_17 [i_9] [i_9] [i_9 - 1] [i_9 - 1])));
                            }
                        }
                    }
                    arr_32 [i_0] [i_1] [i_7] = (!1573733757);
                    arr_33 [i_0] [i_0] [i_7] [i_7] = (arr_23 [i_1] [i_0] [i_0 + 1]);
                }
                arr_34 [i_0] = ((((((((~(arr_12 [i_0] [i_1] [i_1] [i_1])))) ? (arr_21 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 2]) : 14034281089832058375))) ? ((28 ? (arr_2 [i_0]) : (((arr_3 [i_0]) * 0)))) : (32743 && var_14)));
            }
        }
    }
    var_25 = var_8;
    var_26 -= 9007;
    #pragma endscop
}
