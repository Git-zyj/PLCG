/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((!var_9) * var_1));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_21 = (min((arr_0 [i_0 + 1] [i_0 + 1]), (((var_0 ? (arr_4 [i_1] [3]) : 10402875809868889252)))));
                var_22 = ((267720666385287262 % ((((arr_3 [i_0 + 1] [i_1]) ? (arr_3 [i_0 - 1] [i_0 - 2]) : (arr_3 [i_1] [i_1]))))));

                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    var_23 = 267720666385287254;
                    var_24 = (arr_3 [i_0] [i_0]);
                    var_25 = (arr_5 [i_1] [i_1]);
                    var_26 = (min((((arr_0 [i_0 - 2] [i_0 + 1]) ? (((((arr_5 [1] [0]) + 2147483647)) >> (((arr_4 [i_0] [i_2 - 1]) - 224579198)))) : (~33270))), ((((arr_3 [i_1] [i_1]) * (arr_2 [i_2 - 1] [i_0]))))));
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_27 = ((((((arr_10 [i_0 - 2] [i_0] [i_0]) ? 147 : (arr_10 [i_0 - 1] [i_0 - 1] [i_0])))) || (!15058)));
                                var_28 = ((-(0 >= var_6)));
                                arr_16 [i_4] [i_4] [i_4] [i_0] = ((var_5 ? (arr_3 [i_0 + 1] [i_0 - 1]) : (arr_3 [i_0 - 2] [i_0 - 1])));
                                var_29 = var_0;
                            }
                        }
                    }
                    var_30 = ((((((arr_11 [i_1] [i_0] [i_0] [i_0 - 1]) & (arr_5 [i_3] [i_1])))) ? ((min(-3983806023, ((max((arr_6 [i_0]), 560)))))) : (((arr_11 [i_1] [i_1] [i_3] [i_3]) ? (((arr_3 [i_1] [i_1]) ? 16348229419585799775 : 33538)) : var_17))));
                    var_31 = (arr_6 [i_3]);

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_0 - 3] = (((arr_4 [i_0] [i_0]) ? (arr_18 [i_0 - 1] [i_0 + 1] [i_0 - 2]) : ((((max((arr_7 [i_3]), (arr_5 [i_3] [i_3])))) ? 560 : var_0))));
                        var_32 = (((arr_6 [i_0 - 2]) < (arr_15 [i_0] [i_0] [i_0] [i_6] [i_3] [i_3] [i_1])));
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_22 [i_1] = ((((!(arr_15 [i_0] [i_1] [i_3] [i_0 - 2] [i_1] [i_7] [4]))) ? ((-(arr_15 [i_0] [i_1] [i_3] [i_0 - 2] [5] [0] [0]))) : (arr_10 [i_0] [i_1] [i_1])));
                        var_33 = ((((arr_1 [i_0 - 3]) == (var_0 ^ 4294967295))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        arr_27 [i_0] [i_0] [i_0] [i_0] [1] = (~(arr_24 [6] [i_3] [6]));
                        arr_28 [i_0] [i_1] = arr_0 [i_1] [i_8];
                        arr_29 [i_1] [i_1] [i_8] [0] [i_3] = (arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1] [i_8]);
                        arr_30 [i_0] [10] [10] [10] [i_8] [i_8] = ((((arr_4 [i_1] [7]) > var_11)));
                        var_34 = var_4;
                    }
                    var_35 = (max((((arr_26 [i_3] [i_3] [i_3] [i_1] [i_0 - 1] [i_0]) ? (arr_17 [i_0] [i_0]) : 65004)), 2147483636));
                }
            }
        }
    }
    #pragma endscop
}
