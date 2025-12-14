/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_18 = (arr_3 [i_2]);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_19 = (arr_7 [i_2]);
                            var_20 = (arr_6 [i_0]);
                            arr_13 [i_3] [i_1] [i_1] [i_2] [i_3] [i_3] [i_4] = (arr_5 [16] [i_1] [13]);
                            var_21 -= (arr_7 [10]);
                        }
                    }
                }
                arr_14 [i_0] [i_1] [i_2] = 162;
                arr_15 [i_0] = arr_3 [i_1];
            }
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                var_22 = -110;

                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    arr_21 [5] [i_1] [i_1] [i_6] [i_0] = 1;
                    var_23 = (arr_2 [i_6]);

                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {
                        arr_24 [i_0] [i_1] [i_5] [i_6] [1] = (arr_1 [i_0]);
                        arr_25 [20] [19] [i_5] [i_6] [i_0] [i_5] [i_5] = (arr_18 [i_6] [10] [i_1] [i_0]);
                    }
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        var_24 -= (arr_19 [i_0] [i_1] [i_1] [i_1] [i_6] [i_8]);
                        var_25 -= (arr_26 [i_0]);
                        arr_28 [13] [i_1] [i_1] [13] [i_6] [6] [i_8] = (arr_27 [i_6] [i_5] [i_0]);
                    }
                    arr_29 [i_6] [i_6] [i_6] [i_6] = 112;
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    arr_32 [i_1] = -122;
                    arr_33 [i_0] [i_0] [8] [16] = 0;
                }
                arr_34 [i_0] = 3573759935781891087;
            }

            for (int i_10 = 1; i_10 < 20;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_26 += 1;
                    var_27 &= (arr_17 [i_11]);
                    arr_40 [i_0] [i_1] [i_10] [i_11] = -110;
                    arr_41 [i_10] [i_11] [i_10] [0] [i_10] [i_10] = (arr_4 [i_0] [i_0] [i_0]);
                    var_28 = (arr_17 [i_11]);
                }
                arr_42 [i_0] [i_1] [i_10] = (arr_19 [19] [1] [i_10] [i_0] [18] [i_10]);
            }
            for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
            {
                var_29 = (arr_26 [i_0]);
                arr_45 [9] [i_1] [i_1] [i_0] = 1;
            }
            for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
            {

                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    var_30 = (max(var_30, (arr_1 [i_14])));
                    arr_51 [i_14] = (arr_19 [i_0] [i_1] [i_1] [i_1] [i_14] [i_14]);
                    var_31 = (max(var_31, (arr_30 [i_0] [i_0] [i_13] [i_13])));
                }
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {

                    for (int i_16 = 0; i_16 < 21;i_16 += 1)
                    {
                        arr_57 [17] [17] [i_1] [8] [i_15] [1] [8] = arr_50 [i_0];
                        var_32 = (arr_6 [i_0]);
                        var_33 = 3634298007;
                    }
                    var_34 = arr_53 [i_0] [i_0] [i_0] [i_0];
                    var_35 = (min(var_35, (arr_7 [i_1])));
                }
                /* vectorizable */
                for (int i_17 = 0; i_17 < 21;i_17 += 1)
                {
                    arr_62 [6] [0] [i_13] [i_17] = -121;

                    for (int i_18 = 1; i_18 < 19;i_18 += 1)
                    {
                        arr_66 [i_18] [i_1] [i_13] [3] = (arr_4 [i_1] [i_1] [i_1]);
                        var_36 = (arr_49 [i_0] [i_18] [i_18]);
                        var_37 = (arr_23 [i_18] [i_17] [7] [8] [i_0]);
                        arr_67 [2] [i_18] [i_18] [13] [i_18 + 1] [i_18] [i_18] = (arr_6 [i_13]);
                    }
                    for (int i_19 = 4; i_19 < 18;i_19 += 1) /* same iter space */
                    {
                        arr_70 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_22 [10] [i_19 - 2]);
                        arr_71 [i_19] [i_19] [i_19 - 1] [i_19 - 1] [i_19 - 3] [i_19] [i_19 + 2] = (arr_18 [i_0] [0] [2] [i_0]);
                        var_38 += arr_63 [i_0] [12] [i_1] [11] [12] [i_17] [i_19];
                    }
                    for (int i_20 = 4; i_20 < 18;i_20 += 1) /* same iter space */
                    {
                        arr_75 [i_0] [i_1] [i_13] [i_17] [i_20] = (arr_12 [i_20] [1]);
                        arr_76 [i_20] [i_17] [17] [i_0] = (arr_11 [0] [i_17] [12] [i_17] [8]);
                        var_39 = 128;
                    }
                }
                for (int i_21 = 2; i_21 < 20;i_21 += 1)
                {
                    arr_79 [i_0] [i_1] [i_1] = (arr_8 [i_0]);
                    arr_80 [i_0] [i_0] [i_13] [i_21 - 1] = (arr_44 [i_0] [i_13] [i_1] [i_0]);
                }
                arr_81 [9] [i_1] [1] = 12288;
                arr_82 [i_0] [i_1] [i_13] = 94;
                arr_83 [i_0] = 1;
            }
            for (int i_22 = 0; i_22 < 1;i_22 += 1) /* same iter space */
            {
                arr_87 [i_0] [i_0] [i_0] = 9249533190080669828;
                var_40 = (arr_4 [i_0] [1] [i_0]);

                for (int i_23 = 0; i_23 < 21;i_23 += 1)
                {

                    for (int i_24 = 0; i_24 < 21;i_24 += 1)
                    {
                        var_41 = -11;
                        var_42 = (arr_50 [i_22]);
                        var_43 = (arr_43 [2] [i_22] [i_23]);
                    }
                    for (int i_25 = 1; i_25 < 20;i_25 += 1)
                    {
                        var_44 = (arr_89 [i_0] [i_1] [i_23] [i_25]);
                        var_45 += arr_4 [i_1] [i_1] [i_1];
                    }
                    arr_96 [i_0] [i_0] [i_22] [i_23] = (arr_6 [i_1]);
                }
            }
        }
        for (int i_26 = 0; i_26 < 21;i_26 += 1)
        {
            var_46 = (min(var_46, (arr_20 [i_0] [i_0] [i_0])));
            arr_100 [i_0] [i_26] = arr_63 [i_0] [i_0] [i_0] [i_0] [5] [i_26] [i_0];
            /* LoopNest 2 */
            for (int i_27 = 1; i_27 < 19;i_27 += 1)
            {
                for (int i_28 = 1; i_28 < 20;i_28 += 1)
                {
                    {
                        var_47 += (arr_47 [i_0] [i_26] [3] [i_28 + 1]);
                        var_48 = 1;
                    }
                }
            }
        }
        arr_108 [i_0] = (arr_77 [i_0] [i_0] [i_0] [i_0]);

        for (int i_29 = 1; i_29 < 19;i_29 += 1)
        {
            var_49 = (arr_112 [i_0] [20] [20]);
            arr_113 [i_29 + 1] = arr_78 [i_0] [i_0] [i_0] [i_0] [5] [i_0];
        }
        /* vectorizable */
        for (int i_30 = 0; i_30 < 21;i_30 += 1)
        {

            for (int i_31 = 0; i_31 < 21;i_31 += 1)
            {
                var_50 = (arr_95 [i_0] [i_0] [i_30] [i_30] [i_0] [i_31]);
                /* LoopNest 2 */
                for (int i_32 = 0; i_32 < 1;i_32 += 1)
                {
                    for (int i_33 = 1; i_33 < 19;i_33 += 1)
                    {
                        {
                            var_51 = (min(var_51, -8503886173490832575));
                            var_52 -= (arr_46 [i_31] [i_31]);
                        }
                    }
                }

                for (int i_34 = 3; i_34 < 20;i_34 += 1)
                {
                    arr_126 [i_34] [i_31] [i_0] [i_30] [i_0] [1] = 38;
                    arr_127 [i_0] [10] [i_31] [i_34] [20] = (arr_6 [i_0]);
                    arr_128 [i_0] [i_0] [i_31] [i_31] = (arr_115 [i_30] [i_31]);
                    arr_129 [i_30] [i_31] [i_31] = 94;
                }
                var_53 = (max(var_53, (arr_123 [i_30] [i_30] [i_30] [i_30] [i_31] [i_31] [i_31])));
                var_54 = arr_1 [i_30];
            }
            var_55 = 4294967295;
            arr_130 [i_0] [10] [i_0] = (arr_5 [i_0] [i_0] [i_0]);
        }
        for (int i_35 = 1; i_35 < 20;i_35 += 1)
        {
            var_56 = 12;
            /* LoopNest 2 */
            for (int i_36 = 1; i_36 < 20;i_36 += 1)
            {
                for (int i_37 = 0; i_37 < 1;i_37 += 1)
                {
                    {
                        arr_139 [i_0] [i_35] [i_0] [3] [i_0] = (arr_118 [i_0] [i_35 - 1] [i_35 - 1]);
                        var_57 = (arr_64 [i_36] [i_36] [i_36] [18] [i_36] [1] [18]);
                        var_58 = (min(var_58, (arr_120 [i_0] [1] [i_0] [i_0])));
                        arr_140 [i_0] [i_0] = -110;
                        var_59 = (arr_110 [i_0] [i_35 - 1] [i_35 - 1]);
                    }
                }
            }
        }
    }
    var_60 = var_4;
    #pragma endscop
}
