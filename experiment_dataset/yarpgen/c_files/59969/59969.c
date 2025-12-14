/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_12 = (min(var_12, (arr_3 [i_0])));
                            var_13 = max((arr_0 [i_0]), -44);
                            var_14 = (max(var_14, (arr_7 [i_0 - 2] [i_2 + 2])));
                        }
                    }
                }
                var_15 = (arr_1 [i_0] [i_0]);
            }
        }
    }

    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_13 [i_4] = (arr_11 [i_4]);

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_16 = (max((arr_14 [i_4] [i_4]), (arr_15 [i_4])));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {
                        arr_23 [i_4] [i_5] [i_6] [i_6] = (arr_20 [i_6] [i_5]);
                        arr_24 [i_5] [i_6] = (min((arr_11 [i_4]), (arr_11 [i_5])));
                        arr_25 [i_4] [i_5] [i_6] [i_4] = (min((min((arr_19 [i_6] [i_6] [i_7]), (arr_19 [i_6] [i_6] [i_6]))), (arr_19 [i_6] [i_5] [i_6])));
                        arr_26 [i_4] [i_4] [i_6] [i_4] [i_6] [6] = (arr_22 [24] [i_6] [i_5] [1]);
                    }
                }
            }

            /* vectorizable */
            for (int i_8 = 3; i_8 < 24;i_8 += 1)
            {
                arr_29 [i_5] [i_5] [14] [i_5] &= (arr_11 [i_4]);
                arr_30 [i_8] [19] [i_8] = (arr_17 [i_4] [i_5] [10] [i_4]);
            }
            /* vectorizable */
            for (int i_9 = 1; i_9 < 21;i_9 += 1)
            {
                var_17 = (arr_12 [i_4]);
                arr_35 [i_4] [19] [i_4] = (arr_27 [16] [i_9] [i_9 + 2]);
                arr_36 [i_4] [i_4] [i_9 + 3] [i_4] |= (arr_12 [i_4]);
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {

                for (int i_11 = 1; i_11 < 21;i_11 += 1) /* same iter space */
                {
                    arr_41 [i_4] [i_5] [i_10] [i_5] [i_10] [7] = (min((arr_32 [i_11 + 3] [i_11 + 3] [4] [4]), (max((max((arr_39 [i_11] [i_5] [i_5] [i_4]), (arr_39 [i_4] [i_5] [i_10] [i_11 + 2]))), (arr_40 [9] [9] [i_10] [i_11 + 3] [17])))));
                    var_18 = (min((arr_37 [20] [i_11 + 2] [20] [i_4]), (min((arr_14 [i_4] [i_4]), (arr_32 [i_10] [i_11 - 1] [i_11] [10])))));
                    arr_42 [i_4] [i_4] [i_10] = (arr_33 [i_11]);
                    arr_43 [i_10] [i_10] = (arr_12 [i_4]);
                }
                for (int i_12 = 1; i_12 < 21;i_12 += 1) /* same iter space */
                {

                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        var_19 = (max((arr_15 [i_12 + 1]), (max((arr_15 [i_12 + 2]), (arr_15 [i_12 + 3])))));
                        arr_48 [i_4] [i_12] [i_10] [i_12] [i_13] [i_5] [i_10] &= (arr_32 [i_5] [i_10] [i_12] [i_13]);
                        arr_49 [i_4] [i_10] [i_10] [i_4] [i_13] [i_12] [i_5] = (arr_18 [i_10] [i_12] [i_10] [i_10]);
                    }
                    for (int i_14 = 1; i_14 < 23;i_14 += 1)
                    {
                        var_20 = (arr_52 [16] [i_5] [i_14] [i_14] [i_14 - 1]);
                        arr_53 [i_4] [i_4] [16] [i_10] [16] [5] = (arr_10 [i_4]);
                    }
                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        var_21 = (max(92340396, 65535));
                        arr_56 [i_4] [i_5] [i_5] [i_10] [i_10] [i_15] = (arr_11 [i_4]);
                    }
                    var_22 = (min(var_22, (arr_38 [i_5])));
                    var_23 = (arr_39 [i_12] [i_10] [i_5] [1]);
                    var_24 = (min(var_24, (max(-7, -24438))));
                }
                arr_57 [i_10] [i_10] [i_10] = (arr_34 [i_4] [i_5] [i_10]);
                var_25 = (min(var_25, ((min(1, 32756)))));
            }
            arr_58 [18] = (arr_27 [i_4] [i_4] [i_4]);
        }
        for (int i_16 = 2; i_16 < 23;i_16 += 1)
        {
            arr_61 [6] = arr_46 [10] [10] [i_16] [10] [i_16 - 2];
            arr_62 [i_4] |= (max((arr_22 [i_4] [i_16 - 2] [i_16 + 2] [i_16 + 2]), (max((arr_22 [i_4] [i_16 - 2] [i_16 + 2] [i_16 - 1]), (arr_54 [i_4] [6] [i_16 + 1] [i_16 - 2] [i_16 + 1])))));
        }
        arr_63 [i_4] [i_4] = (min((arr_14 [i_4] [i_4]), (arr_45 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])));

        for (int i_17 = 4; i_17 < 24;i_17 += 1)
        {
            arr_66 [i_4] [i_4] [i_4] &= (arr_31 [i_17] [i_17] [i_17] [i_4]);

            /* vectorizable */
            for (int i_18 = 1; i_18 < 24;i_18 += 1)
            {

                for (int i_19 = 1; i_19 < 21;i_19 += 1)
                {
                    arr_71 [i_19 + 1] [i_4] = (arr_31 [10] [i_18 + 1] [i_17] [i_4]);
                    arr_72 [8] [i_18 + 1] [i_4] [i_4] = (arr_45 [i_17 - 2] [i_17 - 2] [i_17 + 1] [i_17 - 3] [i_17 - 1] [i_17]);
                }
                for (int i_20 = 0; i_20 < 25;i_20 += 1)
                {

                    for (int i_21 = 1; i_21 < 1;i_21 += 1)
                    {
                        arr_79 [i_4] [i_4] [i_17] [i_18] [i_20] [i_20] [i_21] = (arr_78 [i_4] [i_17]);
                        var_26 = (min(var_26, (arr_12 [i_4])));
                        arr_80 [1] [i_4] [i_18] [i_17 - 3] [i_4] = (arr_17 [i_18 + 1] [i_17] [i_21 - 1] [11]);
                        arr_81 [10] = (arr_52 [i_21] [i_20] [i_4] [i_17] [i_4]);
                    }
                    for (int i_22 = 2; i_22 < 21;i_22 += 1)
                    {
                        arr_85 [i_4] [i_20] [i_18] [i_20] [9] [i_4] = (arr_14 [i_18 + 1] [i_18 + 1]);
                        var_27 = (arr_77 [i_4] [i_4] [i_18 - 1] [i_17 + 1] [i_22 - 2]);
                        arr_86 [i_17 - 4] = (arr_78 [i_22] [i_18]);
                    }
                    arr_87 [i_4] [i_17] [i_17] [i_20] = arr_60 [17] [i_4] [i_18 - 1];
                    arr_88 [i_4] [i_4] [i_4] [i_4] = (arr_11 [i_18 - 1]);
                }
                var_28 = (arr_68 [i_4]);
            }
            for (int i_23 = 0; i_23 < 25;i_23 += 1)
            {
                var_29 |= (max((arr_60 [i_17 - 1] [i_17 - 2] [i_17 - 4]), (arr_50 [i_4] [i_4] [i_4] [i_17] [i_17] [i_17] [i_4])));
                var_30 = (arr_16 [i_4] [22] [18]);
                arr_91 [i_23] [i_23] [i_23] [i_4] = min((arr_52 [20] [i_17 - 3] [i_17 - 2] [20] [i_17 - 2]), (arr_14 [i_17 - 4] [i_17 - 3]));
            }
            for (int i_24 = 1; i_24 < 23;i_24 += 1)
            {
                arr_95 [i_24] [i_17] [i_24] = arr_19 [i_24] [i_17 - 2] [i_24];
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 25;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 25;i_26 += 1)
                    {
                        {
                            var_31 = (arr_92 [i_4] [i_4] [i_24]);
                            arr_101 [i_24] = (arr_52 [7] [16] [i_17] [i_17] [i_4]);
                            arr_102 [i_4] [i_17] [i_24 + 2] [i_24] [i_26] = (max((arr_34 [i_4] [i_24 - 1] [i_24]), ((max(-7, 1)))));
                            arr_103 [20] [i_24] = (arr_39 [i_4] [i_17 + 1] [i_24] [i_25]);
                            arr_104 [i_24] [i_4] [i_17] [i_24 + 1] [i_25] [i_26] = (arr_20 [i_24] [i_24]);
                        }
                    }
                }
                arr_105 [i_4] [i_4] [18] [i_4] &= (arr_59 [11] [i_24 + 1] [i_17 + 1]);
            }
            var_32 = (max(var_32, (arr_20 [16] [16])));
        }

        for (int i_27 = 0; i_27 < 25;i_27 += 1)
        {
            var_33 = (arr_59 [i_4] [i_4] [i_4]);
            arr_108 [i_4] [i_27] = (arr_92 [i_4] [i_4] [4]);
        }
    }
    var_34 |= var_2;
    #pragma endscop
}
