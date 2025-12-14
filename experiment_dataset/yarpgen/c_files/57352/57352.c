/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (((~(max(-32765, 708088603)))))));

                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    var_12 = (max(var_6, ((max((arr_1 [4] [i_1]), (arr_0 [16] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_10 [i_1] [20] [i_2] [i_2] [i_2] = ((~(arr_9 [i_0] [i_1])));
                                var_13 = (max(var_13, ((((((((arr_4 [i_4] [12] [12]) ? var_3 : var_3)))) ? ((((arr_4 [i_4 + 1] [i_3 + 1] [i_0 - 1]) <= var_10))) : (((((var_9 ? var_4 : (arr_0 [i_2 - 4] [i_4])))) ? (((arr_6 [i_0] [10] [i_0] [i_0] [i_2]) ? var_4 : var_10)) : ((((arr_7 [i_0] [i_2] [i_2] [8] [1]) >= 17179738112))))))))));
                                arr_11 [i_1] = var_5;
                                var_14 -= ((((min(((max((arr_0 [i_2 - 3] [i_0]), var_9))), var_0))) ? (((var_4 ? var_2 : (arr_5 [i_0] [i_0 - 2] [i_0])))) : (((((var_10 ? (arr_6 [16] [14] [14] [i_3 + 1] [i_0]) : (arr_5 [i_0] [i_1] [i_2 - 4])))) ? (min(0, var_6)) : (arr_4 [i_2 - 1] [i_4 + 1] [1])))));
                            }
                        }
                    }
                    arr_12 [1] [i_1] [i_1] [i_1] = (max((!-var_10), ((((var_6 << (var_8 - 6135880485512162251))) > ((((arr_3 [i_1]) & var_10)))))));

                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_1] [i_1] [i_5] = ((!((max((max((arr_9 [i_0] [i_1]), var_9)), (arr_9 [i_0 - 4] [i_1]))))));
                        var_15 = (max(var_15, (arr_13 [i_0 + 1] [i_0 - 4] [i_0] [i_0] [i_0 + 1] [i_0 + 1])));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        var_16 = (max(var_16, var_2));

                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            arr_23 [3] [i_1] [i_6] [i_2] [i_1] [i_1] [3] = (max((arr_20 [i_0] [i_0]), var_0));
                            arr_24 [i_6] [i_0] [i_2 - 1] [i_6] [i_1] [i_0 + 1] [i_1] = (arr_16 [i_6]);
                            arr_25 [11] [i_1] [i_2] [i_1] [19] = (((arr_19 [i_0 - 2] [i_1] [i_0]) ? (((!(arr_19 [i_2] [i_1] [i_7])))) : (((!(var_10 || 1))))));
                        }
                        for (int i_8 = 2; i_8 < 18;i_8 += 1)
                        {
                            var_17 = ((var_8 ? 238 : (max((max(var_1, (arr_0 [i_0] [i_0]))), (((arr_14 [i_8] [11] [10] [i_1]) ? (arr_6 [i_0] [i_1] [i_2] [i_0] [i_1]) : (arr_1 [2] [i_0])))))));
                            arr_28 [1] [i_2] [4] [8] [i_2] |= (arr_21 [1] [1] [i_1] [1] [i_6] [1] [i_6]);
                            var_18 = (max(((var_6 ? (max(var_6, (arr_9 [i_1] [i_1]))) : -708088589)), (~1)));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            var_19 = (min(var_19, (((arr_29 [i_0 - 2] [i_0] [i_0 + 1] [i_9] [i_0 - 3]) & var_4))));
                            var_20 = (min(var_20, 617859994));
                            arr_31 [i_9] [i_9] [4] [i_9] [i_1] [i_9] = (arr_1 [i_2] [i_6]);
                            arr_32 [i_1] [i_1] [0] [i_2] [i_2] [i_1] [i_0] = ((-(arr_2 [i_0 - 2] [i_2 - 3])));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            var_21 = (~var_1);
                            arr_36 [15] [i_1] [15] [i_6] [i_1] [i_1] = (arr_5 [i_1] [i_0 - 3] [i_1]);
                            var_22 = ((-(((arr_7 [1] [i_1] [7] [i_1] [1]) ? (arr_26 [0] [i_10]) : 255))));
                            arr_37 [i_1] [i_2] = ((-(arr_13 [5] [i_1] [i_1] [i_1] [i_0 - 2] [i_1])));
                        }
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                    {
                        var_23 = ((arr_4 [0] [i_1] [18]) / var_5);
                        var_24 = 127;
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_25 = (~17303);
                        arr_43 [i_0] [i_0] [i_1] [i_12] = (arr_33 [19] [i_0] [19] [6] [i_0] [i_0] [i_1]);
                        var_26 = (!var_3);
                    }
                }
                var_27 = (min(447726937, (((arr_34 [i_0] [i_0] [i_0 - 1] [i_0 - 3] [i_0 + 1] [i_0]) ? (arr_34 [i_0 - 4] [i_0 - 4] [14] [i_0 - 1] [i_0 + 1] [i_0 - 4]) : (arr_34 [i_0 - 1] [i_0 - 1] [11] [i_0 + 1] [i_0 + 1] [i_0])))));
            }
        }
    }
    var_28 = var_9;
    var_29 = var_7;
    var_30 |= (((max(var_0, 255))));
    var_31 = ((((var_9 ? (!var_4) : var_4)) == var_10));
    #pragma endscop
}
