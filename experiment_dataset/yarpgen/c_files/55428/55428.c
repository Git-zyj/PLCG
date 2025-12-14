/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] = (min((arr_1 [i_0]), (((arr_1 [i_0]) >> (var_17 - 200)))));
        var_19 = (min(var_19, var_18));
        var_20 = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (((((1 ? 19471 : var_18))) ? (arr_6 [i_1] [i_1]) : 1));
        var_21 = (((arr_4 [i_1]) ? var_17 : var_14));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_12 [i_1] [i_1] = (((var_4 * (arr_1 [i_2]))));
            var_22 |= (-16831 && 48);
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                var_23 = (((arr_7 [i_1] [i_1]) ? ((((arr_7 [i_3] [i_3]) * var_14))) : 60334));
                arr_19 [i_1] [i_3] [i_3] = (((arr_18 [i_4] [i_4] [i_4]) * var_12));
            }
            var_24 = arr_6 [i_1] [i_1];
            var_25 += -16831;
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_26 = (min(var_26, (((var_12 ? (arr_14 [i_1] [i_1] [i_1]) : var_12)))));
            var_27 = (max(var_27, 0));
            var_28 += ((-16831 ? (arr_15 [i_1] [i_1] [i_5] [i_5]) : (!-16831)));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                var_29 = ((-(arr_22 [i_1] [i_1] [i_1])));
                arr_30 [i_1] [i_1] [i_1] = 216;
            }

            for (int i_8 = 1; i_8 < 20;i_8 += 1)
            {

                for (int i_9 = 3; i_9 < 17;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        arr_39 [i_1] [i_1] [i_1] [i_1] &= 1;
                        var_30 ^= (((arr_9 [i_6] [i_6] [i_6]) ? var_11 : var_18));
                        arr_40 [i_1] [i_1] [i_1] [i_1] [i_8] [i_1] [i_1] = (arr_23 [i_1]);
                    }
                    var_31 = (max(var_31, var_5));

                    for (int i_11 = 2; i_11 < 18;i_11 += 1)
                    {
                        arr_43 [i_1] [i_1] [i_8] [i_1] = (!var_12);
                        var_32 = (((arr_38 [i_1] [i_1] [i_9 + 3] [i_1] [i_8 - 1] [i_11 + 1]) ? (arr_38 [i_1] [i_1] [i_9 + 2] [i_9 + 2] [i_8 - 1] [i_11 + 1]) : 216));
                        var_33 = (((61023 ? 3 : var_5)));
                        arr_44 [i_1] [i_1] [i_1] [i_1] [i_8] = ((~((4437330878471110285 ? 16841 : (arr_27 [i_1] [i_1] [i_1] [i_1])))));
                    }
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        arr_48 [i_1] [i_8] [i_8] [i_8] = ((1 ? 0 : var_11));
                        var_34 = (max(var_34, var_13));
                        arr_49 [i_1] [i_1] [i_8] [i_8] [i_8] [i_8] [i_8] = (((((arr_35 [i_1]) ? var_16 : (arr_26 [i_1]))) * var_0));
                    }
                    var_35 *= ((-((59306 ? 1 : 1))));

                    for (int i_13 = 2; i_13 < 20;i_13 += 1)
                    {
                        arr_54 [i_1] [i_1] [i_1] [i_8] = ((1 ? (arr_9 [i_6] [i_6] [i_6]) : (((arr_50 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_29 [i_1] [i_1] [i_1] [i_1]) : -16821))));
                        var_36 = (((!50619) ? 1511635841652072692 : -8135131638572575119));
                        var_37 *= (((((arr_51 [i_1] [i_1] [i_1] [i_1] [i_1]) + (arr_31 [i_1] [i_1] [i_1]))) / 12427081995114911212));
                        var_38 += ((0 >> (arr_32 [i_1] [i_1] [i_1] [i_1])));
                        var_39 = (arr_41 [i_13] [i_13] [i_13] [i_13] [i_13]);
                    }
                    for (int i_14 = 2; i_14 < 20;i_14 += 1)
                    {
                        var_40 = (((arr_27 [i_8 + 1] [i_14 + 1] [i_14 + 1] [i_9 + 2]) | (arr_27 [i_8 + 1] [i_14 + 1] [i_8 + 1] [i_9 + 2])));
                        arr_58 [i_8] = ((-(arr_53 [i_8] [i_14 - 2] [i_8 - 1] [i_9 - 3] [i_9 - 3])));
                    }
                }
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    arr_61 [i_15] [i_15] [i_15] [i_15] &= ((-(arr_57 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_1] [i_8 + 1])));
                    arr_62 [i_8] = ((!(~0)));
                    var_41 = var_7;
                }
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    arr_65 [i_1] [i_1] [i_8] = (!var_14);
                    arr_66 [i_1] [i_1] [i_1] [i_1] [i_1] &= (((arr_16 [i_1] [i_1]) + (arr_13 [i_1] [i_1])));
                }
                arr_67 [i_8] = ((~(arr_15 [i_6] [i_8 + 1] [i_8 - 1] [i_8 - 1])));
            }
            for (int i_17 = 3; i_17 < 20;i_17 += 1)
            {
                var_42 += (((arr_26 [i_1]) ? -16831 : (((!(arr_53 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                var_43 = (max(var_43, ((((arr_38 [i_17] [i_17] [i_17 + 1] [i_17 + 1] [i_17] [i_17 + 1]) ? (arr_51 [i_1] [i_1] [i_17 + 1] [i_1] [i_1]) : (arr_51 [i_1] [i_1] [i_17 - 2] [i_1] [i_17 - 2]))))));
                var_44 -= ((((1 ? var_5 : -16821)) & 134));
                var_45 = (max(var_45, (((1 * (arr_31 [i_17 - 1] [i_17 - 1] [i_1]))))));
            }
            var_46 = ((-(arr_68 [i_1] [i_1] [i_1] [i_1])));
            var_47 = ((1 || (arr_22 [i_1] [i_1] [i_1])));
        }
    }
    var_48 = (max(var_48, var_6));
    var_49 = (max((!var_5), (min((60033 + 216), (0 <= var_12)))));
    #pragma endscop
}
