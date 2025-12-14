/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 15;i_1 += 1) /* same iter space */
        {
            arr_4 [i_1] [i_1 - 1] = ((arr_1 [i_0 + 2]) | 12949299216053756316);
            var_12 = (~(arr_3 [i_0]));
            var_13 = var_6;
            var_14 = (max(var_14, 9683106776787012457));
            var_15 = ((!(arr_3 [i_0 - 2])));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 15;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    arr_11 [i_0] [i_2] [i_0] [15] = (arr_6 [8] [i_2 - 1]);
                    var_16 = (max(var_16, (((~(arr_6 [i_2 + 1] [i_0 - 2]))))));
                    var_17 = var_10;
                }
                var_18 = (max(var_18, (((~(arr_1 [i_0 + 1]))))));
                var_19 = var_3;
                arr_12 [i_0] [i_2] [i_2] = var_1;
                var_20 = (min(var_20, var_0));
            }
            for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
            {
                arr_17 [i_0] [i_2] [12] = ((var_10 | (~var_11)));

                for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                {
                    arr_22 [i_0] [i_0] [i_2] [i_2] [i_2] [i_6] = (((((var_10 ? 34092 : var_8))) < 8763637296922539159));
                    var_21 = (((arr_19 [i_0] [i_0] [i_2 + 1] [i_0 - 1] [i_0]) - (arr_13 [i_0] [i_0 + 2] [i_0] [i_6])));
                }
                for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        var_22 = -10740413860849369462;
                        var_23 = var_6;
                        var_24 = (((arr_18 [i_0] [i_0 - 2] [i_0 + 2] [i_2] [i_0]) ? 3271513612 : (arr_18 [3] [i_0 + 2] [i_0 - 2] [i_2] [i_0])));
                    }

                    for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                    {
                        var_25 = var_0;
                        arr_34 [i_0] [i_2] [15] [i_2] [i_2] = (var_6 < -22100);
                        var_26 += var_4;
                    }
                    for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
                    {
                        var_27 = var_3;
                        arr_37 [i_10] [i_7] [i_2] [14] [6] = var_6;
                    }
                    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
                    {
                        arr_40 [i_0] [i_2] [i_5] = ((189 != (arr_6 [i_0 - 2] [i_7])));
                        arr_41 [i_0 + 3] [i_2 + 1] [i_0 + 3] [i_0 + 3] [i_2] = (~var_5);
                        arr_42 [i_2] [i_5] [i_7] [i_11] = (arr_7 [i_2] [i_2] [i_0] [i_7]);
                    }
                }
                for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
                {
                    var_28 = ((3262310456 ? (arr_0 [i_0 + 2] [i_2 - 2]) : (arr_0 [i_0 + 2] [i_2 - 1])));
                    var_29 += 1162396561;
                    var_30 += (((arr_21 [i_5] [i_5] [i_2 - 2] [i_5]) ? ((22103 ? 2850734843 : 9683106776787012476)) : (arr_44 [i_0 + 1] [i_5] [i_0 + 1])));
                    var_31 = var_11;
                    arr_45 [i_0 + 3] [1] [i_2] [i_12] = (((arr_13 [i_0] [i_0] [i_5] [i_2 + 1]) - (arr_13 [i_0 + 1] [i_0 + 1] [i_5] [i_2 + 2])));
                }
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {

                    for (int i_14 = 0; i_14 < 17;i_14 += 1) /* same iter space */
                    {
                        arr_50 [i_2] = (~181);
                        var_32 = (arr_47 [i_13] [i_5] [i_2 + 2] [i_0]);
                        var_33 = var_11;
                    }
                    for (int i_15 = 0; i_15 < 17;i_15 += 1) /* same iter space */
                    {
                        var_34 = (((-(arr_20 [i_2 + 1] [i_13] [i_2] [i_2] [i_2 + 1] [i_0]))));
                        var_35 = 3271513594;
                    }

                    for (int i_16 = 3; i_16 < 14;i_16 += 1) /* same iter space */
                    {
                        var_36 |= ((!(arr_15 [i_16 + 1] [i_0 + 3])));
                        arr_55 [i_0] [i_2 - 2] [i_2] [i_13] [i_13] [i_2] = var_6;
                        var_37 = (arr_43 [i_2] [i_5] [10] [10]);
                    }
                    for (int i_17 = 3; i_17 < 14;i_17 += 1) /* same iter space */
                    {
                        var_38 *= var_5;
                        arr_58 [i_2] [i_2] = var_10;
                    }
                    for (int i_18 = 3; i_18 < 14;i_18 += 1) /* same iter space */
                    {
                        var_39 *= (((~49) ? (arr_1 [i_5]) : var_9));
                        var_40 = ((var_3 ? var_4 : (var_5 >= var_5)));
                        arr_63 [i_2] [i_2] [i_5] = 27684;
                        var_41 = (!var_6);
                        var_42 += 10740413860849369462;
                    }
                    var_43 -= var_3;
                }
            }
            arr_64 [i_0 + 3] [i_0 + 3] [i_2] = (!var_8);
            var_44 ^= (~var_11);

            for (int i_19 = 0; i_19 < 17;i_19 += 1) /* same iter space */
            {
                arr_67 [i_2] = 195;
                var_45 = var_5;
            }
            for (int i_20 = 0; i_20 < 17;i_20 += 1) /* same iter space */
            {
                var_46 = (min(var_46, ((((arr_5 [i_2 + 2] [i_0 + 1] [i_20]) ? var_11 : var_0)))));
                arr_71 [i_0] [i_0] [13] [i_2] = ((!(0 ^ var_5)));
            }
            for (int i_21 = 0; i_21 < 17;i_21 += 1)
            {
                arr_75 [i_21] [i_2] [i_2] [i_0] = ((-(arr_74 [i_0] [i_2] [i_0] [i_2])));
                /* LoopNest 2 */
                for (int i_22 = 3; i_22 < 15;i_22 += 1)
                {
                    for (int i_23 = 4; i_23 < 15;i_23 += 1)
                    {
                        {
                            var_47 = (max(var_47, (var_5 % 4294967295)));
                            var_48 = ((4294967285 ? (arr_51 [i_0 + 1] [i_22] [i_22] [i_22 - 1] [i_0 + 1]) : 1054));
                            var_49 += var_7;
                            var_50 = ((~(arr_2 [i_22 - 2] [i_22])));
                        }
                    }
                }
            }
            var_51 = -7;
        }
        for (int i_24 = 2; i_24 < 15;i_24 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_25 = 4; i_25 < 16;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 17;i_26 += 1)
                {
                    for (int i_27 = 3; i_27 < 15;i_27 += 1)
                    {
                        {
                            var_52 = ((var_3 % ((+((((arr_20 [i_0] [i_0] [i_24] [0] [i_27] [13]) < var_9)))))));
                            var_53 = ((!(arr_5 [i_24 + 2] [i_24] [i_25 - 4])));
                            arr_88 [i_24] [i_24] [i_26] [i_27 - 3] = (max((((!((min((arr_76 [i_24] [i_24] [i_24]), -19)))))), (((var_6 + 2147483647) << (var_7 - 7801622079545835132)))));
                            arr_89 [i_0] [i_0] [i_25] [i_25] [i_25] [i_25] [i_25] &= -var_3;
                        }
                    }
                }
            }
            var_54 = ((~((max(230, (arr_6 [i_24 + 2] [i_24 - 1]))))));
        }
        var_55 = (((((var_5 ? var_8 : var_9))) + ((max(4294967293, var_3)))));
        arr_90 [i_0] = (!var_3);
        var_56 ^= var_5;
    }
    var_57 = (var_3 - var_5);
    var_58 = (min((((var_9 << (var_4 - 25508)))), (((max(var_9, var_4))))));
    var_59 = (min(var_11, var_7));
    var_60 = var_6;
    #pragma endscop
}
