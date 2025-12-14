/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = ((max(var_19, -var_16)));
                var_21 = var_3;

                for (int i_2 = 4; i_2 < 14;i_2 += 1)
                {
                    var_22 = ((15816 ? var_7 : (((-(var_2 & var_9))))));
                    var_23 = (((596483388964945633 ? 246004418 : 15971101258978681547)));
                }
                for (int i_3 = 3; i_3 < 12;i_3 += 1)
                {
                    var_24 = var_4;
                    var_25 = (min(var_25, (arr_10 [i_3 + 1] [7] [7] [1])));
                }
                var_26 = ((((arr_3 [i_1 - 1]) ? (arr_5 [i_1] [9] [1] [i_0]) : -64159)));
                var_27 = ((((((max(var_19, (arr_10 [i_0] [i_0] [i_0] [i_0])))) ? ((min((arr_6 [11] [i_1 - 1]), (arr_6 [i_0] [3])))) : var_10)) << (((min((var_17 + var_9), ((((arr_2 [i_0]) << (((arr_6 [i_0] [i_1 - 1]) - 114193643))))))) - 35559))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 13;i_5 += 1)
        {
            {
                var_28 = (((((var_9 == (arr_5 [i_4 - 1] [i_4 - 1] [i_5 - 3] [i_5])))) << (var_6 - 18007331354322508862)));
                var_29 = (max(var_29, var_16));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            {
                var_30 *= var_16;
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 4; i_9 < 16;i_9 += 1)
                    {
                        {
                            var_31 = (min(var_31, (((max((arr_16 [i_6]), (var_2 + var_11))) + ((+(min((arr_16 [i_9]), (arr_19 [i_6])))))))));
                            var_32 |= (11662393459945406087 % 2475642814730870069);
                        }
                    }
                }

                for (int i_10 = 1; i_10 < 17;i_10 += 1)
                {

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
                    {

                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            var_33 = ((var_10 & var_13) ? (((-(arr_17 [3] [7])))) : var_10);
                            var_34 = (min(var_34, (~1393251174)));
                        }
                        for (int i_13 = 2; i_13 < 15;i_13 += 1)
                        {
                            var_35 = var_10;
                            var_36 = var_5;
                        }
                        var_37 = (arr_27 [i_7] [i_10] [i_7]);
                    }
                    for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
                    {

                        for (int i_15 = 0; i_15 < 19;i_15 += 1)
                        {
                            var_38 = (max(((0 ? 1 : 1037995298)), (((-(arr_40 [i_10 + 2]))))));
                            var_39 = (((arr_26 [i_6] [i_7] [i_14] [5]) == (((max(1, 453845675409042483)) + (var_17 * var_11)))));
                            var_40 = var_8;
                            var_41 += ((!(((~((7 ? var_2 : var_3)))))));
                        }
                        for (int i_16 = 1; i_16 < 17;i_16 += 1) /* same iter space */
                        {
                            var_42 = ((min(0, var_12)));
                            var_43 = (min(var_43, ((min((arr_33 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]), (((((((arr_31 [i_6] [i_6] [i_6] [i_6] [i_6]) < 35115652612096))) & var_2))))))));
                        }
                        for (int i_17 = 1; i_17 < 17;i_17 += 1) /* same iter space */
                        {
                            var_44 ^= (min(var_15, (arr_41 [i_6] [i_7] [i_10 + 1] [i_10 - 1] [i_14] [i_14] [i_17])));
                            var_45 = (max(var_45, (var_3 + -var_0)));
                            var_46 = (((!var_1) << (((((arr_22 [6] [i_7] [6] [i_7]) ? -126 : var_3)) - 4294967142))));
                            var_47 = (((arr_37 [i_6] [i_7] [i_10 + 2] [i_10 + 2] [i_17]) ? (((-((var_16 ? var_16 : var_14))))) : var_6));
                            var_48 = (max(var_48, (((((max((((-(arr_33 [i_17 - 1] [i_6] [i_10] [i_10] [i_6] [i_6])))), (max((arr_18 [i_17]), (arr_36 [i_6] [i_6] [18] [i_6] [i_6])))))) ? var_18 : (arr_41 [i_17] [10] [i_14] [i_14] [i_10] [0] [i_6]))))));
                        }
                        var_49 += (min((min((arr_42 [i_10 + 2] [i_10 + 2] [i_10 - 1] [i_10 + 1] [i_10 + 2]), var_12)), (min((arr_42 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_10 + 1]), (arr_42 [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 - 1])))));
                        var_50 = var_13;
                    }
                    var_51 |= (~(((~453845675409042484) + (((-(arr_35 [i_6] [i_6] [i_6] [i_6])))))));
                }
                for (int i_18 = 0; i_18 < 19;i_18 += 1)
                {

                    /* vectorizable */
                    for (int i_19 = 0; i_19 < 19;i_19 += 1)
                    {
                        var_52 = var_9;
                        var_53 = (!var_9);
                        var_54 = (arr_38 [i_6] [i_6] [i_6] [i_6] [i_18] [i_19]);
                        var_55 = (min(var_55, (((~(((var_3 + 2147483647) >> (var_2 + 66))))))));
                    }
                    for (int i_20 = 4; i_20 < 17;i_20 += 1)
                    {
                        var_56 = (((!17) ? var_6 : ((~(arr_45 [i_18] [i_20 + 2] [i_20] [i_7] [i_20 - 3])))));
                        var_57 -= (((--123) ? var_2 : (((!(arr_44 [i_6] [i_7] [i_18] [i_6]))))));
                    }

                    for (int i_21 = 0; i_21 < 19;i_21 += 1)
                    {
                        var_58 = var_6;
                        var_59 = (arr_34 [i_6] [i_6] [i_18] [i_21]);
                    }
                    for (int i_22 = 2; i_22 < 16;i_22 += 1)
                    {

                        for (int i_23 = 1; i_23 < 17;i_23 += 1)
                        {
                            var_60 *= ((-((max(var_8, -22820)))));
                            var_61 = ((-(((arr_28 [i_23] [i_23 + 1] [i_23 + 2] [i_23] [i_23 + 1]) * (((var_2 ? var_9 : var_4)))))));
                        }
                        for (int i_24 = 0; i_24 < 19;i_24 += 1)
                        {
                            var_62 = (max(17992898398300509122, 1));
                            var_63 = ((-(min(1, -var_13))));
                        }
                        var_64 = (max(-var_2, (arr_38 [i_22 + 2] [i_22 + 1] [i_22] [i_22 + 3] [i_22 - 1] [i_22 + 1])));
                    }
                    var_65 = (min(var_65, ((((((-(arr_61 [i_7] [i_7] [i_7] [15])))) == (((arr_32 [i_6] [i_7] [i_6]) ? var_0 : var_8)))))));
                }
                for (int i_25 = 0; i_25 < 19;i_25 += 1)
                {
                    var_66 = ((var_17 * var_6) / (max((arr_39 [i_6] [i_6] [i_6] [i_25] [i_25]), var_0)));
                    var_67 -= var_17;
                }
            }
        }
    }
    #pragma endscop
}
