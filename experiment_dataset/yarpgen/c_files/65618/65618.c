/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (1554612937014625455 - var_8)));
    var_19 -= ((-(min(2157250656, -var_14))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                var_20 -= var_0;
                var_21 -= (arr_1 [i_0 + 2] [i_0 + 2]);
                var_22 = (min(var_22, ((((((arr_1 [i_0 + 2] [i_0 + 1]) - ((min(58, var_17)))))) ? var_3 : (var_4 - -var_5)))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_23 = (max(var_23, var_15));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_24 = (((arr_7 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_2]) ? ((~(var_0 - var_4))) : ((((arr_7 [i_0] [i_1 + 2] [i_2] [i_3]) ? (arr_7 [i_2] [7] [6] [1]) : (arr_7 [i_0 - 1] [i_1] [i_2] [i_3]))))));
                        var_25 ^= ((((!var_15) ? (var_16 || var_2) : (min((-127 - 1), var_4)))));
                        var_26 = (max(var_26, (((+((var_12 ? (arr_1 [i_1 + 3] [1]) : (arr_1 [i_1 + 4] [i_3]))))))));
                    }
                    arr_13 [4] [i_1] [i_2] = (!3308797845534803210);
                }
                for (int i_4 = 2; i_4 < 8;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 8;i_6 += 1)
                        {
                            {
                                var_27 = (min(var_27, ((min((min((arr_20 [i_0 + 1] [1] [i_4] [i_5]), ((-674130996 ? var_15 : var_14)))), var_14)))));
                                arr_26 [i_0] [3] [i_4] [i_5] [i_6] = ((((((~(arr_9 [i_6] [5] [4])))) ? var_10 : (arr_23 [i_0 - 1] [i_5 - 1] [i_6 + 3]))) - var_11);
                                arr_27 [i_0] [i_1] [i_6] [i_5] [i_5] = var_7;
                            }
                        }
                    }
                    var_28 = ((-(((arr_19 [i_4] [i_4] [i_4] [i_4 + 3]) ? (arr_19 [i_4] [i_4 + 2] [0] [i_4 + 2]) : var_16))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 8;i_8 += 1)
                        {
                            {
                                var_29 = (min((min(((((arr_8 [i_0]) ? var_17 : var_8))), ((var_16 ? (arr_8 [3]) : var_16)))), var_1));
                                var_30 = (min((~1), ((1824851420 - ((((arr_14 [i_0] [8] [1] [i_0]) ? (arr_3 [i_0] [i_0] [i_0]) : var_7)))))));
                                var_31 = (min(var_31, var_16));
                                var_32 = (!var_0);
                            }
                        }
                    }
                }
                for (int i_9 = 1; i_9 < 8;i_9 += 1)
                {
                    var_33 = ((~((((arr_28 [i_1] [i_0 + 1] [i_1 - 1] [i_1 - 2] [i_9 + 3] [i_9 + 3]) && (arr_28 [i_1] [i_0 + 1] [i_1 + 4] [i_1 - 2] [i_9 + 3] [i_9 + 3]))))));

                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        arr_38 [i_0] [i_0] [i_10] [i_1] [1] [i_10] = ((+(((~1510531571) ? var_13 : (arr_21 [i_0 - 1] [10] [i_9 - 1] [i_9])))));

                        for (int i_11 = 1; i_11 < 10;i_11 += 1)
                        {
                            var_34 = (min(var_34, (((var_0 - ((var_3 - (min((arr_16 [i_11]), (arr_21 [i_0 - 1] [3] [i_0] [i_0]))))))))));
                            var_35 = var_4;
                            var_36 = ((((((arr_28 [i_1] [i_9] [1] [i_9] [i_9 - 1] [i_11 - 1]) ? var_15 : (arr_18 [i_9] [i_9 + 3] [i_9] [i_9])))) ? -var_13 : (arr_19 [i_0] [i_0] [i_9] [i_11])));
                            var_37 = (-var_4 ? var_3 : var_5);
                            var_38 = (max(var_38, var_12));
                        }
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            arr_45 [4] [i_10] [i_10] [i_9 + 1] [i_10] [i_12] = (((((((min(36, 40597))) ? var_9 : var_2))) ? (var_0 & var_16) : 575107202));
                            var_39 = (min(var_39, (((~(~var_2))))));
                            arr_46 [3] [i_1] [i_9] [i_10] [i_10] = (min(var_1, ((((arr_25 [i_1] [0] [i_1] [i_1 + 2] [i_10]) ? 29134 : (arr_39 [8] [4] [3] [i_1 + 2] [i_1]))))));
                        }
                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            var_40 = (min(var_12, 1083780927831857207));
                            var_41 = max((min(var_16, (arr_34 [i_9 + 1] [0] [i_1 + 1] [0]))), (((!(arr_31 [i_1 + 1] [2] [i_1 + 1] [i_10] [i_13] [i_13])))));
                            arr_49 [i_0] [i_0] [i_9] [i_10] = ((((((var_5 ? (arr_47 [i_10] [i_1] [1] [i_1] [i_1] [i_1 + 3] [i_1 - 2]) : var_16))) ? (((18952 ? var_5 : var_16))) : ((var_14 * (arr_25 [i_0] [i_1] [i_9 + 1] [i_13] [i_10]))))));
                        }
                        for (int i_14 = 0; i_14 < 11;i_14 += 1)
                        {
                            var_42 = (max(var_42, var_8));
                            arr_52 [i_0 + 2] [i_0 + 2] [i_10] [i_0] = ((((((arr_32 [i_0 - 1] [i_1 - 1] [i_9 - 1]) - var_14))) - ((min(1, var_13)))));
                            var_43 ^= var_6;
                        }
                        arr_53 [i_0] [i_0] [i_10] [10] = (min((arr_5 [i_0 + 1]), (~var_17)));
                    }
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        arr_58 [i_15] [i_15] [i_0 + 1] [i_1] [i_1] [i_15] = (min(((((min(var_13, 36))) - var_1)), ((((((var_1 ? -107 : var_0))) ? -var_7 : (!var_12))))));
                        var_44 = (min(var_44, (((((min(16274790680013860719, 4416717153114998714))) ? (min(var_17, var_14)) : ((((arr_12 [i_1] [i_1] [i_1] [i_1 - 1]) ? var_9 : (arr_12 [i_1] [i_1] [1] [i_1 - 1])))))))));
                    }
                }
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    arr_63 [i_16] [i_1 + 4] [i_0 - 1] [i_0] = (((((arr_2 [i_0 - 1]) ? (arr_2 [i_0 + 2]) : var_13))) ? var_4 : (~var_12));
                    arr_64 [i_0] [i_0] [i_0 - 1] [i_0] = 3552811336;
                    arr_65 [i_0] [i_1] [i_16] [i_16] = var_9;
                }
            }
        }
    }
    #pragma endscop
}
