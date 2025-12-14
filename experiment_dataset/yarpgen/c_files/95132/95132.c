/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_12 = (arr_0 [i_0] [1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_13 = (arr_7 [i_3] [i_2] [0] [0]);
                            arr_11 [i_0] [i_1] [22] [i_2] [22] [i_3] = (arr_10 [i_0] [2] [2] [i_2] [22] [18]);
                        }
                    }
                }
                arr_12 [i_0] = (arr_0 [1] [13]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    var_14 = (arr_1 [2]);
                    arr_23 [i_4] [i_4] [i_6] = (arr_18 [i_5]);
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {

        for (int i_8 = 1; i_8 < 22;i_8 += 1) /* same iter space */
        {

            for (int i_9 = 3; i_9 < 21;i_9 += 1) /* same iter space */
            {

                for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                {
                    var_15 = (arr_25 [i_10]);
                    var_16 *= (arr_28 [i_7] [0]);
                    var_17 ^= arr_30 [i_8] [i_9] [19];
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                {
                    var_18 = (arr_35 [i_7] [i_8] [i_9 + 1]);
                    arr_38 [i_7] [i_7] [i_9] [i_9] = arr_36 [i_7] [i_8 + 2] [i_8 + 2] [i_9] [i_7];
                    var_19 = arr_34 [i_7] [10] [6];
                }
                var_20 = (arr_24 [i_9]);
            }
            for (int i_12 = 3; i_12 < 21;i_12 += 1) /* same iter space */
            {
                var_21 ^= arr_29 [i_7] [i_7] [1] [i_12];
                var_22 = arr_36 [7] [i_8] [i_7] [10] [i_7];
            }
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        {
                            var_23 = (arr_29 [i_7] [i_8] [i_7] [i_14]);
                            arr_49 [i_7] [i_7] [i_8] [i_13] [3] [i_7] [9] = arr_30 [i_8 - 1] [i_8 - 1] [i_8 - 1];
                        }
                    }
                }
            }
            var_24 = (arr_37 [i_7] [i_7] [i_7] [i_8] [i_7]);
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 25;i_17 += 1)
                {
                    {

                        for (int i_18 = 0; i_18 < 25;i_18 += 1)
                        {
                            var_25 = (arr_37 [i_7] [1] [1] [1] [i_7]);
                            var_26 = (arr_51 [i_7] [0] [i_7]);
                            var_27 = arr_44 [i_8] [i_8] [i_8];
                            var_28 = (arr_58 [i_7] [i_7] [i_7] [i_16] [i_7] [i_7]);
                        }
                        var_29 = (arr_55 [i_8 + 3] [5]);
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_19 = 2; i_19 < 23;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 25;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        {
                            var_30 = arr_29 [7] [i_8] [i_20] [i_8];
                            var_31 = (arr_36 [i_7] [i_8] [i_19] [8] [i_21]);
                            var_32 &= (arr_50 [i_7] [9] [i_7]);
                        }
                    }
                }
            }
        }
        for (int i_22 = 1; i_22 < 22;i_22 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_23 = 0; i_23 < 25;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 1;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 25;i_25 += 1)
                    {
                        {
                            var_33 += (arr_70 [i_22]);
                            var_34 = (max(var_34, (arr_37 [i_7] [i_22] [i_23] [i_23] [i_25])));
                        }
                    }
                }
            }

            for (int i_26 = 0; i_26 < 25;i_26 += 1)
            {
                var_35 = (arr_35 [i_22] [i_22] [i_7]);
                /* LoopNest 2 */
                for (int i_27 = 2; i_27 < 23;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 25;i_28 += 1)
                    {
                        {
                            var_36 = (arr_75 [i_7] [i_22] [i_7] [i_28]);
                            var_37 = (arr_66 [i_7] [i_7] [i_22 + 2] [2] [i_7] [16]);
                            arr_84 [i_7] [12] [i_7] [i_7] [1] [i_27 - 2] [i_28] = (arr_79 [12] [12] [0] [10]);
                        }
                    }
                }
                var_38 = (arr_79 [i_26] [i_22] [1] [i_7]);
                var_39 = (arr_47 [i_7] [i_7] [3] [3] [i_22] [3]);
                /* LoopNest 2 */
                for (int i_29 = 1; i_29 < 24;i_29 += 1)
                {
                    for (int i_30 = 0; i_30 < 1;i_30 += 1)
                    {
                        {
                            var_40 = (max(var_40, (arr_25 [i_22])));
                            var_41 = (arr_40 [i_7] [i_29] [1]);
                        }
                    }
                }
            }
            for (int i_31 = 0; i_31 < 25;i_31 += 1)
            {
                var_42 = (arr_70 [2]);

                for (int i_32 = 0; i_32 < 1;i_32 += 1)
                {

                    /* vectorizable */
                    for (int i_33 = 4; i_33 < 23;i_33 += 1)
                    {
                        var_43 = (arr_39 [i_7] [i_7] [i_7]);
                        var_44 = (arr_39 [i_7] [i_7] [17]);
                    }
                    for (int i_34 = 0; i_34 < 1;i_34 += 1)
                    {
                        var_45 = (arr_93 [1] [3] [24] [i_7] [i_34]);
                        arr_101 [i_7] [i_22] [i_32] [i_32] [i_31] [i_22] [i_7] = (arr_29 [i_7] [1] [1] [i_34]);
                    }
                    var_46 = (arr_88 [i_31] [i_31] [i_22] [18]);
                }
                /* LoopNest 2 */
                for (int i_35 = 2; i_35 < 22;i_35 += 1)
                {
                    for (int i_36 = 0; i_36 < 25;i_36 += 1)
                    {
                        {
                            var_47 = (arr_34 [i_31] [i_35 + 1] [i_36]);
                            var_48 = (arr_53 [i_7] [3] [i_7] [1] [i_36]);
                            var_49 = (arr_46 [i_7] [23] [i_31] [10]);
                        }
                    }
                }
            }
            for (int i_37 = 0; i_37 < 25;i_37 += 1)
            {
                var_50 = (arr_37 [i_7] [i_7] [20] [1] [i_7]);
                var_51 = arr_44 [i_37] [9] [9];
                var_52 = (arr_28 [i_7] [i_22]);
            }
        }
        var_53 = (arr_69 [i_7]);
    }
    /* LoopNest 2 */
    for (int i_38 = 0; i_38 < 15;i_38 += 1)
    {
        for (int i_39 = 3; i_39 < 11;i_39 += 1)
        {
            {

                /* vectorizable */
                for (int i_40 = 0; i_40 < 15;i_40 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_41 = 0; i_41 < 15;i_41 += 1)
                    {
                        for (int i_42 = 0; i_42 < 1;i_42 += 1)
                        {
                            {
                                var_54 = arr_97 [5] [i_38] [i_38] [1] [i_38];
                                var_55 = (arr_99 [i_38] [i_39] [i_38] [i_41] [i_42]);
                                arr_119 [i_38] [i_39 + 1] [i_38] [i_41] [i_38] = (arr_34 [i_38] [11] [i_40]);
                                var_56 ^= (arr_102 [i_38] [i_39 + 1] [i_40] [i_40]);
                                var_57 = (arr_51 [20] [i_39] [i_38]);
                            }
                        }
                    }
                    var_58 = (arr_104 [i_38] [i_38] [i_39] [16] [i_40]);
                    var_59 = (arr_1 [i_40]);

                    for (int i_43 = 0; i_43 < 15;i_43 += 1)
                    {

                        for (int i_44 = 2; i_44 < 12;i_44 += 1)
                        {
                            var_60 = (arr_92 [2] [i_40] [i_38] [i_40]);
                            var_61 = (arr_114 [i_39] [i_38] [i_43] [i_44]);
                            var_62 = (max(var_62, (arr_102 [i_38] [0] [i_40] [i_38])));
                        }
                        var_63 = (arr_43 [i_38] [8]);
                    }
                    for (int i_45 = 0; i_45 < 1;i_45 += 1)
                    {

                        for (int i_46 = 3; i_46 < 12;i_46 += 1)
                        {
                            var_64 &= arr_32 [1] [1] [i_40] [i_40];
                            var_65 *= (arr_91 [2] [i_40] [2]);
                            var_66 = (arr_43 [i_39] [i_40]);
                        }
                        for (int i_47 = 4; i_47 < 11;i_47 += 1)
                        {
                            var_67 = (max(var_67, (arr_39 [i_47] [4] [i_47])));
                            var_68 = (arr_102 [11] [i_40] [22] [6]);
                            var_69 = (arr_95 [i_45] [i_45] [i_38] [i_38]);
                            arr_136 [11] [i_38] [i_38] [8] = (arr_48 [2] [8] [i_38] [i_38] [i_45] [i_47 - 3]);
                        }
                        for (int i_48 = 0; i_48 < 15;i_48 += 1)
                        {
                            var_70 &= (arr_25 [i_40]);
                            arr_140 [i_38] [i_38] [i_40] [2] [i_48] = (arr_48 [i_38] [i_39 - 3] [i_38] [i_39 - 3] [i_39 - 3] [i_48]);
                        }
                        var_71 = (arr_106 [1] [i_39 - 3] [i_40] [5]);
                    }
                }
                var_72 = (arr_52 [i_38] [15]);

                for (int i_49 = 0; i_49 < 1;i_49 += 1)
                {
                    var_73 = (arr_143 [i_38] [i_38] [i_39] [1]);
                    /* LoopNest 2 */
                    for (int i_50 = 0; i_50 < 15;i_50 += 1)
                    {
                        for (int i_51 = 0; i_51 < 15;i_51 += 1)
                        {
                            {
                                var_74 ^= (arr_32 [6] [i_39] [i_49] [11]);
                                arr_149 [i_38] [2] [i_38] [1] [i_38] [i_38] [i_38] = (arr_80 [i_38] [i_39 - 3] [i_49] [i_50] [i_39 - 3]);
                            }
                        }
                    }
                }
                var_75 = (arr_124 [2] [i_38] [i_38]);
            }
        }
    }
    var_76 = var_3;
    #pragma endscop
}
