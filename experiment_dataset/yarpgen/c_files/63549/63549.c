/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min(((-var_6 ? var_3 : (~var_0))), (((!((min(var_9, var_1)))))));
    var_11 = min(((max((~var_3), var_2))), var_8);

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = var_5;
        var_12 = (min(var_12, (arr_1 [14] [i_0 - 2])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_13 = (arr_4 [i_1]);
        arr_6 [i_1] = ((~(var_7 + var_5)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    var_14 = (arr_9 [i_3] [i_2] [i_1]);

                    for (int i_4 = 3; i_4 < 21;i_4 += 1)
                    {
                        arr_13 [i_1] = var_9;
                        arr_14 [i_1] [15] [i_2] [i_3] [i_4 - 1] = (((arr_4 [i_3]) ? (arr_4 [i_2]) : (arr_9 [i_1] [i_2] [i_3])));
                        var_15 = (arr_12 [i_1] [i_3] [i_4]);
                        arr_15 [i_1] [i_1] = (~(!var_1));
                        arr_16 [i_4] [i_3] = (((arr_8 [i_1]) ? var_7 : var_6));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_16 = (((arr_7 [i_1]) ? (((var_0 || (arr_12 [0] [i_2] [10])))) : (!-2970)));
                                arr_22 [15] [19] [i_3] [12] [i_1] = (((arr_4 [i_5 - 1]) | (arr_9 [i_6 - 1] [i_6 + 1] [i_5 - 2])));
                                var_17 = var_1;
                                var_18 = (max(var_18, ((((arr_21 [20] [i_2] [6]) ? var_2 : var_1)))));
                            }
                        }
                    }
                    arr_23 [0] [i_2] [i_2] = (((((arr_9 [i_1] [i_1] [21]) ? (arr_19 [i_1] [16] [17] [i_3]) : var_4)) / var_4));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        arr_26 [i_7] [i_7] = (max(((((-2970 % (arr_4 [10]))) - ((((arr_24 [i_7]) > var_8))))), ((((max(var_0, (arr_19 [i_7] [i_7] [2] [2])))) | var_5))));
        arr_27 [i_7] = var_6;
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        var_19 = 56;
        arr_31 [i_8] = var_5;

        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            var_20 = (arr_17 [i_8] [i_8] [i_8] [20]);

            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                arr_37 [13] [i_8] [i_10] = (arr_7 [i_9 - 1]);
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 18;i_12 += 1)
                    {
                        {
                            arr_43 [i_8] [4] [i_10] [i_11 - 2] [i_8] = (max(((max(var_5, ((var_7 ? (arr_18 [i_9 - 1] [i_10] [i_11 + 1] [13]) : var_7))))), (min(((var_7 ? var_9 : var_2)), (((~(arr_21 [i_8] [i_8] [i_10]))))))));
                            arr_44 [12] [i_9] [i_9] [i_9 - 1] [i_8] [i_9] = (((arr_9 [i_8] [i_9 - 1] [i_10]) ? (((var_4 << var_5) ? (arr_21 [i_8] [i_10] [i_12]) : (arr_18 [18] [9] [9] [i_11 - 1]))) : (((!var_8) / var_6))));
                        }
                    }
                }
            }
            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                arr_47 [i_8] [i_8] [i_13] [i_9 - 1] = (max(2970, 0));
                var_21 = (((arr_38 [i_8] [i_8] [i_13]) ? (arr_4 [i_8]) : (arr_7 [i_8])));
                arr_48 [i_8] [17] [i_8] = (arr_7 [i_8]);
                arr_49 [i_8] [i_9] = (((+((min((arr_45 [i_8] [i_9]), var_0))))));

                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    arr_52 [i_8] [i_9] [i_9] [i_9] [12] = var_9;
                    var_22 = (((((((-32767 - 1) ? 1680235206 : 2970)))) + (max((arr_46 [i_9 - 1] [i_9 - 1] [i_8]), (arr_46 [i_9 - 1] [i_9 - 1] [i_8])))));

                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        var_23 = var_2;
                        var_24 = (max(var_24, (arr_41 [i_15] [15] [i_13] [i_9] [i_8])));
                        arr_56 [10] [i_8] [i_8] [i_14] [8] = var_5;
                    }
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        arr_60 [i_8] [i_9] [i_8] [11] [i_16] [2] = var_8;
                        arr_61 [i_8] [i_14] [i_14] = (max(((var_0 ? ((((arr_42 [i_8] [i_8] [1] [i_8] [3] [i_8] [4]) % var_6))) : (((arr_40 [i_8] [i_9 - 1] [i_13] [10] [i_8]) ? (arr_28 [i_8]) : var_0)))), ((((arr_50 [i_9 - 1] [i_9]) ? var_4 : (arr_50 [i_9 - 1] [8]))))));
                        var_25 = var_4;
                    }
                    for (int i_17 = 3; i_17 < 19;i_17 += 1)
                    {
                        arr_64 [13] [i_9 - 1] [i_13] [19] [i_14] [i_8] [1] = var_9;
                        var_26 = min((min((arr_34 [i_17] [i_9]), (((arr_30 [i_8]) ? (arr_4 [10]) : (arr_62 [i_8] [i_9] [i_9] [i_13] [i_14] [i_8]))))), (((var_9 <= (arr_36 [i_17 - 1] [14] [11])))));
                        var_27 *= ((-(max((arr_30 [i_14]), ((var_5 ? var_9 : var_5))))));
                    }
                }
                /* vectorizable */
                for (int i_18 = 1; i_18 < 20;i_18 += 1)
                {
                    var_28 = var_2;
                    arr_68 [i_13] [i_8] [i_8] = (((arr_36 [i_9 - 1] [i_9 - 1] [i_9 - 1]) ? (arr_36 [i_9 - 1] [i_9 - 1] [i_9 - 1]) : (arr_50 [i_9 - 1] [i_18 + 1])));
                }
                for (int i_19 = 1; i_19 < 18;i_19 += 1)
                {
                    arr_71 [16] [i_8] [i_9] [i_8] [8] = -var_2;

                    for (int i_20 = 1; i_20 < 19;i_20 += 1)
                    {
                        arr_75 [i_8] = ((!(arr_39 [i_8] [i_8] [i_9] [i_13] [i_19] [i_13])));
                        arr_76 [i_8] [i_9] [i_13] [i_19] [i_20] [i_13] [1] = var_8;
                        var_29 = (~((((var_4 ? var_3 : (arr_29 [i_8] [i_8]))))));
                    }

                    for (int i_21 = 1; i_21 < 17;i_21 += 1)
                    {
                        var_30 = (((var_0 ? var_8 : (arr_53 [i_8] [i_9] [i_13] [0] [2] [i_21]))));
                        arr_80 [i_21] [i_8] [i_8] [i_8] = var_8;
                        arr_81 [i_8] [i_8] [i_9] [i_13] [i_19] [i_19] [i_8] = (arr_18 [i_19] [i_13] [14] [i_8]);
                    }
                    /* vectorizable */
                    for (int i_22 = 0; i_22 < 21;i_22 += 1)
                    {
                        var_31 = (max(var_31, (((-(arr_7 [i_8]))))));
                        arr_84 [1] [i_8] [12] [i_13] [i_8] [i_8] [i_8] = ((-((((arr_38 [i_8] [i_13] [i_22]) || var_6)))));
                        var_32 = (arr_4 [i_8]);
                        var_33 = (((arr_50 [0] [i_22]) ? var_6 : var_5));
                        arr_85 [i_8] [i_8] [i_13] [i_8] [i_22] [9] = (arr_72 [i_8] [i_9]);
                    }
                    for (int i_23 = 0; i_23 < 21;i_23 += 1)
                    {
                        var_34 = ((var_1 ? (arr_12 [i_8] [3] [i_23]) : (min(var_6, (((var_7 <= (arr_58 [i_8] [i_8] [0] [i_8] [i_8]))))))));
                        var_35 = (~var_5);
                    }
                }
            }
            for (int i_24 = 1; i_24 < 18;i_24 += 1)
            {

                for (int i_25 = 1; i_25 < 20;i_25 += 1)
                {
                    var_36 = 72057594037927680;
                    var_37 = var_3;
                    arr_92 [i_8] [1] [i_8] [i_9] [i_24] [i_25] = (arr_55 [14] [i_9 - 1] [i_24 + 3] [0]);
                }
                for (int i_26 = 3; i_26 < 19;i_26 += 1)
                {

                    /* vectorizable */
                    for (int i_27 = 0; i_27 < 21;i_27 += 1)
                    {
                        var_38 += (arr_74 [20] [i_24 + 2] [i_26] [i_26] [i_26] [i_26 - 3] [i_26 - 3]);
                        var_39 -= (arr_91 [i_9] [i_24] [i_26] [i_24]);
                        var_40 = (arr_38 [12] [i_9 - 1] [16]);
                    }
                    var_41 = (((((((var_9 > (arr_32 [i_8] [i_9] [i_9 - 1])))) + var_3)) >> (var_6 - 48)));
                }
                for (int i_28 = 0; i_28 < 21;i_28 += 1)
                {
                    var_42 = (max(var_42, (arr_35 [i_8] [i_28] [i_8] [i_8])));
                    var_43 = (max(var_43, (arr_45 [i_8] [i_9])));
                }
                arr_100 [i_8] [i_8] [19] = var_4;
            }
            var_44 = (max(var_44, (max((((((max((arr_17 [i_8] [1] [i_9] [i_9]), (arr_4 [i_8])))) ? var_1 : ((~(arr_88 [15] [19])))))), ((-var_0 / (min((arr_17 [i_8] [7] [i_9] [i_9]), (arr_7 [i_8])))))))));

            for (int i_29 = 0; i_29 < 21;i_29 += 1)
            {
                var_45 = arr_34 [i_8] [i_9];
                var_46 = (arr_34 [0] [i_9]);
                arr_103 [i_8] [i_9] [1] [i_8] = (((-(arr_102 [i_8] [i_8]))));
                arr_104 [i_8] [5] = (max((arr_79 [17] [i_9 - 1] [i_9] [i_8] [i_9 - 1]), -var_4));
            }
            /* LoopNest 2 */
            for (int i_30 = 0; i_30 < 21;i_30 += 1)
            {
                for (int i_31 = 2; i_31 < 17;i_31 += 1)
                {
                    {
                        var_47 -= (max((((arr_94 [i_31 + 1] [i_31 + 4] [i_30] [i_9 - 1] [7] [i_8]) ? (arr_98 [i_31] [i_31 + 3] [i_31 + 3] [i_31 - 2]) : -52)), (max(((((arr_4 [17]) < var_6))), (arr_11 [i_31 + 4] [i_9 - 1])))));
                        arr_110 [i_8] [i_9 - 1] [16] = (((arr_65 [i_8] [i_8] [i_8] [4]) >= var_6));
                        var_48 = (max(var_48, ((min((arr_12 [i_8] [i_8] [i_8]), (max((arr_12 [i_9 - 1] [i_9 - 1] [i_31]), var_9)))))));
                        var_49 = (((((var_7 >> (arr_42 [11] [i_31 + 4] [i_30] [i_30] [i_9 - 1] [i_8] [i_8])))) - ((((((arr_96 [i_31] [i_30] [i_9] [i_8]) / var_7))) - ((var_0 ? var_3 : (arr_89 [i_8] [1] [i_8] [i_8])))))));
                    }
                }
            }
        }
        var_50 -= var_4;
    }
    var_51 = (var_8 * var_8);
    var_52 += ((0 >= ((((max(var_9, var_2))) ? 4272070264925831687 : var_4))));
    #pragma endscop
}
