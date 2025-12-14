/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_8;
    var_18 = ((var_5 ? (((((5606608831980488943 ? var_12 : var_5))))) : ((var_3 ? var_2 : (var_14 | var_15)))));
    var_19 &= ((var_13 ? (max(var_16, ((((var_3 + 2147483647) << (((((-127 - 1) + 129)) - 1))))))) : var_2));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_20 = (((var_3 + 2147483647) >> ((((~var_2) || 246)))));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_21 = ((-((var_10 ? (arr_0 [i_1 - 1] [i_1 - 1]) : 251))));
            var_22 = ((var_11 == (((var_4 && (((arr_1 [i_1 - 1]) || var_6)))))));
        }
        for (int i_2 = 2; i_2 < 8;i_2 += 1)
        {
            var_23 = (min(((max((arr_0 [i_2 + 1] [i_2 - 2]), (arr_0 [i_2 + 2] [i_2 + 1])))), (((arr_0 [i_2 + 1] [i_2 + 1]) ? var_13 : 2474069649))));
            arr_7 [i_0] &= (25679 * var_4);
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_24 *= (max(var_2, (10 - 19)));
                        var_25 = (arr_3 [i_0] [i_4] [i_0]);
                    }
                }
            }

            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                var_26 = (min((var_0 > -254707798638071664), (-910790931 - 0)));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {
                        {
                            var_27 |= 806890190;
                            arr_18 [i_0] [i_5] [i_5] [i_6] = ((((var_4 ? (arr_6 [i_0]) : (arr_1 [i_0]))) * var_0));
                            var_28 = (max(var_28, (var_9 & var_6)));
                            var_29 &= (arr_13 [i_0]);
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_8 = 3; i_8 < 8;i_8 += 1)
        {
            var_30 = (((arr_5 [i_0] [i_0] [i_8]) ? (arr_16 [i_8 - 3] [i_8 - 3]) : var_8));
            var_31 = ((((94872524 >> (((arr_6 [i_8]) - 174028628)))) >> (((((arr_4 [i_8] [i_0]) ? var_2 : var_13)) - 18446744073709543167))));
            var_32 += (arr_14 [i_0] [i_0] [i_0] [i_0]);
        }
        arr_21 [8] [8] = (24 & 237);
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
    {
        var_33 = (var_7 ^ var_12);
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                {

                    for (int i_12 = 3; i_12 < 9;i_12 += 1)
                    {
                        arr_36 [8] [i_10] [i_12 - 1] [i_10] [i_10] = 142;

                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            arr_41 [i_10] = (arr_40 [i_13] [i_13] [i_12] [i_12] [i_12 - 3] [i_12 - 2] [i_9]);
                            var_34 = (max(var_34, 1));
                            var_35 = 774260649;
                        }
                    }
                    for (int i_14 = 2; i_14 < 9;i_14 += 1)
                    {
                        var_36 = var_14;
                        arr_44 [i_10] [i_11] [8] = (((arr_31 [i_9] [i_10] [i_10] [i_14 + 1]) | (var_7 - var_3)));
                    }

                    for (int i_15 = 1; i_15 < 7;i_15 += 1)
                    {
                        var_37 = (var_14 && -6297837476987612790);
                        var_38 *= (((1 ? -583921535 : 107)));

                        for (int i_16 = 0; i_16 < 10;i_16 += 1)
                        {
                            var_39 = (arr_3 [i_9] [i_10] [i_9]);
                            var_40 = (((((134 ? -1619 : 94872524))) ? ((((arr_35 [i_9] [i_10] [i_11] [8] [i_16]) && (arr_46 [i_9] [i_9] [i_9] [i_9] [i_9])))) : (arr_4 [i_10] [i_15 + 2])));
                            var_41 = (max(var_41, -246));
                            var_42 = (arr_45 [i_10] [i_11] [i_11] [i_11] [i_10]);
                            var_43 = 806890190;
                        }
                        for (int i_17 = 1; i_17 < 8;i_17 += 1)
                        {
                            var_44 ^= (((arr_22 [i_15 + 3] [i_17 - 1]) - var_6));
                            var_45 = (~-var_7);
                        }
                        arr_53 [i_10] [i_10] [i_10] = ((((var_6 == (arr_42 [i_9] [i_9] [i_9] [i_10]))) ? ((774260649 - (arr_26 [i_10] [i_10] [i_11]))) : (arr_15 [i_15 + 2])));
                    }
                    for (int i_18 = 1; i_18 < 9;i_18 += 1)
                    {
                        var_46 += ((!(arr_3 [i_18] [i_9] [i_9])));
                        arr_58 [i_9] [i_9] [i_10] [i_9] [i_9] = (arr_13 [i_10]);
                        var_47 = ((var_15 ? var_4 : (arr_17 [i_10] [i_18 - 1] [i_18 - 1] [i_18 + 1] [i_18 - 1])));
                        var_48 ^= (arr_51 [i_9] [i_10] [i_10] [i_18] [i_11]);
                    }
                    for (int i_19 = 0; i_19 < 10;i_19 += 1)
                    {
                        var_49 -= ((1989397153800767007 ? var_4 : (arr_13 [i_9])));
                        arr_62 [i_9] [i_9] [i_10] [i_19] [i_19] = (arr_38 [i_9] [i_10] [i_11] [i_10] [i_10]);
                    }
                    for (int i_20 = 0; i_20 < 10;i_20 += 1)
                    {
                        var_50 *= (((((var_1 & (arr_13 [i_20])))) >= var_14));
                        var_51 = var_13;
                    }
                    arr_65 [i_10] [i_10] [i_10] = (((arr_47 [i_10] [i_11]) ? var_8 : (((arr_0 [i_9] [i_9]) ? (arr_42 [i_9] [i_10] [i_11] [i_10]) : var_3))));
                    var_52 = (max(var_52, (((arr_20 [i_10]) ? (((var_7 ? var_5 : var_7))) : 1820897647))));
                }
            }
        }
        arr_66 [i_9] &= (arr_61 [i_9] [i_9] [i_9] [i_9]);
        var_53 = (((arr_34 [i_9] [i_9] [i_9] [i_9]) - (arr_34 [i_9] [i_9] [i_9] [i_9])));
    }
    #pragma endscop
}
