/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] = (arr_0 [i_0]);
                arr_9 [i_1] = (max(var_1, var_6));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_13 = (arr_11 [i_0] [i_1] [i_2]);
                    var_14 = (max(var_14, ((min((arr_1 [i_1]), (!var_12))))));
                    var_15 ^= max(var_12, 18446744073709551615);
                    var_16 = -255;
                }
                var_17 = -30207;
            }
        }
    }

    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 21;i_5 += 1)
            {
                {
                    var_18 |= (min(1, -0));

                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 23;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_6] [i_3] [i_3] [i_6] [i_3] [i_4] = ((!(arr_16 [i_6 + 1] [i_5 + 1])));
                            var_19 = arr_20 [i_6] [i_6] [i_3] [i_6] [i_3];
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                        {
                            var_20 *= (arr_22 [3] [3] [i_5 + 1] [i_5] [i_5 - 1] [3] [i_5 + 3]);
                            var_21 = (!(arr_21 [i_5] [i_5 - 2] [i_5 + 2] [i_6] [i_6 + 1] [i_8]));
                            arr_30 [i_3] [i_4] [i_3] [i_6] [i_3] = var_1;
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                        {
                            var_22 = 234;
                            var_23 = (min(var_23, (arr_32 [i_6] [i_6] [i_6] [i_6] [i_6 - 1] [i_6])));
                            var_24 = (arr_24 [i_3] [i_3] [i_5] [i_5 - 2] [i_9]);
                        }

                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            var_25 = -var_6;
                            var_26 = ((~(arr_31 [i_10] [i_6 + 1] [i_6] [i_4] [i_3])));
                        }
                    }
                    for (int i_11 = 1; i_11 < 23;i_11 += 1) /* same iter space */
                    {
                        arr_39 [i_11] [i_3] [i_5] [i_5] [i_3] [i_3] = var_1;
                        var_27 = ((-(max((arr_36 [i_3] [i_11 - 1] [i_5 - 3] [i_3]), (arr_36 [i_3] [i_11 + 1] [i_5 - 2] [i_3])))));
                    }
                    for (int i_12 = 1; i_12 < 23;i_12 += 1) /* same iter space */
                    {
                        var_28 = ((+(max((arr_28 [i_3] [i_5 + 1] [i_5 + 1]), (arr_31 [i_5 + 1] [i_5 + 2] [i_5 + 1] [i_5 + 1] [i_5 - 3])))));
                        var_29 ^= (min((min((arr_19 [i_12 + 1]), var_7)), (!1232226094)));

                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            var_30 |= ((!((!(arr_42 [6] [i_5] [i_5 - 1] [i_5] [i_5])))));
                            var_31 = (max(var_11, (arr_42 [i_3] [i_5 - 2] [i_5] [i_12] [i_13])));
                            arr_47 [i_3] [i_3] = var_2;
                        }
                        var_32 = ((~(~var_8)));
                    }
                    for (int i_14 = 2; i_14 < 21;i_14 += 1)
                    {
                        arr_51 [1] [13] [i_3] = ((~((~(arr_38 [i_5] [i_5 + 2] [i_5] [i_5] [i_5 + 2] [i_14 + 3])))));

                        for (int i_15 = 1; i_15 < 23;i_15 += 1)
                        {
                            var_33 = var_10;
                            var_34 = -52;
                            var_35 = ((!(~var_4)));
                            var_36 = (~(~var_6));
                            var_37 = ((-(max(var_4, (arr_52 [i_3] [i_3])))));
                        }
                        /* vectorizable */
                        for (int i_16 = 2; i_16 < 23;i_16 += 1) /* same iter space */
                        {
                            arr_58 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = var_5;
                            var_38 = (!var_4);
                            var_39 &= var_0;
                        }
                        for (int i_17 = 2; i_17 < 23;i_17 += 1) /* same iter space */
                        {
                            var_40 = (max((!var_4), ((!((min((arr_42 [i_3] [i_14 + 2] [i_5] [i_3] [i_3]), var_0)))))));
                            var_41 = (min(var_41, 22));
                        }

                        for (int i_18 = 1; i_18 < 1;i_18 += 1)
                        {
                            var_42 = -var_2;
                            var_43 = ((~(arr_41 [i_3] [i_18 - 1] [i_18] [i_18 - 1] [4])));
                        }
                        for (int i_19 = 0; i_19 < 24;i_19 += 1)
                        {
                            var_44 = (arr_42 [i_3] [i_4] [i_14 - 2] [i_14] [i_5 - 3]);
                            var_45 = (arr_53 [i_14] [i_3] [i_3] [i_14] [i_14 - 2] [i_14] [i_14 - 1]);
                            var_46 = 0;
                        }
                        for (int i_20 = 0; i_20 < 24;i_20 += 1)
                        {
                            var_47 |= ((!((min((arr_28 [i_20] [i_20] [i_14 + 2]), (arr_28 [i_20] [i_20] [i_14 + 3]))))));
                            arr_70 [i_3] [i_14] [i_5 + 1] [i_5] [i_20] [i_3] = (min(((max((arr_18 [i_4] [i_5 + 2]), (arr_18 [i_3] [i_4])))), ((~(arr_18 [i_5 - 2] [i_14])))));
                            var_48 ^= (arr_26 [i_5 + 2] [i_20] [i_14 - 2] [i_20] [i_20]);
                        }
                        for (int i_21 = 0; i_21 < 0;i_21 += 1)
                        {
                            var_49 += (min((arr_35 [i_21 + 1] [i_14] [i_14] [i_3]), (arr_68 [i_21 + 1])));
                            arr_73 [i_4] [i_14] |= 3062741202;
                        }
                        var_50 = max(245, 1);
                        var_51 = (!var_6);
                    }
                    var_52 = (max(var_52, var_11));

                    for (int i_22 = 3; i_22 < 23;i_22 += 1)
                    {
                        var_53 = var_4;
                        var_54 = (max(var_54, (arr_63 [i_3] [i_4] [i_4] [i_5] [1])));
                        var_55 = ((~(arr_57 [21] [21] [i_5 - 3] [i_5 + 1] [i_5 - 3] [i_22])));
                        var_56 = var_9;
                    }
                    for (int i_23 = 0; i_23 < 1;i_23 += 1)
                    {
                        var_57 = ((min(var_0, (arr_14 [i_5 - 2]))));

                        for (int i_24 = 0; i_24 < 24;i_24 += 1)
                        {
                            arr_83 [i_3] [i_3] [i_24] = ((max(var_6, var_3)));
                            var_58 = (max(1, 0));
                            var_59 = (min(var_59, ((min(76, (!224))))));
                            var_60 = (min(var_60, (!1255609706)));
                        }
                        for (int i_25 = 0; i_25 < 24;i_25 += 1)
                        {
                            var_61 *= -var_1;
                            arr_87 [i_3] [i_3] [i_3] [i_3] [i_3] = (arr_69 [i_3] [i_3] [i_4] [i_4] [i_23] [i_25]);
                            var_62 = (max((((!(arr_18 [i_5 - 3] [i_25])))), var_8));
                        }
                        for (int i_26 = 2; i_26 < 23;i_26 += 1)
                        {
                            var_63 = (arr_84 [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5] [i_26 + 1] [i_26]);
                            var_64 = (!38010);
                            var_65 = (min(var_65, (arr_61 [i_3] [i_4] [i_4] [i_5 - 1] [i_23] [i_4])));
                            var_66 = (arr_18 [i_3] [i_3]);
                            var_67 = (max(24039, 1232226094));
                        }
                        var_68 -= var_10;

                        for (int i_27 = 2; i_27 < 23;i_27 += 1) /* same iter space */
                        {
                            var_69 = ((max((arr_90 [i_5] [i_5] [12] [i_5 + 2]), (arr_90 [i_4] [i_5] [i_5] [i_5 - 2]))));
                            var_70 = (min(var_70, (arr_46 [i_27] [i_27 - 1] [18] [i_27] [22] [i_27])));
                        }
                        for (int i_28 = 2; i_28 < 23;i_28 += 1) /* same iter space */
                        {
                            var_71 = (!-var_0);
                            var_72 = (arr_65 [i_3] [i_5 + 3] [i_5 + 1] [i_23] [i_28 - 2] [i_23]);
                        }
                        for (int i_29 = 2; i_29 < 23;i_29 += 1) /* same iter space */
                        {
                            var_73 = var_0;
                            var_74 = var_3;
                            var_75 = -var_10;
                            var_76 = ((-((~(arr_60 [i_3])))));
                        }
                        var_77 = ((!(arr_29 [i_3] [i_3])));
                    }
                    /* LoopNest 2 */
                    for (int i_30 = 0; i_30 < 24;i_30 += 1)
                    {
                        for (int i_31 = 0; i_31 < 24;i_31 += 1)
                        {
                            {
                                var_78 = ((min((arr_100 [i_3] [i_5 + 1] [i_30] [i_3]), (arr_21 [i_3] [i_5 - 3] [i_31] [16] [i_31] [i_31]))));
                                var_79 = (min(var_79, var_0));
                                var_80 = (arr_88 [i_3] [i_3] [i_3] [i_3] [i_3] [16] [i_3]);
                            }
                        }
                    }
                }
            }
        }
        var_81 = ((!((max(22477, 0)))));
    }
    /* LoopNest 2 */
    for (int i_32 = 1; i_32 < 21;i_32 += 1)
    {
        for (int i_33 = 4; i_33 < 20;i_33 += 1)
        {
            {
                var_82 = (max((max(0, 27264)), (arr_23 [i_33] [i_32 + 1] [i_32 + 1] [i_33 - 4] [i_33 - 4])));
                arr_108 [i_33] = ((min((min((arr_32 [i_32] [i_32 + 1] [i_32] [i_33] [i_32] [i_33]), (arr_75 [i_32 + 2] [0] [14] [14] [14] [1]))), (arr_41 [i_33] [i_33] [i_33] [i_33] [i_33]))));
            }
        }
    }
    #pragma endscop
}
