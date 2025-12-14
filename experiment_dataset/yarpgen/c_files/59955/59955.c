/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_9 || var_1);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_21 = (max(((3094936270 ? 9223372036854775807 : 0)), (max((arr_1 [i_0]), (((arr_0 [i_0] [i_0]) ? -1430496924 : var_7))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_22 = (max((min(var_1, (arr_1 [i_1]))), (arr_3 [i_1])));
            var_23 = (max(var_3, (arr_1 [i_0])));
            arr_4 [i_0] [i_1] = var_6;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_8 [i_2] |= (((arr_6 [i_2] [i_2] [i_0]) ? (arr_2 [i_0]) : var_3));

            for (int i_3 = 2; i_3 < 22;i_3 += 1)
            {
                var_24 = (((-1430496924 | 1) ? var_9 : (arr_6 [i_3] [i_3 - 1] [i_3 - 1])));

                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_25 ^= 52010;
                    arr_13 [i_0] [i_2] [i_3 - 1] [i_3] [i_4] &= (var_12 % var_8);
                    arr_14 [i_0] [i_2] [i_3] [i_4] |= 46826;
                    var_26 |= ((0 ? 1 : 1));
                    arr_15 [i_0] = ((var_1 ? ((1031348070 ? var_2 : var_13)) : (arr_10 [i_3 - 2])));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_19 [i_0] [i_2] [i_3] [i_5] = (arr_2 [i_2]);
                    var_27 = (((arr_12 [i_0] [i_3] [i_3] [i_3 - 1] [i_5] [i_3]) | (arr_12 [i_5] [i_3] [i_3 - 1] [i_3] [14] [i_0])));
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_28 *= (var_1 ? var_10 : (arr_6 [i_6] [i_2] [i_7]));
                        var_29 = (min(var_29, ((-var_18 ? var_15 : var_8))));
                        var_30 = (~var_0);
                    }
                    var_31 = (((var_17 ? var_13 : 1)));
                }
                arr_24 [i_0] [i_2] = (((arr_17 [i_0] [i_3 - 1] [i_3] [i_3] [i_3 - 2] [i_3 + 1]) & (arr_17 [i_2] [i_2] [i_2] [i_2] [i_3 + 1] [i_3 + 1])));
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 22;i_9 += 1)
                    {
                        {
                            var_32 ^= ((~(arr_17 [i_0] [i_3 + 1] [i_3] [i_8 - 1] [i_9 - 2] [i_3 - 1])));
                            var_33 = (min(var_33, (arr_17 [i_0] [i_2] [i_8 - 1] [i_8 + 1] [i_9 + 1] [i_9])));
                            var_34 = (max(var_34, ((((0 % var_14) + var_5)))));
                        }
                    }
                }

                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_35 = (!var_8);
                    var_36 -= (var_15 > (arr_26 [i_0] [i_2] [i_0] [i_10]));
                }
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    var_37 = (max(var_37, (((var_15 ? ((var_2 ? var_11 : -1430496924)) : var_1)))));
                    var_38 = (((var_4 - var_6) ? ((-14 ? var_11 : (arr_22 [i_0] [i_0] [i_2] [i_3] [i_11]))) : ((((arr_18 [i_2] [i_11]) || var_1)))));

                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        arr_37 [i_0] [i_3] = var_10;
                        var_39 = (((var_1 && var_3) ? (arr_12 [i_3 + 1] [i_3 + 1] [i_3] [8] [i_3] [i_3 - 2]) : (((arr_0 [i_0] [i_2]) ? var_10 : var_14))));
                        var_40 = (max(var_40, ((((arr_1 [i_3 - 1]) ? (arr_27 [i_3 + 1] [i_3 + 1]) : (arr_27 [i_3 - 1] [i_3 + 1]))))));
                        var_41 = var_13;
                        var_42 = ((-7551980077777248345 ? 27 : 102));
                    }
                    for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
                    {
                        var_43 = ((!(((var_3 ? 1 : 0)))));
                        arr_41 [i_0] [i_2] [i_3] [i_11] [i_13] [i_11] = (~2930177686);
                        var_44 = (((((var_2 ? (arr_33 [i_0] [i_2] [i_3] [i_11]) : var_4))) ? (533985576542644840 >= var_12) : 1));
                    }
                    for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
                    {
                        var_45 *= (var_13 + var_14);
                        var_46 = (~var_17);
                    }
                    arr_45 [i_0] [i_2] [14] [i_11] |= (arr_20 [i_0] [i_0] [10] [i_3] [i_0] [i_11]);
                }
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    var_47 = var_8;
                    var_48 = (((arr_43 [i_3 + 1] [i_3] [i_3] [i_3 + 1] [i_2]) / ((154 ? var_15 : var_19))));
                }
            }
        }
        arr_48 [i_0] &= (((min((arr_44 [i_0] [i_0] [i_0] [i_0]), (arr_44 [i_0] [i_0] [i_0] [i_0]))) ? (((((9223372036854775807 ? var_14 : var_7))) ? (((min(var_2, 46799)))) : (arr_1 [i_0]))) : ((((((arr_42 [13] [i_0] [i_0] [i_0] [i_0]) ? var_13 : 1)))))));
    }
    var_49 = max((max(var_8, ((var_15 ? -6705635379810445184 : var_9)))), var_3);
    var_50 -= ((((min(4294967295, 44599)) & 8128)));

    for (int i_16 = 2; i_16 < 18;i_16 += 1)
    {
        arr_51 [i_16] [i_16] = (max(var_19, (((!(1 & 1))))));
        var_51 = ((((var_3 ? (max(var_4, (arr_1 [i_16]))) : (((max(29032, 1)))))) < ((((!((max(6705635379810445192, var_5)))))))));
        arr_52 [i_16] = ((((((((var_19 ? 15205 : (arr_29 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])))) + ((3278556449436415495 ? var_4 : (arr_12 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16 - 2])))))) ? var_15 : ((((max(var_9, 30020))) ? 1765221779 : (arr_47 [7] [i_16])))));
        var_52 = (((((var_12 % (arr_46 [i_16] [i_16 - 2] [i_16])))) < (((min(var_19, (arr_18 [i_16] [i_16]))) - (((max(var_19, var_16))))))));

        /* vectorizable */
        for (int i_17 = 1; i_17 < 16;i_17 += 1)
        {
            var_53 = ((!var_18) ? var_11 : (var_16 & var_11));
            var_54 = (var_5 ? var_14 : (arr_47 [i_16 - 2] [i_16 - 1]));
            arr_55 [i_16] = ((var_8 ? var_13 : var_19));
            arr_56 [i_16] = ((-(arr_53 [i_16 + 1] [i_16 + 1] [i_17 + 2])));
        }
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            var_55 = (min(var_55, (arr_7 [i_16])));
            var_56 = var_1;
            arr_60 [i_16 + 1] [i_16] [i_18] = var_10;
        }
    }
    #pragma endscop
}
