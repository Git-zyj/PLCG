/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= (var_7 ? 1 : 7443131218830071963);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [3] [i_0] = (min(var_4, -18446744073709551608));

                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    arr_8 [i_2] [i_0] [i_1] [i_0] = -36796;

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        var_16 = ((((var_3 > (arr_2 [i_0]))) ? (!1) : (arr_10 [i_0] [3] [i_2 - 1] [i_3] [i_0])));
                        var_17 = ((!(arr_1 [i_0 + 2] [i_3 + 1])));
                        var_18 = (max(var_18, (((var_0 ? (arr_0 [i_2 + 4]) : 28493)))));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_14 [i_2] [i_4] [i_0] = ((((arr_1 [i_0 - 1] [i_0 + 3]) && (((arr_0 [i_2]) < var_0)))));
                        arr_15 [i_0] = (min(((((arr_4 [i_0 + 1] [i_2 + 1]) || ((min(45, -26580)))))), ((var_3 ? (arr_7 [11] [11] [i_0]) : (arr_6 [i_0 + 3] [i_2 + 2] [i_2 - 1] [i_2 + 2])))));

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 14;i_5 += 1)
                        {
                            arr_18 [i_0] [i_0] = var_9;
                            arr_19 [11] [i_0] [2] [i_4] [i_4] [0] = -48;
                            var_19 = (arr_9 [i_0] [i_1] [i_0] [i_0]);
                        }
                    }
                }
                for (int i_6 = 1; i_6 < 12;i_6 += 1) /* same iter space */
                {
                    arr_22 [i_0] [i_1] [i_6] = -6744256432217707973;
                    var_20 += ((((((-(arr_1 [i_0 - 1] [i_1]))) + 2147483647)) >> (33554431 - 33554431)));
                    var_21 = (min(var_21, (((((((arr_1 [i_6 - 1] [i_0 + 2]) ? 195 : ((max((arr_7 [i_0 - 3] [i_1] [i_1]), (arr_7 [i_0] [i_0] [i_1]))))))) ? ((-(arr_1 [i_0] [i_6]))) : (arr_4 [3] [i_0 - 2]))))));
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 12;i_7 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                arr_30 [10] [i_1] [i_1] [i_0] [i_0] [i_8] [i_9] = 1;
                                var_22 ^= var_7;
                            }
                        }
                    }
                    var_23 = ((arr_21 [i_0] [i_1] [i_7]) ^ (arr_21 [i_0] [i_1] [i_7 + 1]));
                }
                var_24 = (min((min((var_11 * var_2), var_5)), ((min(((var_7 ? var_4 : (arr_0 [i_0]))), 0)))));
                var_25 ^= min((((-46 ? 44 : 23))), (min((var_6 * var_13), (((18446744073709551604 ? (arr_1 [i_1] [i_0]) : (arr_2 [3])))))));

                /* vectorizable */
                for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                {
                    var_26 = (arr_21 [i_0] [i_1] [i_0 + 2]);
                    arr_33 [4] [i_0] [i_1] [1] = var_2;
                    arr_34 [i_0] [i_1] [1] [i_0] = 37049;
                }
                for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                {
                    var_27 = (((((arr_2 [i_0 - 2]) ? 1 : (arr_2 [i_0 - 3])))) ? (max((var_4 != var_2), ((var_1 ? (arr_4 [1] [i_1]) : (arr_0 [i_0 - 1]))))) : var_12);
                    var_28 = (min(var_28, (arr_35 [i_11] [i_1] [i_1] [i_11])));

                    for (int i_12 = 2; i_12 < 14;i_12 += 1)
                    {
                        var_29 = (min(var_29, (((25072 ? ((((((var_12 << (var_9 - 650537830606226363)))) ? (arr_17 [i_0] [i_0] [i_1] [i_12] [3] [i_1]) : (((var_7 ? (arr_10 [i_0 + 3] [i_11] [i_11] [i_12] [i_12]) : var_4)))))) : (max(((min(12, (arr_35 [i_11] [i_12] [i_0 + 3] [i_12 - 1])))), var_10)))))));
                        arr_41 [1] [i_1] [i_0] [i_12] = (((((~(arr_37 [i_0 - 1] [i_0 + 1] [i_12 - 2] [i_0])))) || var_2));
                    }
                }
            }
        }
    }
    #pragma endscop
}
