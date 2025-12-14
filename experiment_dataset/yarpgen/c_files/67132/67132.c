/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 -= (!var_5);
        arr_2 [i_0] = ((~(((((132 ? 0 : var_7))) + (max(var_8, var_13))))));
        arr_3 [i_0] = (((var_7 & var_3) || (1 < -113)));
        var_15 = var_12;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_2] [i_3] [i_1] = ((((min((var_3 || var_13), var_1))) == (min((min(var_3, var_1)), var_1))));
                    arr_13 [i_3] [i_2] [i_1] = ((((min(var_13, -1))) / (min(0, -166579944))));
                    arr_14 [i_3] [1] [12] = ((((!((((-166579944 + 2147483647) << (((var_1 + 122) - 2)))))))) == (((65534 & 250) << (!var_1))));
                }
            }
        }
        arr_15 [i_1] = (!((!((max(var_9, 59507))))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 11;i_5 += 1)
            {
                {

                    for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        var_16 = ((((((var_9 < var_10) ? var_3 : (~949556477194220853)))) ? var_1 : ((((min(var_7, var_3))) ? (arr_6 [i_5 - 2] [i_4 - 1]) : var_10))));
                        var_17 = ((var_7 ^ var_0) - ((-(var_3 / var_1))));
                    }
                    for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        var_18 = (max(var_18, (((~((var_4 + (~-103))))))));
                        var_19 = ((((var_10 && var_13) ? var_7 : (arr_22 [i_1] [i_1]))));
                        var_20 += ((-((var_12 / (32 * var_11)))));
                        var_21 = ((max(var_6, ((var_6 * (arr_0 [i_4]))))) / (arr_5 [i_1]));
                        var_22 = min(var_5, ((min(-166579946, var_13))));
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 11;i_8 += 1) /* same iter space */
                    {
                        var_23 = (max(var_23, (var_4 - var_5)));
                        var_24 = ((var_10 > (var_6 & var_3)));

                        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            var_25 = (arr_27 [i_9] [i_8] [i_5 + 3] [i_1]);
                            arr_32 [i_4] [i_4 - 1] [i_5 - 1] [i_8] [i_9] = var_9;
                            var_26 = ((-(var_0 > var_3)));
                            var_27 = (~4611686018427387903);
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            var_28 = (((((~(arr_18 [i_1] [i_1])))) ? var_5 : var_12));
                            arr_36 [i_5] [i_4] = arr_5 [i_5];
                            arr_37 [i_4] [i_8] [i_5] [i_4] = var_4;
                            arr_38 [i_1] [i_4] [i_1] [i_1] [i_1] [i_1] = (!var_6);
                        }
                        var_29 = ((var_9 != var_4) ? (var_4 % var_6) : var_11);
                        var_30 = (min(var_30, (7621451938355767909 ^ var_11)));
                    }
                    for (int i_11 = 1; i_11 < 13;i_11 += 1)
                    {
                        var_31 = (arr_34 [i_1] [i_4] [i_1] [i_11 + 1] [i_1] [i_1]);
                        var_32 = (((((arr_21 [i_11 - 1] [i_11] [i_11] [i_11]) ? (arr_21 [i_11 - 1] [i_1] [i_1] [i_1]) : var_11))) ? ((var_11 >> (((arr_21 [i_11 + 1] [i_5] [i_5] [i_5]) - 140)))) : ((-(arr_21 [i_11 - 1] [7] [i_11] [i_11 - 1]))));

                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            var_33 -= ((3 ? (arr_35 [i_5] [i_5] [8]) : (((var_8 < (arr_34 [i_1] [i_1] [1] [13] [i_1] [8]))))));
                            var_34 = (max(var_34, (((-(arr_26 [2] [i_11 + 1] [i_5 + 2] [2]))))));
                        }
                    }

                    /* vectorizable */
                    for (int i_13 = 3; i_13 < 12;i_13 += 1)
                    {
                        arr_45 [i_1] [i_4] [i_4] [i_4] [i_1] [i_1] = var_0;
                        arr_46 [i_1] [i_1] [i_4] [i_1] [i_1] = (((arr_8 [i_1] [i_1] [i_5]) || (arr_28 [i_5 - 1] [i_4] [i_5 - 2] [i_5])));
                    }
                    /* vectorizable */
                    for (int i_14 = 1; i_14 < 12;i_14 += 1)
                    {
                        var_35 += 255;
                        arr_50 [i_4] [i_4] [i_4] [i_14 + 1] = var_0;
                        arr_51 [i_1] [i_4] [i_4] [i_14 - 1] [i_14] = var_10;
                        var_36 = var_2;
                    }
                    /* vectorizable */
                    for (int i_15 = 1; i_15 < 11;i_15 += 1)
                    {
                        var_37 = (max(var_37, (((var_9 ? -var_9 : (~var_6))))));

                        for (int i_16 = 1; i_16 < 12;i_16 += 1)
                        {
                            var_38 = (((~var_8) == (((65535 ? (arr_22 [i_1] [i_5]) : var_4)))));
                            arr_56 [i_1] [i_4] [i_4] [12] [i_1] = ((((arr_19 [i_1] [i_5] [i_15] [i_16 + 1]) ? var_2 : var_4)) == (var_6 > var_4));
                            var_39 += (-1730127517 > 15545967222407397730);
                        }
                        var_40 = arr_29 [12] [i_5] [0] [i_5] [i_5 - 2] [i_1] [i_1];
                        var_41 = (~var_6);
                        var_42 = var_10;
                    }
                }
            }
        }
        var_43 = (((((var_9 != var_8) ? ((var_6 ? (arr_17 [0] [i_1]) : var_2)) : (~var_7))) == (var_7 ^ var_12)));
    }
    /* LoopNest 3 */
    for (int i_17 = 1; i_17 < 19;i_17 += 1)
    {
        for (int i_18 = 2; i_18 < 16;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 20;i_19 += 1)
            {
                {
                    arr_64 [i_18] [i_18] = (arr_58 [i_17 + 1]);
                    var_44 = (min((((((~(arr_57 [i_19] [i_17])))) ? (((arr_58 [i_19]) ? (arr_58 [7]) : var_0)) : (((min(var_13, var_1)))))), (((~(var_6 || var_13))))));
                }
            }
        }
    }
    var_45 = ((~(!4)));
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 16;i_20 += 1)
    {
        for (int i_21 = 1; i_21 < 12;i_21 += 1)
        {
            {

                /* vectorizable */
                for (int i_22 = 0; i_22 < 16;i_22 += 1)
                {

                    for (int i_23 = 0; i_23 < 16;i_23 += 1)
                    {
                        var_46 -= (!var_3);
                        var_47 = ((var_9 ? var_1 : -var_5));
                        var_48 = var_8;
                        var_49 = var_4;
                        arr_76 [i_21] [i_22] [i_21] = -32760;
                    }
                    for (int i_24 = 2; i_24 < 14;i_24 += 1)
                    {
                        arr_79 [i_20] [i_21] [i_21] [i_22] [i_20] = (9 & -127);
                        var_50 = 231;
                        var_51 = var_11;
                        var_52 = 0;
                    }
                    var_53 += var_8;
                }
                for (int i_25 = 3; i_25 < 13;i_25 += 1) /* same iter space */
                {
                    var_54 = (max(var_54, ((max(var_7, (((((var_4 ? var_3 : 248)) > (var_7 > var_10)))))))));
                    var_55 = ((arr_61 [i_21] [i_21]) == ((((var_2 * (arr_57 [i_20] [i_21]))))));
                }
                for (int i_26 = 3; i_26 < 13;i_26 += 1) /* same iter space */
                {
                    arr_84 [i_20] [i_21] [i_20] = var_1;
                    var_56 = (max(var_6, 20));
                    /* LoopNest 2 */
                    for (int i_27 = 0; i_27 < 16;i_27 += 1)
                    {
                        for (int i_28 = 0; i_28 < 16;i_28 += 1)
                        {
                            {
                                var_57 = (~var_6);
                                arr_90 [i_26] [i_26] [i_26] [i_26] [i_21] = ((-((((max(var_4, var_5))) & -var_5))));
                                var_58 = ((var_3 ? 0 : -38));
                                arr_91 [i_20] [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] = arr_74 [i_21 + 2] [i_27] [i_21 + 2];
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_29 = 0; i_29 < 16;i_29 += 1)
                {
                    for (int i_30 = 0; i_30 < 16;i_30 += 1)
                    {
                        for (int i_31 = 4; i_31 < 15;i_31 += 1)
                        {
                            {
                                arr_101 [i_20] [i_21] [i_20] [i_21] [i_31] = (min((max((~var_0), (((arr_95 [i_21] [i_21]) >> (45831 - 45826))))), var_2));
                                arr_102 [i_21] = ((((((max((arr_58 [1]), (arr_94 [i_20] [i_21] [i_29] [i_29])))))) / var_10));
                            }
                        }
                    }
                }
                arr_103 [i_21] [i_21] = (!-1);
            }
        }
    }
    #pragma endscop
}
