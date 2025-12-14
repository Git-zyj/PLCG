/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    var_18 = (max(var_8, var_15));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = ((20 << ((((max((arr_4 [i_0] [i_0 - 2] [i_0 - 2]), (arr_4 [i_0] [i_0 - 2] [i_0 - 2])))) - 16861))));
                arr_5 [i_0 - 3] [i_0] [i_0] = ((((127 ? ((max(1, var_7))) : var_2)) != -var_6));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_0] [i_3 + 2] [i_4] = (max((((arr_9 [i_0 + 1] [i_2] [i_2] [i_3]) ? 113 : (arr_9 [i_0 + 1] [i_0 + 1] [i_1] [i_1]))), (!var_5)));
                                var_20 = (max((arr_9 [i_0 + 2] [i_0] [i_0 - 1] [i_0 - 2]), -1656721907));
                                var_21 = (arr_8 [i_1] [i_1] [i_1] [i_1]);
                            }
                        }
                    }
                    var_22 = (min(var_22, (arr_11 [i_0 + 2] [i_1] [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0])));
                    var_23 -= ((-var_9 ? -185 : (max((arr_9 [i_0] [i_0 - 2] [i_0] [i_0]), (arr_9 [i_0] [i_0 - 2] [i_2] [i_2])))));

                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        var_24 -= (((((arr_2 [i_0 - 1] [i_0 + 1]) && (arr_2 [i_0 - 3] [i_0 - 1]))) ? (max((arr_2 [i_0 + 1] [i_0 - 2]), (arr_2 [i_0 - 3] [i_0 - 1]))) : (((((arr_2 [i_0 + 2] [i_0 - 3]) <= (arr_2 [i_0 + 1] [i_0 + 1])))))));
                        var_25 = (max(var_25, var_11));
                    }
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    arr_21 [i_1] [i_0] = (arr_2 [i_0 - 2] [i_0 + 2]);

                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        arr_24 [i_0 + 1] [i_1] [i_0] = (max((max(((var_2 ? (arr_2 [i_0] [i_0 - 3]) : (arr_0 [i_1]))), (arr_20 [i_0 - 2] [i_0 - 3] [i_0 - 2]))), ((((arr_11 [i_6] [i_0 - 2] [i_0 + 1] [i_0] [i_0 + 2] [i_0 - 2]) && (arr_11 [i_1] [i_0] [i_0 + 1] [i_0] [i_0 + 2] [i_0 - 2]))))));
                        arr_25 [i_0] [i_1] [i_0] [i_0] = max((((!(((arr_12 [i_0] [i_0] [i_6] [i_6] [i_6] [i_7]) == 127))))), (((max(var_11, (arr_18 [i_0 + 2] [i_1] [i_6] [i_7]))) / 124166059)));

                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 10;i_8 += 1)
                        {
                            arr_29 [i_0] [i_0] [i_0] = ((6784583887548774604 ? (arr_28 [i_8 - 1] [i_8 + 1] [i_6] [i_0 - 3] [i_0 - 1]) : 1));
                            arr_30 [i_0] = (arr_28 [i_0 + 1] [i_0] [i_0] [i_0] [i_0]);
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_26 ^= -99;
                            arr_33 [i_0] = ((-(((arr_12 [i_0] [i_0] [i_0 - 3] [i_0 + 1] [i_0] [i_0]) ? (arr_4 [i_6] [i_0 + 1] [i_0]) : (arr_4 [i_0] [i_0 + 1] [i_0])))));
                            var_27 = ((max(1, (var_3 * var_4))));
                        }
                        var_28 = (arr_32 [i_0] [i_0] [i_6] [i_7] [i_7] [i_0]);
                    }
                }
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    var_29 = -112;
                    var_30 = (min(var_30, (arr_34 [i_10] [i_0] [i_10] [i_10])));
                }
            }
        }
    }
    var_31 = -var_13;
    var_32 = (min(var_32, (((-476197978 ? var_4 : var_13)))));
    #pragma endscop
}
