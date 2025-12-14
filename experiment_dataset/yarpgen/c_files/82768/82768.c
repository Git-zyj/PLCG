/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    var_20 = (min(var_20, (arr_0 [i_0 - 1])));
                    var_21 *= (arr_1 [i_0 + 1]);
                }
                var_22 = (min((min((arr_5 [10] [i_0] [i_0 + 1] [11]), (arr_5 [i_0] [i_0] [i_1] [i_1]))), (arr_5 [1] [i_1] [i_1] [9])));

                for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    var_23 = (min(var_23, ((min((min((arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1]))), (arr_7 [i_0 - 1] [i_0 + 1] [i_0 - 1]))))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {

                        for (int i_5 = 3; i_5 < 11;i_5 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_3] [i_4] [i_1] = (arr_15 [i_0] [5] [4] [i_5] [i_0] [i_4]);
                            var_24 = (arr_1 [9]);
                            var_25 = (arr_2 [0] [i_0 - 1]);
                        }
                        var_26 = (arr_14 [i_1] [i_1] [i_3] [i_4] [i_3] [8] [i_0 + 1]);

                        for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            var_27 -= (arr_14 [i_3] [i_1] [i_6 + 2] [8] [4] [0] [i_0 + 1]);
                            var_28 = (arr_12 [i_0] [i_0 + 1] [1] [i_6]);
                            var_29 = (arr_15 [i_0] [8] [0] [i_1] [i_1] [i_6]);
                        }
                        for (int i_7 = 1; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            var_30 ^= (arr_11 [i_0] [i_1] [i_3] [i_0 - 1] [i_4]);
                            var_31 += (arr_7 [i_0 - 1] [1] [i_7 + 1]);
                            arr_22 [9] [i_1] [i_3] [i_1] [i_7] = (arr_2 [i_0 - 1] [i_1]);
                            var_32 ^= arr_18 [i_0] [i_0] [i_0 + 1] [i_0] [5];
                            var_33 = (arr_1 [i_0 + 1]);
                        }
                    }
                    var_34 = (arr_5 [7] [i_1] [i_1] [7]);
                    var_35 = (max(var_35, (arr_21 [i_3] [i_1] [i_1] [6])));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_36 = (min(var_36, (arr_9 [i_8])));
                                var_37 = (max(var_37, (arr_24 [i_0 + 1] [i_1] [7] [11] [i_1])));
                                var_38 = (arr_18 [1] [i_8] [0] [i_0 + 1] [i_0]);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                {
                    arr_34 [i_1] = arr_20 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_10];

                    for (int i_11 = 3; i_11 < 11;i_11 += 1)
                    {
                        var_39 = (arr_13 [i_0 - 1] [7] [i_0] [i_0] [i_0 - 1] [i_0] [i_0]);

                        for (int i_12 = 1; i_12 < 11;i_12 += 1)
                        {
                            arr_40 [9] [i_1] [7] [i_1] [i_12 - 1] [4] = arr_23 [3] [i_1] [9] [i_12] [i_12 + 1] [i_11 - 1];
                            var_40 = (arr_27 [i_0 + 1] [i_11 - 3]);
                            var_41 = (arr_19 [6] [i_10] [i_11 - 2]);
                        }

                        for (int i_13 = 3; i_13 < 8;i_13 += 1)
                        {
                            var_42 = (arr_23 [4] [i_1] [i_10] [3] [i_11] [5]);
                            var_43 = (arr_10 [i_0 - 1] [i_1] [i_11] [i_13]);
                        }
                        var_44 = (arr_29 [10] [i_0] [i_0 + 1] [7] [i_11 - 1]);
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 3; i_14 < 8;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 12;i_15 += 1)
                        {
                            {
                                arr_49 [i_1] [i_1] [i_14] [i_15] = (arr_33 [i_0 + 1] [i_14 + 2] [9]);
                                var_45 ^= (arr_31 [i_0 + 1]);
                                arr_50 [i_1] [i_14] [0] [8] [i_14] [i_14] = arr_0 [i_0 + 1];
                                var_46 = (max(var_46, (arr_29 [i_14 - 2] [2] [i_0 + 1] [i_0 - 1] [i_0 + 1])));
                            }
                        }
                    }
                    var_47 = (arr_13 [i_10] [1] [3] [i_10] [10] [2] [i_0]);
                }
                /* LoopNest 3 */
                for (int i_16 = 0; i_16 < 12;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 0;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 12;i_18 += 1)
                        {
                            {
                                arr_58 [2] [i_1] [i_1] [i_17] [i_18] [i_18] = (arr_30 [7] [3] [i_0 - 1]);
                                var_48 = (arr_47 [1] [i_17] [i_1] [i_1] [i_1] [i_0 - 1]);
                                arr_59 [i_1] = (arr_24 [8] [1] [1] [i_17 + 1] [2]);
                                var_49 = (min(var_49, (max((arr_20 [i_0] [i_1] [10] [i_17 + 1] [i_18]), (arr_25 [i_17 + 1] [3])))));
                                var_50 = (max(var_50, (arr_0 [i_17])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 12;i_20 += 1)
                    {
                        {

                            for (int i_21 = 0; i_21 < 12;i_21 += 1) /* same iter space */
                            {
                                var_51 = (max((arr_38 [i_20] [3]), (max((arr_38 [i_1] [i_20]), (arr_38 [i_20] [i_21])))));
                                var_52 &= (min((arr_54 [i_1]), (arr_46 [1] [5])));
                                var_53 ^= min(((max((arr_30 [i_19] [i_0 + 1] [i_0 - 1]), (arr_68 [i_21] [i_21])))), (arr_6 [i_20] [i_19] [i_20] [i_21]));
                            }
                            for (int i_22 = 0; i_22 < 12;i_22 += 1) /* same iter space */
                            {
                                var_54 = (arr_60 [i_1] [i_1] [i_19]);
                                arr_71 [3] [i_22] [i_1] [i_1] [i_22] [5] = (arr_16 [i_0] [11] [i_1] [7] [5] [i_0] [i_0]);
                            }
                            arr_72 [i_0] [i_19] [i_1] = (arr_33 [3] [2] [i_0]);
                        }
                    }
                }
            }
        }
    }
    var_55 = var_17;
    var_56 = (min(((min(((min(-69, -56))), var_7))), (min(var_8, var_14))));
    var_57 = var_3;
    #pragma endscop
}
