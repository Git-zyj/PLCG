/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= var_14;
    var_20 ^= (max((min(var_5, ((max(var_10, var_5))))), ((max(var_2, 1718092660101558040)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        var_21 = (max(var_21, ((max(22, (min(var_1, (arr_1 [i_0]))))))));
        arr_3 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
    }

    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_22 = ((~(max(var_4, ((min(var_1, (arr_5 [i_1] [10]))))))));
        var_23 = ((min((min((arr_5 [i_1] [i_1]), 186)), 94)));
        arr_7 [i_1] = (arr_6 [i_1]);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((~(max(-900585671, (min(64, 16405894006980607470))))));
        arr_12 [i_2] = (max((min(var_1, (arr_10 [i_2]))), (min((arr_10 [i_2]), var_0))));
        var_24 = (arr_1 [i_2]);
        arr_13 [i_2] = ((!(arr_10 [i_2])));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_25 &= min((max((-2147483647 - 1), -13620)), (arr_10 [i_3]));
        var_26 = (((max((arr_0 [12] [i_3]), (arr_0 [6] [i_3])))));
    }
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
        {
            var_27 ^= (arr_0 [i_4] [i_5]);

            for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
            {
                var_28 = ((max((arr_21 [i_4 + 2]), var_5)));
                var_29 = (max(var_29, (arr_5 [i_4] [i_6])));
                arr_24 [i_4] [i_4] [i_4] [i_6] = (arr_22 [i_4] [i_5] [i_4]);
                arr_25 [i_4] = min((arr_17 [i_6] [i_5]), (min((arr_6 [i_5]), (max((arr_16 [i_4]), (arr_1 [i_6]))))));
            }
            for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
            {
                var_30 += var_0;
                var_31 = (max(var_31, ((max((max((arr_26 [i_7]), (arr_15 [i_5]))), (arr_0 [i_4 - 1] [i_7]))))));

                for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        arr_34 [i_4 + 1] [i_5] [i_4 + 1] [i_4] [i_8] [i_9] = var_11;
                        var_32 = (max((min((arr_27 [i_8] [i_4] [i_4 - 1]), (max(0, 168)))), (arr_14 [i_4 + 2])));
                        var_33 += arr_6 [i_4 - 1];
                        var_34 = (max((arr_33 [i_9] [i_8] [i_7] [i_7] [i_5] [i_4 + 1] [i_4]), (max((min((arr_1 [i_7]), var_6)), var_8))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        arr_38 [i_4] [i_5] = (arr_23 [i_8] [i_5] [i_4]);
                        var_35 = var_0;
                    }
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        var_36 = (max(var_36, (max((arr_21 [i_4]), (arr_36 [i_4] [2] [i_4 + 2] [i_11])))));
                        arr_41 [i_4] [i_4] [i_4] [i_8] [i_11] [i_4] = (~var_17);
                        arr_42 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_8] [i_4] [i_4] [i_8] = (max((max(((min(158, (arr_8 [i_4] [i_7])))), (arr_6 [i_11]))), (arr_20 [i_4] [6])));
                    }
                    arr_43 [10] [10] [i_7] [i_4] [i_7] [i_4 - 1] = var_9;
                }
                for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        arr_50 [i_4] [i_12] [i_7] [i_4] [i_5] [i_4] = (arr_9 [i_4 + 1]);
                        var_37 = (arr_6 [i_7]);
                        arr_51 [i_4] [i_4] [3] [i_4] [i_13] = (arr_27 [i_4 + 1] [i_4] [i_4 + 2]);
                    }
                    var_38 = (min(var_38, (arr_39 [i_7] [i_7] [i_5] [i_7])));
                }
                var_39 = (max(var_12, var_1));
                arr_52 [i_4 + 1] [i_4] [i_5] [i_7] = (max((min((arr_6 [i_4 + 2]), (arr_37 [5]))), (arr_28 [i_4] [i_4] [8])));
            }
            for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
            {

                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    var_40 ^= ((min((arr_19 [i_15]), (arr_19 [i_14]))));
                    var_41 = var_16;

                    for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
                    {
                        var_42 = (max(var_42, (arr_16 [i_16])));
                        arr_61 [i_4] [i_5] [10] [i_15] [i_16] = ((~((~(min((arr_53 [i_4]), (arr_44 [i_4 + 1] [i_4 + 1] [i_14] [8] [1])))))));
                        arr_62 [i_14] [i_4] [i_14] [i_4] [i_4] = (arr_59 [i_4] [i_4] [i_4] [i_4 + 1] [i_4] [i_4 + 1]);
                        var_43 = (min(((min((arr_8 [i_14] [i_16]), (arr_8 [i_4] [i_4 + 2])))), (min((max((arr_10 [i_4 + 1]), var_1)), (max(var_14, var_16))))));
                        arr_63 [i_4 - 1] [i_4] [i_14] [i_15] [i_16] [i_14] = (max(8, (max(158, 67))));
                    }
                    for (int i_17 = 0; i_17 < 11;i_17 += 1) /* same iter space */
                    {
                        var_44 = (max(var_44, ((max(var_0, (min(var_1, (arr_33 [3] [i_4 + 1] [i_14] [i_4 + 1] [i_17] [i_5] [7]))))))));
                        arr_67 [i_4] [i_4] [i_4] [4] [i_15] [i_17] [i_15] = (max((arr_65 [i_4] [i_5] [i_14] [i_15] [i_17]), (arr_30 [i_4] [i_5] [i_5] [i_15] [i_5])));
                        var_45 &= var_0;
                        arr_68 [1] [1] [1] [i_15] [8] [i_4] = (min((arr_47 [i_4]), (~var_1)));
                    }
                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 11;i_18 += 1) /* same iter space */
                    {
                        var_46 = (arr_28 [i_4 - 1] [i_4 + 1] [i_4 + 2]);
                        var_47 = (max(var_47, (arr_0 [i_4 - 1] [0])));
                        var_48 += var_6;
                        var_49 = 158;
                    }
                    arr_72 [i_4] = (~var_8);
                    var_50 = (min(var_50, ((max(((-((min(var_0, var_10))))), (((max(var_6, 20882)))))))));
                }
                for (int i_19 = 0; i_19 < 11;i_19 += 1)
                {
                    arr_75 [i_4] [i_5] [i_5] [1] [3] [i_4] = var_2;
                    var_51 = (min(var_8, (arr_45 [i_4])));
                    var_52 = var_8;
                    arr_76 [i_4] = ((min((arr_48 [i_4] [i_4] [i_14] [i_4 + 1] [i_5]), var_4)));
                }
                for (int i_20 = 1; i_20 < 10;i_20 += 1)
                {
                    arr_79 [i_4 + 1] [i_4] [3] = (-2147483647 - 1);
                    arr_80 [i_4] [i_4 - 1] [10] [i_4] = max((min((arr_22 [i_4 + 2] [i_4 + 2] [i_4]), (arr_22 [i_4 + 1] [i_4 + 1] [i_4]))), (arr_74 [i_4] [i_4 + 1]));
                    var_53 = (max(var_53, var_14));
                }
                arr_81 [i_4] [i_5] [i_5] = 55;
                arr_82 [i_4] [i_4] = var_8;
            }
        }
        for (int i_21 = 0; i_21 < 11;i_21 += 1) /* same iter space */
        {
            var_54 *= ((min(34740, 83)));
            /* LoopNest 3 */
            for (int i_22 = 0; i_22 < 11;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 1;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 11;i_24 += 1)
                    {
                        {
                            arr_95 [i_22] [i_22] [i_4] = (arr_94 [i_4] [i_4 + 2] [i_4 - 1] [i_4 + 1] [i_4]);
                            arr_96 [i_4] [i_4] [i_22] [i_23] [i_23] [i_23] [i_24] = var_14;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_25 = 0; i_25 < 11;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 11;i_26 += 1)
                {
                    {
                        var_55 = ((max(1, 198)));

                        for (int i_27 = 1; i_27 < 9;i_27 += 1)
                        {
                            var_56 = var_0;
                            var_57 = (((~(arr_59 [i_27] [i_27] [i_27 - 1] [i_27 - 1] [i_4] [i_27]))));
                            var_58 = var_7;
                            arr_104 [i_4] [i_4] [1] [i_4] [i_27 + 1] = var_9;
                        }
                        for (int i_28 = 0; i_28 < 11;i_28 += 1)
                        {
                            var_59 = var_4;
                            arr_107 [i_4] = var_11;
                        }

                        for (int i_29 = 0; i_29 < 11;i_29 += 1)
                        {
                            var_60 = var_6;
                            arr_110 [i_4] [i_4] [i_25] [i_4] [i_29] [i_29] = var_16;
                        }
                        for (int i_30 = 0; i_30 < 11;i_30 += 1)
                        {
                            var_61 += (((min(var_16, var_0))));
                            var_62 += (arr_57 [i_4] [i_4] [i_25] [i_4] [i_30] [i_30]);
                            var_63 &= -var_1;
                            var_64 = (min(var_64, (min((~44636), (!54297)))));
                        }
                        arr_113 [2] [i_21] [2] [i_25] [i_25] [i_4] = var_9;
                    }
                }
            }
        }
        var_65 &= arr_6 [i_4 + 2];
    }
    #pragma endscop
}
