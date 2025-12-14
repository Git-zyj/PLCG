/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 = ((!((((arr_2 [i_0] [i_0]) ? ((var_0 ? 1 : 12181324974703010540)) : (arr_0 [i_2]))))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_12 = (max(var_12, ((((((!(((var_7 ? -32755 : 0)))))) ^ ((max(-32762, 9757483006953367054))))))));
                        var_13 = min((max((min((arr_0 [i_1]), var_2)), (arr_6 [i_0] [i_1] [i_2] [19]))), ((max(((var_7 ? var_9 : var_5)), (((arr_1 [i_0]) & 32293))))));
                        var_14 = (max(((~(arr_3 [i_0] [i_0] [i_0]))), var_8));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_15 = var_2;
                        var_16 = (min(var_16, (min((((32746 ? 10716 : 5))), var_10))));
                    }
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        var_17 |= (((!(arr_10 [i_5 - 2] [i_5 + 2] [i_5 + 1] [i_1] [i_5 - 1]))));
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_5 + 1] = -32762;
                        var_18 = (min(var_18, ((((arr_8 [i_0] [i_0] [i_2] [i_2]) && ((max(((-(arr_8 [i_0] [i_1] [i_0] [i_5]))), 112))))))));
                        var_19 *= ((32754 > (min((arr_16 [i_5 + 2] [i_1] [i_2] [i_1]), (((arr_6 [i_5] [i_2] [i_1] [i_0]) ? 18446744073709551615 : (arr_3 [i_1] [i_1] [i_1])))))));
                    }
                    var_20 = (min(163, (arr_2 [i_0] [i_0])));
                    var_21 = (max(var_21, (arr_9 [i_1] [i_1])));
                }
            }
        }
    }
    var_22 = (max(var_22, var_8));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            {
                var_23 -= (max(-32744, var_4));
                var_24 = (arr_13 [i_6] [i_6] [i_6] [i_7]);

                for (int i_8 = 3; i_8 < 11;i_8 += 1)
                {
                    var_25 ^= (max(29089, 0));
                    arr_24 [i_8] [i_6] = ((var_3 ? (((((arr_21 [i_8 - 2] [i_8]) >= (arr_20 [i_8 - 2]))))) : (((arr_21 [i_8 + 1] [i_8]) ^ 1))));
                }
            }
        }
    }
    var_26 = -32744;
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            {
                var_27 ^= ((var_2 ? ((-(((var_1 >= (-127 - 1)))))) : (((!(((var_0 ? (arr_6 [i_10] [1] [i_10] [i_9]) : var_8))))))));
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 11;i_13 += 1)
                        {
                            {
                                var_28 = (min(var_28, (arr_12 [i_13] [1] [i_9] [i_11])));
                                var_29 *= (((-127 - 1) ? (((min((arr_35 [i_13 + 1] [1] [i_13] [i_13] [2]), ((!(arr_14 [i_12] [i_12] [i_11] [i_10]))))))) : (((arr_10 [i_13 + 1] [8] [10] [i_10] [i_13 + 2]) & var_8))));
                            }
                        }
                    }
                }
                var_30 = (max((((min((arr_30 [i_10]), (arr_14 [i_9] [i_9] [i_9] [5]))))), (min((arr_27 [i_9] [i_10]), (arr_36 [i_9] [i_9] [i_9] [i_9])))));
                var_31 = (min(var_31, (((((min((arr_7 [i_9] [i_10] [i_10] [i_10]), (arr_7 [i_9] [i_10] [i_9] [i_9])))) ? ((min((arr_7 [i_9] [6] [i_9] [i_9]), (arr_7 [i_10] [i_9] [i_10] [i_9])))) : (((arr_7 [i_9] [15] [i_10] [15]) ? var_7 : 66)))))));
                var_32 = (((~(arr_34 [i_9] [3] [i_10] [i_10]))));
            }
        }
    }
    #pragma endscop
}
