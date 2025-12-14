/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((min(var_10, var_16)));
    var_19 = (~var_10);
    var_20 = (((min((var_10 >= var_1), var_6)) ? var_13 : (~var_9)));
    var_21 = var_15;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_22 = ((-(((!(min(var_17, var_17)))))));
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_23 += ((var_9 ? ((~(((arr_4 [i_0]) | var_12)))) : ((((~var_1) ? (var_2 ^ var_3) : (arr_3 [i_1] [i_1 - 1]))))));
            var_24 *= (min(((-((-(arr_4 [i_1]))))), (((((min(var_6, (arr_1 [13])))) ? -var_2 : (((var_4 >= (arr_4 [i_0])))))))));

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {

                for (int i_3 = 3; i_3 < 10;i_3 += 1)
                {
                    var_25 = var_14;
                    arr_9 [i_3] = var_10;
                    arr_10 [i_3] [12] [i_2] [i_1] [i_3] [i_3] = ((((min((arr_8 [i_3 + 2] [i_2] [i_1 - 1]), (arr_8 [i_0] [i_2] [i_3 + 3])))) ? ((((!((min((arr_3 [13] [i_0]), (arr_0 [i_0] [i_3])))))))) : (max((arr_6 [i_0] [i_1 - 1] [i_2]), var_17))));
                    arr_11 [i_3] [i_3] [i_2] [i_3 - 3] = (min(((min((arr_6 [i_0] [i_2] [i_3]), var_3))), var_8));
                }
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    var_26 = arr_14 [i_4] [1] [2] [2];

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_27 = ((~(arr_1 [i_1 - 1])));
                        var_28 = (max(var_28, (((((max((arr_8 [i_5] [i_4 + 3] [i_1 - 1]), var_16))) ? (((min(var_17, (arr_12 [i_1]))) ? (arr_8 [i_0] [i_0] [i_2]) : ((max(var_11, var_11))))) : ((((min(var_13, var_12))) + (((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] [i_5]) ? (arr_12 [i_0]) : (arr_0 [i_4] [7]))))))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_29 = var_8;
                        var_30 = (~var_15);
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_31 = (min(var_31, (((((((arr_21 [5] [i_2] [i_0] [i_0] [i_4 + 3] [i_1 + 1]) ^ (arr_1 [i_4 - 1])))) ? var_15 : ((max((arr_22 [0] [1] [4] [0] [i_1 - 1] [i_1 + 1]), (arr_22 [i_0] [i_0] [i_1] [i_1 + 1] [i_1] [i_1 + 1])))))))));
                        var_32 = var_2;
                        arr_25 [12] [i_1 + 1] [6] [i_1 + 1] = (((var_5 ? (arr_13 [i_0] [i_4 + 3] [i_1 - 1] [i_0]) : (arr_6 [i_1 - 1] [i_4 + 2] [i_2]))));
                    }
                    var_33 = (max(var_33, var_4));
                    var_34 = ((!(arr_12 [i_0])));
                }
                var_35 = var_5;

                for (int i_8 = 4; i_8 < 13;i_8 += 1) /* same iter space */
                {
                    arr_28 [i_8] [11] [12] [11] [i_8 - 1] = (arr_21 [i_0] [5] [i_0] [i_0] [i_0] [i_0]);
                    var_36 = (min(var_36, ((((((arr_4 [i_0]) ? var_2 : (arr_5 [i_2] [i_8 - 3])))) ? ((var_16 ? (arr_3 [i_1 - 1] [i_1 + 1]) : (arr_4 [i_2]))) : ((1 ? -6573427065663710560 : 1))))));
                    var_37 = ((((max((max((arr_14 [7] [i_1] [7] [9]), var_4)), (var_4 == var_6)))) ? (arr_20 [i_0] [i_0] [i_8]) : (arr_12 [i_1 + 1])));
                    arr_29 [i_0] [13] [i_2] [i_8] = ((!((((arr_26 [i_8] [i_1 - 1] [i_2] [i_8 - 1]) ? var_7 : var_13)))));
                    arr_30 [i_8] [i_8] = (arr_14 [3] [3] [3] [0]);
                }
                /* vectorizable */
                for (int i_9 = 4; i_9 < 13;i_9 += 1) /* same iter space */
                {
                    var_38 = -4294967295;
                    var_39 = (((arr_32 [i_2] [i_1 + 1]) ? var_8 : (arr_17 [i_1 + 1])));
                }
                arr_33 [i_1] [i_1] [i_0] = var_4;
                arr_34 [i_0] [i_1 + 1] [i_2] [i_2] = ((var_12 ? (arr_7 [i_0] [i_1] [i_1 - 1] [i_1]) : (((arr_8 [i_0] [i_0] [i_2]) ? (!1) : ((var_2 - (arr_17 [i_2])))))));
            }
            arr_35 [i_1] [i_1] = var_7;
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_40 *= (arr_22 [5] [13] [i_0] [i_0] [i_0] [i_0]);
            arr_40 [8] [i_10] = arr_16 [i_0] [i_0] [3];

            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                var_41 = (!var_11);

                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        var_42 = (var_16 ? (arr_46 [i_13] [i_10] [i_11] [i_10] [i_13]) : (var_1 / var_3));
                        var_43 = (min(var_43, (((!(arr_21 [i_0] [i_0] [i_0] [i_12] [i_13] [i_11]))))));
                        var_44 *= ((-(arr_32 [i_0] [i_10])));
                        var_45 ^= ((1 ? 65535 : 65511));
                        var_46 += ((var_17 ? (arr_8 [i_0] [i_0] [i_0]) : (arr_8 [i_0] [i_0] [i_11])));
                    }
                    var_47 = (min(var_47, (arr_37 [i_11] [i_12] [i_11])));
                    arr_49 [i_0] [i_11] [i_0] |= (((255 ? 251 : 4442394817519275156)));
                }
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    arr_53 [i_0] [i_0] [i_10] [i_11] [13] [i_10] = ((~(~var_11)));
                    arr_54 [i_0] [i_11] [i_0] [i_14] &= (arr_39 [i_0]);
                    var_48 &= -var_14;
                    var_49 += var_8;

                    for (int i_15 = 0; i_15 < 14;i_15 += 1) /* same iter space */
                    {
                        arr_58 [i_11] [2] [i_10] = ((((((arr_20 [i_0] [i_0] [i_10]) ? (arr_13 [i_15] [i_10] [i_10] [i_10]) : (arr_47 [i_0] [i_0] [i_15])))) && 8380));
                        arr_59 [13] [5] [13] [13] [i_15] [i_10] [i_15] = (arr_36 [i_10]);
                        var_50 = (min(var_50, ((((arr_44 [i_15]) ? var_9 : (arr_12 [4]))))));
                        arr_60 [i_10] [i_10] [i_11] [i_10] [i_15] = ((var_12 ? (arr_15 [i_0] [i_10] [i_11]) : var_1));
                        var_51 = (max(var_51, (var_9 | var_7)));
                    }
                    for (int i_16 = 0; i_16 < 14;i_16 += 1) /* same iter space */
                    {
                        var_52 ^= (arr_13 [i_0] [i_14] [i_0] [i_0]);
                        var_53 = var_6;
                        var_54 = (min(var_54, -var_14));
                    }
                }
            }
            for (int i_17 = 0; i_17 < 14;i_17 += 1)
            {

                for (int i_18 = 2; i_18 < 10;i_18 += 1)
                {
                    arr_69 [i_0] [i_10] [i_17] [i_10] = ((!((((arr_41 [i_0] [1] [i_10]) + var_17)))));
                    arr_70 [i_10] [i_10] = (((arr_24 [i_0] [i_18] [i_0] [i_18 - 2] [i_18 - 1] [i_18 + 2] [i_18 + 1]) ? (arr_18 [i_0] [i_18 - 1] [i_18] [i_0] [i_18 + 1] [i_17] [i_0]) : (arr_44 [i_10])));
                    var_55 = ((8378 ? 141 : 47));
                }
                for (int i_19 = 0; i_19 < 14;i_19 += 1)
                {
                    arr_73 [i_10] [2] [i_10] [i_10] = (~(arr_65 [i_0] [i_17] [i_10] [i_0]));

                    for (int i_20 = 0; i_20 < 14;i_20 += 1)
                    {
                        var_56 *= (arr_21 [i_19] [i_19] [i_19] [6] [i_10] [i_0]);
                        arr_77 [i_0] [i_10] [i_17] [i_17] [i_17] [6] [i_20] = ((-(arr_63 [i_0] [i_0] [i_0] [i_17] [i_17] [i_10] [i_20])));
                        var_57 = ((var_15 ? ((~(arr_21 [i_0] [i_10] [i_17] [i_0] [i_17] [i_17]))) : (1125650560 / 143)));
                        arr_78 [i_10] [i_10] [i_10] = (((!var_1) ? (((arr_31 [4] [4] [7] [7] [i_19] [7]) ? (arr_27 [i_0] [1]) : var_5)) : var_9));
                        arr_79 [i_0] [i_10] [i_10] [i_19] [i_10] = ((((-8381 ? 243 : 3405163370))) ? var_11 : var_14);
                    }
                    for (int i_21 = 2; i_21 < 13;i_21 += 1)
                    {
                        var_58 = (arr_37 [i_0] [i_0] [i_17]);
                        arr_83 [i_10] [i_10] [i_10] [i_0] = ((-(((arr_50 [i_0] [4] [i_17] [i_10]) ? (arr_12 [12]) : var_8))));
                    }
                }
                arr_84 [i_17] [i_10] [i_0] = (-((var_16 % (arr_31 [i_0] [13] [i_10] [i_0] [i_0] [i_0]))));
            }
        }
    }
    #pragma endscop
}
