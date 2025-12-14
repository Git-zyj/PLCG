/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_10));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = ((-(((!var_10) & (max(var_3, 3817762074))))));
        var_16 = arr_0 [i_0];
        var_17 = (min(var_17, var_6));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_18 *= (+((var_9 ? (arr_5 [i_1]) : var_11)));
        var_19 = max((((!(arr_3 [i_1])))), (min((arr_5 [i_1]), (arr_4 [i_1] [i_1]))));

        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            arr_9 [i_1] [i_2] = (-(max(17979214137393152, -17979214137393153)));

            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                var_20 = (max(var_20, ((((~3435) + (max(var_13, var_8)))))));
                var_21 *= -var_2;
            }
        }
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {

            for (int i_5 = 4; i_5 < 14;i_5 += 1)
            {

                /* vectorizable */
                for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
                {
                    var_22 = var_11;
                    arr_21 [i_1] [i_1] [6] [i_4] [i_1] [i_1] = (arr_7 [i_1] [i_4]);
                    var_23 = (((arr_3 [i_4 - 1]) & (arr_3 [i_4 + 1])));
                }
                for (int i_7 = 0; i_7 < 0;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        var_24 = ((((!(arr_20 [i_8] [i_4] [i_4] [i_4]))) ? (((((var_13 ? (arr_23 [i_1] [i_4] [3] [i_1] [i_1]) : var_8))) ? (min((arr_6 [1]), var_9)) : var_6)) : (arr_17 [i_1] [1] [i_7 + 1])));
                        var_25 = (max((min((~-3431), (max(var_2, 41)))), (((~(arr_17 [i_4 - 1] [i_7] [i_8]))))));
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        arr_30 [i_1] [i_4] [6] = (((arr_28 [i_1] [i_4] [i_4] [i_4] [13]) / (min(((~(arr_23 [i_1] [i_4] [i_5] [i_7] [i_9]))), var_5))));
                        arr_31 [i_7] [i_1] &= (((((arr_12 [i_4 + 3] [i_5 - 4] [i_7 + 1]) ? (arr_12 [i_4 + 2] [i_5 + 1] [i_7 + 1]) : (arr_12 [i_4 + 2] [i_5 - 1] [i_7 + 1])))) / (max((arr_12 [i_4 + 2] [i_5 + 1] [i_7 + 1]), var_12)));
                    }
                    for (int i_10 = 2; i_10 < 12;i_10 += 1)
                    {
                        arr_35 [i_1] [i_1] [i_4] [7] [i_10 - 1] = 17979214137393152;
                        var_26 = (max(var_26, (((!(-1496257340 || -3421))))));
                        var_27 = ((-(!-17979214137393153)));
                    }
                    var_28 &= (min((!var_7), (arr_27 [i_1] [i_1] [i_4 - 1] [i_5] [i_7])));
                    var_29 |= (max(var_8, (((!(arr_2 [i_1] [i_4 - 1]))))));
                    var_30 *= -17979214137393153;
                }
                for (int i_11 = 0; i_11 < 0;i_11 += 1) /* same iter space */
                {
                    var_31 = ((var_0 * ((143 & (~var_12)))));
                    arr_38 [i_1] [i_4] [1] [i_4] [i_4] [i_11] = ((((var_4 ? (((var_7 ? var_5 : (arr_8 [i_4] [i_5 - 1])))) : ((-(arr_37 [2] [i_4])))))) ? var_2 : (((arr_22 [i_4 + 2] [i_11 + 1] [i_4]) ? var_8 : (arr_22 [i_4 + 3] [i_11 + 1] [i_4]))));
                    var_32 = (((max(var_7, (arr_20 [i_4 + 1] [i_4 + 2] [i_4] [i_4 + 2]))) > (min(229582804626866642, (arr_20 [i_4 - 1] [i_4 - 1] [i_4] [12])))));
                    var_33 = arr_15 [i_1] [i_4];
                }
                var_34 = (arr_7 [i_4 + 3] [i_4 - 1]);
                var_35 = var_7;
                arr_39 [i_1] [i_4] = (max(15971319878507762662, -17979214137393153));
            }
            arr_40 [i_4] = (max(var_9, (((~var_6) ^ (~var_13)))));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        {
                            var_36 = (min(((((arr_32 [i_1] [i_4] [i_4] [i_13] [6]) > (arr_32 [i_1] [i_1] [i_4] [i_1] [i_1])))), -var_1));
                            arr_50 [i_1] [i_12] [i_12] &= ((((min((var_10 | var_8), var_0))) ? (((max((arr_44 [i_1] [5] [i_12] [i_13] [i_14]), 281472829227008)) & var_9)) : var_6));
                        }
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            arr_55 [i_1] = ((~(min(((~(arr_14 [i_1] [1] [i_15]))), 1))));
            var_37 = (max(var_37, var_13));
            var_38 += (max((max((~3430), 1501649237)), var_0));

            for (int i_16 = 3; i_16 < 14;i_16 += 1)
            {
                var_39 = ((var_10 != (~-42)));
                var_40 &= var_8;
                var_41 = (!var_11);
            }

            for (int i_17 = 1; i_17 < 12;i_17 += 1)
            {

                for (int i_18 = 2; i_18 < 14;i_18 += 1)
                {
                    var_42 = ((-(((!(!8041016556960618447))))));
                    arr_62 [i_15] [i_15] [i_17 + 1] [i_15] &= var_1;
                    arr_63 [i_17] = (var_1 == -17979214137393152);
                }
                for (int i_19 = 0; i_19 < 15;i_19 += 1)
                {
                    arr_68 [i_17] [8] [i_17] [i_15] [i_1] |= 12670021554985557882;
                    var_43 -= (max(var_4, ((((var_9 > var_5) >= (arr_23 [i_1] [i_19] [i_1] [i_1] [12]))))));
                    var_44 = (min(var_44, var_11));
                }
                var_45 = var_2;
            }
            for (int i_20 = 1; i_20 < 13;i_20 += 1)
            {
                var_46 = (min(var_46, ((max((71 | 27043), var_9)))));
                var_47 = var_4;
                /* LoopNest 2 */
                for (int i_21 = 2; i_21 < 12;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 15;i_22 += 1)
                    {
                        {
                            var_48 = (max(-1559846757, (min(17979214137393132, 1611382195421801374))));
                            var_49 = var_4;
                        }
                    }
                }

                for (int i_23 = 2; i_23 < 13;i_23 += 1) /* same iter space */
                {
                    var_50 = max(((min(var_8, (~var_9)))), 12670021554985557893);
                    arr_79 [i_1] [i_15] [i_15] [i_15] [i_1] [i_20] = var_1;
                }
                for (int i_24 = 2; i_24 < 13;i_24 += 1) /* same iter space */
                {
                    var_51 = (min(var_51, ((((~var_1) && (arr_29 [i_1] [i_15]))))));
                    arr_82 [i_1] [i_15] = (arr_81 [i_20 + 1] [i_20 + 2]);
                    arr_83 [i_1] [i_15] [i_15] [i_24] = ((4643248997957730601 * ((((max(var_0, var_4)) * (arr_77 [10] [10] [i_20 + 1] [i_20 + 1]))))));
                }
                for (int i_25 = 2; i_25 < 13;i_25 += 1) /* same iter space */
                {
                    var_52 = (max(var_7, (arr_56 [i_25])));
                    var_53 = (max((max(-17979214137393153, ((max(27022, -27018))))), (((!(arr_8 [i_25 + 2] [i_15]))))));
                    var_54 = (max((max(var_0, (min(var_7, var_11)))), (((((-(arr_32 [i_1] [i_1] [i_15] [0] [i_1])))) ? (arr_11 [5] [i_15] [i_15] [i_25 - 2]) : -var_9))));
                }
                arr_87 [i_1] [i_15] [i_20] = 30513;
            }
            for (int i_26 = 3; i_26 < 14;i_26 += 1)
            {
                var_55 = (((max((arr_12 [i_1] [9] [i_1]), (min(var_10, 2873722409440620362)))) / (min((max(10405727516748933167, var_7)), var_2))));
                arr_90 [12] [12] [i_26] [i_15] = ((-(((arr_5 [i_26 + 1]) ? var_6 : var_5))));
                /* LoopNest 2 */
                for (int i_27 = 4; i_27 < 11;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 15;i_28 += 1)
                    {
                        {
                            var_56 = max(((max(-104, 26173))), -17979214137393153);
                            arr_95 [i_27] [i_28] &= var_13;
                            var_57 = (max(339328861, (((~(arr_27 [i_15] [i_15] [i_28] [i_1] [i_28]))))));
                            var_58 = ((-(max(var_4, (var_13 % 10405727516748933169)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
