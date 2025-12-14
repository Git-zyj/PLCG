/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_12 = (arr_1 [i_0 + 1]);
        arr_2 [14] |= (arr_0 [i_0] [i_0 + 2]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] = var_0;

        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            arr_11 [i_1] [i_2 - 1] [i_2] |= var_1;
            var_13 = (arr_3 [i_2 - 1]);

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                arr_16 [i_1] [i_3] [6] = var_3;
                var_14 = var_7;
            }
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        {
                            arr_26 [i_1] [17] [i_4] [17] [i_4] [i_6] = arr_8 [i_2 - 1];
                            arr_27 [i_6] [i_4] [i_1] = var_7;
                            arr_28 [0] [i_5] [i_5] [i_5] [i_2 + 1] [i_6] [3] = arr_12 [i_1] [i_4] [16];
                        }
                    }
                }

                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {
                    arr_31 [i_1] [i_2] [i_7] [i_4] = arr_20 [i_1] [i_2 + 1] [i_7 - 1] [i_7];
                    var_15 -= var_6;
                }
                for (int i_8 = 2; i_8 < 16;i_8 += 1)
                {

                    for (int i_9 = 1; i_9 < 17;i_9 += 1)
                    {
                        var_16 = (min(var_16, var_8));
                        arr_37 [i_9] [i_8] [i_4] [i_2] [i_9] = (arr_32 [i_1] [i_9 + 1] [i_4] [i_8 + 2]);
                        var_17 = (arr_14 [i_8 + 1]);
                        var_18 = (arr_5 [i_8 - 1]);
                        var_19 = (arr_4 [i_4] [i_2]);
                    }
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_20 = var_2;
                        arr_40 [i_1] [i_1] [14] [i_1] [i_10] |= arr_1 [i_2 - 1];
                    }

                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        var_21 = arr_15 [i_8 + 2] [i_2 - 1] [i_4] [8];
                        var_22 = (arr_36 [11] [i_4] [12] [i_4] [i_8 - 1] [i_8 - 1] [i_11]);
                        var_23 = (min(var_23, (arr_33 [i_2 - 2] [i_2 - 2] [i_8 - 1] [i_8 - 2])));
                        arr_44 [i_11] [i_2 + 1] [i_11] [i_8] [i_11] [i_1] = var_2;
                    }
                    var_24 = (max(var_24, var_6));
                    arr_45 [i_4] = var_1;
                    var_25 = var_1;
                }
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        arr_50 [i_1] [i_1] [i_4] [i_12] [3] = (arr_13 [i_1] [i_2 - 1] [i_12] [i_12]);
                        var_26 = (arr_33 [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2 - 2]);
                        var_27 *= (arr_19 [i_2] [i_2 - 2]);
                    }
                    for (int i_14 = 1; i_14 < 15;i_14 += 1)
                    {
                        var_28 = var_1;
                        arr_54 [i_12] [i_2 + 1] [i_14] [i_4] [i_14 + 3] [i_12] [i_14] = (arr_52 [i_14] [17] [i_14] [i_14] [i_14 + 2]);
                        var_29 ^= (arr_10 [i_2] [i_2 + 1] [i_14 - 1]);
                    }
                    var_30 = var_3;
                    var_31 &= var_5;
                }
                arr_55 [1] [9] &= (arr_8 [i_1]);
                arr_56 [i_1] [8] [i_1] = (arr_13 [i_1] [i_2 - 2] [i_2 - 1] [i_2 - 2]);
            }
        }
        for (int i_15 = 0; i_15 < 18;i_15 += 1)
        {
            var_32 = (arr_19 [i_15] [i_1]);
            var_33 = var_4;
            arr_59 [i_1] [13] = (arr_48 [i_1]);
        }
        for (int i_16 = 0; i_16 < 18;i_16 += 1)
        {

            for (int i_17 = 2; i_17 < 14;i_17 += 1)
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 18;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 18;i_19 += 1)
                    {
                        {
                            var_34 = (arr_4 [i_17 + 3] [i_1]);
                            var_35 = var_0;
                        }
                    }
                }
                var_36 = (arr_35 [i_1] [i_17] [i_17]);
                var_37 = var_3;
                var_38 = (arr_67 [i_1] [9] [i_17] [3] [i_16] [i_1]);
                var_39 = var_2;
            }
            for (int i_20 = 0; i_20 < 18;i_20 += 1)
            {
                arr_74 [i_1] [i_1] [15] [i_16] = arr_17 [i_1] [i_1] [i_16] [i_20];

                for (int i_21 = 0; i_21 < 18;i_21 += 1)
                {
                    var_40 = (arr_19 [i_16] [17]);
                    var_41 = (max(var_41, (arr_57 [i_1])));
                }
            }
            for (int i_22 = 1; i_22 < 17;i_22 += 1)
            {
                var_42 = (arr_73 [i_1] [i_16] [i_22 - 1]);
                var_43 = (arr_53 [i_22 - 1] [i_22 - 1]);
            }
            for (int i_23 = 0; i_23 < 18;i_23 += 1)
            {
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 18;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 18;i_25 += 1)
                    {
                        {
                            var_44 = (min(var_44, var_0));
                            arr_86 [i_1] [i_23] [i_1] |= (arr_35 [i_1] [2] [i_1]);
                            var_45 &= var_4;
                            var_46 = var_2;
                        }
                    }
                }
                var_47 = arr_67 [i_1] [i_1] [i_16] [i_16] [i_23] [i_23];
                var_48 |= (arr_82 [11] [0] [i_16] [i_1]);
                var_49 &= (arr_21 [i_1] [i_23] [1] [i_23] [10] [10]);
            }
            arr_87 [i_16] [i_16] [i_1] = (arr_51 [16] [i_1] [i_1] [i_16] [i_16] [15] [i_16]);
        }
        for (int i_26 = 0; i_26 < 18;i_26 += 1)
        {
            /* LoopNest 2 */
            for (int i_27 = 3; i_27 < 16;i_27 += 1)
            {
                for (int i_28 = 0; i_28 < 18;i_28 += 1)
                {
                    {
                        var_50 = (arr_65 [i_1] [i_26] [i_26] [i_27] [i_28] [i_28]);
                        arr_94 [17] [i_26] [i_27] [i_27] [0] = var_0;
                        var_51 = (arr_41 [i_27 - 2] [17] [i_27 - 1] [17] [i_26] [i_1]);
                        arr_95 [i_1] [6] [8] = (arr_78 [i_28] [13] [i_27 - 2] [i_26]);
                        var_52 = var_10;
                    }
                }
            }

            for (int i_29 = 0; i_29 < 18;i_29 += 1)
            {

                for (int i_30 = 0; i_30 < 18;i_30 += 1)
                {
                    arr_102 [i_30] [i_29] [5] [5] [i_1] = (arr_17 [i_1] [i_1] [i_29] [i_30]);
                    var_53 = (arr_73 [i_26] [i_29] [i_30]);
                    arr_103 [i_1] [i_1] [2] [i_30] |= var_4;
                }
                for (int i_31 = 0; i_31 < 18;i_31 += 1)
                {
                    arr_106 [i_1] [i_1] = var_7;
                    var_54 = (arr_78 [i_31] [i_29] [i_26] [i_1]);
                    var_55 = arr_38 [i_1] [i_26] [i_26] [i_29] [i_31];
                }
                /* LoopNest 2 */
                for (int i_32 = 2; i_32 < 16;i_32 += 1)
                {
                    for (int i_33 = 0; i_33 < 18;i_33 += 1)
                    {
                        {
                            arr_112 [i_29] [i_32] = (arr_13 [i_29] [7] [i_29] [i_32]);
                            var_56 = var_1;
                        }
                    }
                }

                for (int i_34 = 0; i_34 < 18;i_34 += 1)
                {
                    arr_116 [i_34] [14] [i_1] [i_1] = var_5;
                    var_57 = (arr_10 [16] [1] [i_1]);
                    var_58 = (arr_64 [i_1] [i_34]);
                }
                for (int i_35 = 3; i_35 < 15;i_35 += 1)
                {
                    arr_119 [i_29] [i_29] [i_29] &= (arr_60 [i_35 + 1] [i_35 - 3]);
                    var_59 += (arr_73 [i_35 - 3] [i_1] [i_35 + 1]);
                    var_60 = var_1;
                    arr_120 [i_35] [i_26] [i_29] [i_35] = (arr_36 [i_29] [i_35 - 1] [i_35] [i_35 + 3] [i_35] [i_35] [i_35]);
                }
                for (int i_36 = 0; i_36 < 18;i_36 += 1)
                {
                    var_61 += (arr_98 [i_1] [i_26] [i_29]);

                    for (int i_37 = 0; i_37 < 18;i_37 += 1)
                    {
                        var_62 = (arr_79 [i_1] [i_29] [i_36] [i_37]);
                        arr_129 [i_1] = (arr_42 [i_1] [i_26] [i_29] [i_29] [i_29]);
                        var_63 = arr_67 [i_37] [i_36] [i_29] [i_26] [9] [i_1];
                        var_64 |= (arr_48 [i_36]);
                        var_65 = (arr_115 [i_37] [i_29] [i_26] [i_1]);
                    }
                }
                for (int i_38 = 0; i_38 < 18;i_38 += 1)
                {

                    for (int i_39 = 2; i_39 < 16;i_39 += 1)
                    {
                        var_66 += var_4;
                        arr_136 [i_1] [i_26] [15] [17] [8] |= (arr_71 [i_1] [i_39 + 1] [i_29] [2] [i_39 + 1] [i_26] [i_39 + 1]);
                        arr_137 [8] [i_26] [i_29] [6] [i_39] = (arr_34 [11] [i_26] [11] [i_38] [i_39 + 1]);
                    }
                    var_67 = (arr_101 [i_26] [i_1]);
                    arr_138 [i_1] |= (arr_72 [i_38]);
                }
                /* LoopNest 2 */
                for (int i_40 = 1; i_40 < 17;i_40 += 1)
                {
                    for (int i_41 = 0; i_41 < 18;i_41 += 1)
                    {
                        {
                            var_68 ^= (arr_70 [i_1] [i_26] [i_29] [i_26] [17]);
                            var_69 = var_6;
                            var_70 = (arr_14 [i_40 + 1]);
                            var_71 = (arr_46 [i_1] [i_29]);
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_42 = 0; i_42 < 18;i_42 += 1)
            {
                for (int i_43 = 2; i_43 < 15;i_43 += 1)
                {
                    for (int i_44 = 3; i_44 < 17;i_44 += 1)
                    {
                        {
                            var_72 = (arr_46 [i_43 + 3] [i_44 - 1]);
                            arr_150 [i_44] [i_43] [i_26] [i_26] [i_26] [i_1] [8] = (arr_111 [i_1] [i_43] [i_43 - 2] [i_43] [i_43] [i_43 + 2] [i_44 - 2]);
                            arr_151 [i_1] [i_1] = var_4;
                        }
                    }
                }
            }
        }
        arr_152 [i_1] [i_1] = (arr_144 [i_1] [i_1]);
        var_73 *= (arr_9 [i_1]);
    }
    var_74 = var_8;
    #pragma endscop
}
