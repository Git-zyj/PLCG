/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_11 ^= var_0;
                            var_12 = (((arr_12 [4] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]) ? (arr_2 [i_0]) : (arr_2 [i_3 + 2])));
                        }
                    }
                }
            }
            var_13 = 0;
        }

        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
        {
            var_14 = arr_7 [i_0] [i_0];

            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                var_15 = (arr_15 [i_0] [i_5] [i_6]);
                var_16 = -127260860;
                var_17 = (((((var_5 ? var_10 : (arr_4 [i_0] [i_0] [i_6])))) ? var_5 : (arr_0 [i_0])));
                var_18 = (arr_16 [i_0] [i_5]);
            }
            for (int i_7 = 3; i_7 < 9;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        {
                            var_19 = ((!(arr_28 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7] [i_7 - 2])));
                            var_20 = (arr_12 [i_7] [i_7] [i_7 + 2] [i_8] [6]);
                        }
                    }
                }
                var_21 = (arr_27 [1] [i_7] [i_7] [i_7] [i_7 - 1] [i_7]);
                var_22 = var_10;
            }
        }
        for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
        {
            var_23 = (((arr_19 [i_0] [i_0] [i_10]) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_19 [i_0] [i_10] [i_0])));
            var_24 = (arr_9 [i_10] [i_10] [i_10] [i_0] [i_0]);
            var_25 = var_10;
            var_26 = (((arr_1 [i_0] [i_10]) ? var_10 : (arr_29 [i_0] [i_10])));
        }
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            var_27 = ((var_3 ? var_7 : (arr_11 [i_11] [i_11] [8] [i_0] [i_0])));
            var_28 = -127260860;
        }
    }
    /* vectorizable */
    for (int i_12 = 2; i_12 < 11;i_12 += 1)
    {
        var_29 = var_9;
        var_30 = (arr_30 [i_12] [i_12 - 2] [i_12 + 1]);

        for (int i_13 = 4; i_13 < 9;i_13 += 1) /* same iter space */
        {
            var_31 = (((arr_32 [i_12 - 2] [i_13 - 4]) ? (arr_13 [i_12 - 2] [i_12 - 1]) : var_0));
            var_32 &= (arr_8 [i_12 + 1] [i_12]);
            var_33 = (((arr_35 [i_12 - 2]) ? (((2147483639 ? -4 : -9))) : (arr_6 [i_12])));
            var_34 &= ((var_0 ? var_1 : (arr_36 [i_12 - 2])));
            var_35 = (((arr_5 [i_13 - 1] [i_12]) ? (arr_5 [i_13 - 1] [i_13]) : (arr_5 [i_13 - 2] [i_13])));
        }
        for (int i_14 = 4; i_14 < 9;i_14 += 1) /* same iter space */
        {
            var_36 = (arr_40 [i_12] [i_12 + 1]);
            var_37 ^= (((arr_14 [i_12 - 1] [i_12 - 1] [i_12 - 2]) ? (arr_14 [i_12 - 1] [i_12 - 2] [i_12 - 2]) : (arr_30 [4] [i_12 - 2] [i_12 - 1])));
            var_38 = (((arr_7 [i_12 - 1] [i_14 + 1]) ? (arr_7 [i_12 - 1] [i_14 + 1]) : (arr_7 [i_12 - 2] [i_14 - 2])));
        }
        for (int i_15 = 4; i_15 < 9;i_15 += 1) /* same iter space */
        {

            for (int i_16 = 0; i_16 < 12;i_16 += 1)
            {
                var_39 = (arr_2 [i_12 - 1]);
                /* LoopNest 2 */
                for (int i_17 = 4; i_17 < 10;i_17 += 1)
                {
                    for (int i_18 = 3; i_18 < 11;i_18 += 1)
                    {
                        {
                            var_40 = var_4;
                            var_41 = arr_16 [i_12 - 1] [i_15];
                            var_42 = (arr_49 [i_12 - 2] [i_12 + 1] [i_16]);
                        }
                    }
                }
                var_43 = var_4;
                var_44 = (((arr_20 [i_12 - 1] [1] [i_12 + 1] [i_15 - 2]) ? var_4 : (arr_20 [i_12 - 2] [i_12] [i_12 - 2] [i_15 + 1])));
                var_45 = (min(var_45, var_7));
            }
            var_46 = (min(var_46, ((((arr_21 [1]) ? (arr_21 [4]) : var_4)))));
        }
        for (int i_19 = 4; i_19 < 9;i_19 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 12;i_20 += 1)
            {
                for (int i_21 = 3; i_21 < 11;i_21 += 1)
                {
                    {
                        var_47 = (arr_19 [i_12 + 1] [i_19 - 2] [i_21 - 2]);
                        var_48 = (arr_62 [i_12 - 2]);
                        var_49 = ((arr_7 [i_12 - 1] [11]) ? (arr_28 [i_12] [i_19] [i_20] [i_12] [10]) : (arr_4 [i_12 + 1] [i_19 + 2] [i_20]));
                        var_50 = (arr_64 [i_12 - 2]);
                        var_51 = arr_54 [9] [i_12 - 1] [9] [9] [i_20] [i_21 + 1];
                    }
                }
            }
            var_52 *= (((arr_23 [i_12 - 1] [i_12 - 2] [8] [i_12] [i_12 - 2]) ? (arr_33 [i_12 + 1]) : (arr_33 [i_12 - 2])));
            var_53 = (arr_27 [i_12 + 1] [i_12 - 2] [i_12] [i_12 + 1] [i_12 + 1] [i_12]);

            for (int i_22 = 2; i_22 < 8;i_22 += 1)
            {
                var_54 = var_0;
                var_55 = (min(var_55, (arr_57 [i_12 - 1] [i_12 - 2] [i_12])));
            }
            for (int i_23 = 0; i_23 < 12;i_23 += 1)
            {
                var_56 = (arr_46 [i_12 - 1] [i_12 - 2] [i_19 - 2]);
                var_57 = var_3;
            }
        }
        var_58 = arr_29 [i_12] [i_12 + 1];
    }
    for (int i_24 = 1; i_24 < 9;i_24 += 1)
    {
        var_59 = (min((min(var_7, (arr_68 [0] [i_24 - 1] [i_24 - 1] [0]))), (min(var_8, (arr_68 [4] [4] [6] [i_24])))));
        var_60 = (max((arr_37 [i_24 + 1]), var_9));
    }
    /* vectorizable */
    for (int i_25 = 0; i_25 < 23;i_25 += 1)
    {
        var_61 &= (arr_76 [i_25]);
        var_62 |= var_5;
        var_63 += (arr_74 [10] [i_25]);

        for (int i_26 = 0; i_26 < 23;i_26 += 1)
        {

            for (int i_27 = 0; i_27 < 23;i_27 += 1)
            {
                var_64 = (~-20);
                var_65 ^= (arr_75 [i_25]);
                var_66 = (arr_74 [i_27] [i_26]);
            }
            for (int i_28 = 0; i_28 < 23;i_28 += 1)
            {
                var_67 = ((-(arr_79 [i_26])));
                var_68 = (max(var_68, (arr_76 [i_25])));
                var_69 = (arr_76 [i_25]);
            }
            for (int i_29 = 0; i_29 < 23;i_29 += 1)
            {
                var_70 = (arr_75 [i_26]);

                for (int i_30 = 0; i_30 < 23;i_30 += 1)
                {
                    var_71 = (arr_82 [i_25] [i_26] [i_30]);
                    var_72 = (((arr_75 [i_29]) ? var_5 : var_9));
                }
                for (int i_31 = 0; i_31 < 23;i_31 += 1)
                {
                    var_73 = (arr_85 [i_26] [i_26] [i_31]);
                    var_74 = var_9;
                }
                for (int i_32 = 0; i_32 < 23;i_32 += 1)
                {
                    var_75 = (max(var_75, (arr_85 [i_25] [i_29] [i_32])));
                    var_76 = (arr_90 [i_25] [i_26] [i_29] [i_26]);
                }
                for (int i_33 = 0; i_33 < 23;i_33 += 1)
                {
                    var_77 = (!19);
                    var_78 = (((arr_94 [i_25] [i_26] [i_33]) ? (arr_87 [i_25] [i_25] [i_25] [i_25]) : (arr_86 [i_25] [i_26] [i_25])));
                    var_79 |= (arr_86 [i_29] [i_29] [i_29]);
                }
            }
            var_80 = var_1;
            var_81 = (arr_91 [i_25] [i_26] [i_25] [i_26]);
        }
        var_82 = (arr_95 [i_25] [i_25] [i_25] [16] [1] [i_25]);
    }
    var_83 = (max((max((max(var_7, var_7)), (((var_6 ? var_0 : var_1))))), var_8));
    var_84 = var_5;
    #pragma endscop
}
