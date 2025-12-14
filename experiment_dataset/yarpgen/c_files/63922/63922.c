/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] = (arr_0 [i_0] [13]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = (arr_1 [i_2]);

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [i_3] [i_1] = (arr_8 [i_0] [i_0] [i_2] [i_3] [i_0]);
                        var_15 = (arr_6 [i_0] [i_1 + 1]);
                    }
                }
            }
        }
        arr_11 [i_0] = (arr_0 [i_0] [i_0]);
        arr_12 [i_0] [i_0] = (arr_4 [i_0] [i_0]);
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_16 = (arr_7 [i_4] [i_5] [i_5]);
            arr_17 [13] [i_5] [i_4] = (arr_0 [i_4] [i_5]);
        }
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            var_17 = (arr_16 [i_4] [i_4] [i_4]);
            var_18 = (arr_5 [i_6] [i_4] [i_4]);
        }
        arr_20 [i_4] = (arr_5 [i_4] [0] [i_4]);
    }

    /* vectorizable */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {

        for (int i_8 = 1; i_8 < 12;i_8 += 1)
        {
            var_19 = (arr_5 [10] [i_8] [i_8]);

            for (int i_9 = 3; i_9 < 12;i_9 += 1)
            {
                arr_29 [i_7] [i_8 + 1] [i_7] = (arr_24 [i_7] [i_7]);
                var_20 = (arr_0 [1] [i_8]);
                arr_30 [i_7] [i_7] [i_7] = (arr_0 [i_7] [i_7]);
            }
            arr_31 [i_7] [i_7] = (arr_27 [i_7] [i_7] [i_7]);
            arr_32 [i_7] [i_7] [i_7] = (arr_25 [i_7] [i_7]);
        }
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {

            for (int i_11 = 1; i_11 < 12;i_11 += 1)
            {
                var_21 = (arr_8 [i_7] [i_10] [i_11] [i_11] [i_11]);
                var_22 = (arr_25 [i_7] [i_7]);
            }
            var_23 = (arr_33 [i_10] [i_10]);
            var_24 = (arr_25 [i_7] [i_7]);
            arr_38 [i_7] [i_7] [i_7] = (arr_36 [i_7]);

            for (int i_12 = 1; i_12 < 12;i_12 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_13 = 3; i_13 < 10;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        {
                            var_25 ^= (arr_23 [i_7]);
                            var_26 |= (arr_5 [i_13] [i_10] [i_10]);
                            arr_47 [i_7] [i_10] [i_12 + 1] = (arr_44 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]);
                        }
                    }
                }
                arr_48 [i_7] [i_7] = arr_5 [i_7] [i_7] [i_7];
            }
            for (int i_15 = 1; i_15 < 12;i_15 += 1) /* same iter space */
            {

                for (int i_16 = 3; i_16 < 12;i_16 += 1)
                {
                    var_27 = (arr_45 [i_7] [i_7] [i_15] [i_16 - 2]);

                    for (int i_17 = 0; i_17 < 13;i_17 += 1)
                    {
                        var_28 = (arr_55 [i_7] [i_10] [i_7] [i_7] [i_17]);
                        arr_58 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = (arr_5 [i_7] [i_15] [i_17]);
                        var_29 = (arr_27 [i_15 + 1] [4] [4]);
                        arr_59 [i_7] [i_7] [i_7] [i_7] [i_7] = (arr_7 [17] [17] [i_15 - 1]);
                    }
                    for (int i_18 = 1; i_18 < 12;i_18 += 1)
                    {
                        var_30 = (arr_42 [i_7] [i_10] [i_15] [i_15 - 1] [10] [i_18]);
                        arr_62 [i_7] = (arr_50 [i_7] [i_7] [i_7] [i_7]);
                        arr_63 [i_7] [i_10] [i_15] [i_7] [i_16 - 3] [i_18] = (arr_55 [i_7] [i_10] [1] [i_7] [i_7]);
                        arr_64 [i_7] = (arr_27 [i_7] [i_7] [i_7]);
                    }
                    arr_65 [i_7] [i_7] [i_15] [i_16] = (arr_39 [i_7] [11] [i_7]);
                }
                for (int i_19 = 2; i_19 < 11;i_19 += 1)
                {

                    for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
                    {
                        var_31 = (arr_22 [i_20]);
                        arr_74 [i_7] [i_7] [i_7] [i_7] [i_7] [i_10] |= (arr_42 [i_19] [i_19] [i_19] [i_19 + 2] [i_20] [i_19 + 2]);
                        arr_75 [i_7] [i_10] [i_15 + 1] [3] = (arr_39 [i_7] [i_10] [1]);
                        arr_76 [i_20] [i_19] [i_7] [i_15] [i_7] [i_7] [i_7] = (arr_36 [i_7]);
                    }
                    for (int i_21 = 0; i_21 < 1;i_21 += 1) /* same iter space */
                    {
                        arr_80 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = (arr_6 [i_15 - 1] [i_21]);
                        arr_81 [i_7] = (arr_28 [i_7] [i_15] [i_19 + 2] [i_21]);
                    }
                    for (int i_22 = 0; i_22 < 1;i_22 += 1) /* same iter space */
                    {
                        var_32 = (max(var_32, (arr_16 [i_7] [i_7] [i_7])));
                        arr_85 [i_7] [i_15] [i_15] [i_19 + 2] [i_22] [i_7] = (arr_73 [2] [i_10] [i_15 - 1] [i_22] [6]);
                        arr_86 [i_22] [i_7] [i_7] [i_10] [i_7] [i_7] = (arr_5 [i_15] [i_19] [i_22]);
                    }
                    for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
                    {
                        var_33 = (arr_19 [i_19]);
                        var_34 = (arr_6 [i_15] [i_10]);
                    }
                    arr_89 [i_7] [i_7] [i_7] [i_19] = (arr_35 [i_7] [i_7] [i_15 + 1] [i_15 - 1]);
                    var_35 |= (arr_7 [i_19] [i_15] [i_10]);
                    var_36 = (arr_84 [i_15] [i_7] [i_15 + 1] [i_15 + 1] [i_7] [i_10]);

                    for (int i_24 = 0; i_24 < 13;i_24 += 1)
                    {
                        var_37 += arr_53 [i_24] [i_19] [i_15] [5] [i_7];
                        var_38 = (arr_91 [i_7] [i_7] [i_7] [i_19 + 2]);
                    }
                }
                var_39 += (arr_16 [i_7] [i_7] [i_15]);
                var_40 = (arr_71 [i_7] [i_10] [i_7] [i_15]);
            }
            for (int i_25 = 1; i_25 < 12;i_25 += 1) /* same iter space */
            {
                arr_96 [i_7] = (arr_22 [i_25]);
                var_41 = (arr_15 [i_7]);
                arr_97 [0] [i_10] [i_7] = (arr_46 [i_10] [i_10] [i_10] [i_10] [i_10]);
            }
        }
        for (int i_26 = 1; i_26 < 12;i_26 += 1)
        {
            /* LoopNest 3 */
            for (int i_27 = 0; i_27 < 13;i_27 += 1)
            {
                for (int i_28 = 1; i_28 < 11;i_28 += 1)
                {
                    for (int i_29 = 1; i_29 < 9;i_29 += 1)
                    {
                        {
                            arr_110 [i_7] [i_26] = (arr_84 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]);
                            var_42 ^= (arr_109 [i_7] [i_26] [i_27] [i_27] [i_28 + 1] [i_29] [i_29]);
                            arr_111 [i_7] [i_26] [i_27] [i_28 + 2] [i_29 + 2] = (arr_13 [i_26] [i_26]);
                            arr_112 [i_27] [i_28] [i_7] [i_27] [i_7] [i_7] [4] = (arr_103 [i_26] [i_26] [i_29]);
                        }
                    }
                }
            }
            arr_113 [i_7] [i_26] = (arr_13 [i_26] [i_7]);
            arr_114 [i_7] [i_26] = (arr_37 [i_7] [0] [0]);
            arr_115 [4] [i_7] = (arr_87 [i_26 - 1] [i_7]);
            var_43 = (arr_93 [i_7] [i_7] [i_7]);
        }
        var_44 = (arr_82 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]);
    }
    #pragma endscop
}
