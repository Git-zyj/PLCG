/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_10 [i_3] [i_2] [10] [i_0] = (((~var_2) * ((max((arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 1]), (max(159, var_9)))))));
                        arr_11 [i_0] [i_0] [17] [i_0] = 0;
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_1] [i_2] [i_4] = (max((-127 - 1), 1));
                        arr_16 [i_0] [i_1] [i_2 - 1] [i_4] = var_8;
                        arr_17 [i_0] [i_1] [i_1] [0] [i_4] = (max(25, ((max(var_2, var_9)))));
                    }
                    arr_18 [i_2 - 2] [i_1] [i_0] = ((~(max(var_5, ((max(var_10, var_6)))))));
                }
            }
        }
        arr_19 [i_0] = (min(((~(arr_7 [i_0] [i_0] [i_0]))), (arr_0 [i_0])));

        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        {
                            arr_34 [i_7] [i_5 + 3] [i_5 + 3] [i_7] [12] [i_0] [i_6] &= (max((((~(arr_14 [i_0] [i_5] [i_5] [i_5] [i_8] [i_8])))), var_5));
                            arr_35 [i_0] [i_0] [2] [i_5] [19] = (max(var_11, var_0));
                        }
                    }
                }
            }
            arr_36 [i_0] [i_5] [1] = var_9;
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 0;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            {

                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 15;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            {
                                arr_50 [i_9] [i_10] [i_10] [i_9] [i_10] = max(var_6, (arr_41 [i_9 + 1]));
                                arr_51 [1] [i_9] [12] [i_9] [i_9] [i_9] [i_9] = (arr_3 [0]);
                                arr_52 [i_9] [i_9] = ((!(((arr_22 [i_11] [i_9] [i_12]) && (arr_12 [i_9 + 1] [i_9 + 1] [1] [i_12 + 1] [i_12] [i_12])))));
                            }
                        }
                    }
                    arr_53 [i_9] [i_9] = 1;

                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        arr_56 [i_9] [i_9] [i_9] [i_9] [8] = (arr_47 [i_9] [i_9] [i_11] [i_11] [i_11] [i_11] [i_11]);
                        arr_57 [i_9] [i_9] [i_9] [i_9] = ((((max(var_10, (arr_24 [i_9 + 1] [1] [i_9])))) ? ((max(1, 1))) : ((max((arr_29 [i_9 + 1]), (arr_29 [i_9 + 1]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 17;i_16 += 1)
                        {
                            {
                                arr_63 [i_9] [i_10] [i_11] [i_15] [i_11] = (min(((25 ? -1108801020 : 3554681210)), ((max((((arr_41 [i_11]) ? (arr_26 [i_9] [i_10] [16]) : var_2)), ((max(1, 232))))))));
                                arr_64 [i_9 + 1] [i_9 + 1] [i_15] [i_9] = (min((arr_61 [i_9 + 1] [i_9 + 1] [i_9] [7] [i_9]), (max((max(var_12, 25)), var_13))));
                                arr_65 [8] [8] [8] [10] [i_10] = (((arr_27 [i_9] [i_10]) / 3));
                                arr_66 [i_9] [16] [i_10] [i_15] &= ((((max(var_9, var_8))) ^ (((!(arr_54 [i_11] [i_9 + 1]))))));
                                arr_67 [i_9] [12] [i_11] [12] = (arr_33 [i_16] [i_16] [i_11] [i_16] [i_16]);
                            }
                        }
                    }
                    arr_68 [i_9] = (arr_62 [i_9 + 1] [i_9 + 1] [i_9] [10] [i_9 + 1] [i_9 + 1] [i_9]);
                }

                /* vectorizable */
                for (int i_17 = 1; i_17 < 15;i_17 += 1)
                {
                    arr_72 [i_9] [i_9] [i_9] = (arr_39 [i_9] [i_17 - 1]);
                    arr_73 [i_10] [i_10] = (((arr_3 [i_9 + 1]) && (arr_3 [i_9 + 1])));
                }
                /* vectorizable */
                for (int i_18 = 0; i_18 < 17;i_18 += 1)
                {
                    arr_77 [i_9] [i_10] = ((~(((arr_61 [i_9] [8] [i_10] [i_10] [i_18]) >> (((arr_9 [i_9 + 1] [i_10] [i_10] [i_9] [i_18]) - 14059079777849549052))))));

                    for (int i_19 = 0; i_19 < 17;i_19 += 1)
                    {
                        arr_81 [i_9] [i_10] [i_9] [i_10] [i_18] [i_10] = 1;
                        arr_82 [i_19] [i_9] [i_18] [i_10] [i_9] [i_9] = ((!(arr_44 [5] [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1])));
                        arr_83 [i_9] [i_9] [i_9] [i_19] = (arr_1 [i_10] [i_9]);
                    }
                    arr_84 [i_9] [i_9] [i_9] = (arr_41 [5]);
                }
                for (int i_20 = 3; i_20 < 16;i_20 += 1)
                {
                    arr_87 [i_10] [i_10] [i_10] = max((arr_21 [i_9] [i_9]), (arr_43 [i_9] [i_10] [i_10] [i_9]));
                    arr_88 [i_10] [i_10] [i_10] = var_4;
                    arr_89 [i_9] [i_9] = (min(((-(arr_76 [i_20 - 1] [i_10] [i_9 + 1]))), ((-(arr_59 [i_9] [i_9 + 1] [i_20 + 1] [i_20 - 1])))));

                    for (int i_21 = 0; i_21 < 17;i_21 += 1)
                    {
                        arr_93 [i_21] [i_9] [i_9] [i_9 + 1] = (arr_75 [i_9] [i_9]);
                        arr_94 [i_9 + 1] [i_9] [i_9 + 1] [i_21] [i_9 + 1] = ((~(arr_91 [4] [i_20] [i_9])));
                    }
                }
                /* vectorizable */
                for (int i_22 = 0; i_22 < 17;i_22 += 1)
                {
                    arr_97 [1] [i_10] [i_10] = ((!(arr_49 [3] [i_9 + 1])));
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 1;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 17;i_24 += 1)
                        {
                            {
                                arr_102 [i_9] [i_9] = var_12;
                                arr_103 [i_10] [10] [i_22] [16] [i_10] = (((arr_26 [i_9 + 1] [i_23] [i_22]) ^ (arr_49 [i_9 + 1] [i_9 + 1])));
                                arr_104 [i_10] [i_10] [i_22] [2] = (arr_45 [i_9] [i_10] [i_10] [i_9]);
                                arr_105 [i_9] [i_10] [i_23] = var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (~var_14);
    #pragma endscop
}
