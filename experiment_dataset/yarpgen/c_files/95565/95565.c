/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = (max(((((arr_1 [5]) < (arr_0 [i_0])))), (arr_1 [i_0])));
        var_14 += ((((arr_1 [i_0]) == (arr_1 [i_0]))) ? ((((arr_1 [i_0]) || (arr_0 [i_0])))) : (((arr_0 [i_0]) << (((arr_1 [i_0]) + 126)))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] = ((arr_2 [22] [i_1 + 4]) ^ (arr_4 [i_1 - 1]));
        var_15 = ((((((arr_5 [16]) == (arr_5 [i_1 + 3])))) * (arr_4 [13])));

        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        var_16 = (((arr_12 [14] [i_1] [i_2 + 2] [i_3]) ? (arr_12 [i_2 - 2] [i_2] [i_2 + 1] [i_3]) : var_3));
                        var_17 &= (((arr_13 [i_2]) ? (((arr_4 [i_1]) + (arr_3 [13] [13]))) : (arr_13 [i_4])));
                        var_18 = (min(var_18, ((((1 - 89) / (arr_3 [i_2] [i_1]))))));

                        for (int i_5 = 2; i_5 < 23;i_5 += 1)
                        {
                            var_19 |= (((((arr_12 [14] [14] [i_3 - 2] [i_4]) - (arr_4 [i_3])))) ? (arr_4 [i_2 + 1]) : (((arr_8 [i_2]) ? (arr_16 [i_1] [i_1]) : (arr_4 [i_1 + 1]))));
                            var_20 = (((((arr_15 [i_1] [i_1] [i_1 + 3] [i_1] [i_3]) ? (arr_2 [i_3] [i_3]) : (arr_15 [i_3] [i_4] [i_4] [i_5 - 1] [i_3]))) >= (arr_4 [1])));
                        }
                        for (int i_6 = 4; i_6 < 21;i_6 += 1)
                        {
                            var_21 = (arr_5 [i_1 + 2]);
                            arr_20 [i_3] [i_3] [i_3 - 2] [i_4] = (((((arr_3 [i_3] [i_3]) ? var_5 : (arr_9 [i_3])))) || (arr_11 [20] [i_4] [i_3] [i_2] [i_1] [i_1]));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_22 = (min(var_22, ((((arr_15 [i_9] [i_2 + 2] [i_9] [i_8] [i_2]) >= (arr_26 [i_9 - 1] [5] [i_8] [i_7] [5] [i_2] [i_1]))))));
                            var_23 = var_4;
                            var_24 = arr_2 [i_1] [i_1];
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_10 = 4; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 22;i_12 += 1)
                    {
                        {
                            arr_34 [8] [i_2 + 3] [i_10 - 3] [i_11] [i_12 + 2] = ((((((arr_4 [i_1]) ? (arr_26 [i_12] [i_11] [i_11] [i_10 - 3] [23] [i_2] [23]) : (arr_9 [i_12])))) >= (((arr_11 [i_12 + 2] [6] [6] [i_1 + 1] [i_1 + 1] [i_1 - 1]) ? (arr_25 [i_10] [i_10]) : (arr_30 [i_10] [i_10] [i_10] [i_10 - 3])))));
                            arr_35 [i_1] [i_1] [i_1] [i_1 + 4] [i_1] = (((arr_33 [i_2 + 3] [i_12 + 1] [17]) % (arr_33 [i_2 + 1] [i_12 - 2] [i_10])));
                        }
                    }
                }
            }
        }
    }
    var_25 = (min(var_25, ((max(var_10, (min(((max(var_6, var_5))), ((var_2 ? var_4 : var_7)))))))));
    #pragma endscop
}
