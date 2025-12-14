/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = (arr_3 [4]);
        arr_5 [i_0] = 1;
        arr_6 [i_0 + 2] [i_0] = (((((arr_0 [i_0]) < (arr_3 [i_0 + 1]))) ? var_9 : (((0 < (arr_1 [i_0]))))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                arr_11 [i_0] [i_2] [i_0] [i_0] = (((((-(arr_3 [i_0 - 1])))) ? (arr_2 [i_0]) : (var_4 || var_1)));
                arr_12 [i_0 + 2] [i_1] [i_2 + 1] [i_1] = (~(((arr_8 [i_0 + 1] [i_0 + 2] [i_0 - 1]) & (arr_8 [i_0 - 1] [i_0 + 1] [i_0 + 1]))));
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_17 [i_0] [i_1] [i_0] [i_1] = (((!1) || (((2017398523 ? (arr_15 [i_0 + 2] [i_0] [i_0]) : 1)))));
                arr_18 [i_0] [i_1] = var_4;
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                arr_21 [i_0] [i_1] [i_0] [i_0 + 2] = -115;
                arr_22 [10] [i_0] = (arr_7 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            arr_27 [i_0] [i_1] [i_4] [i_5] [i_6] = (arr_23 [i_1]);
                            arr_28 [8] [i_5] [i_1] [i_4] [i_5] [i_6] = (((arr_1 [i_5]) * var_2));
                            arr_29 [i_0] [i_0] [i_4] [i_5] [4] = 1410;
                            arr_30 [i_0] [i_1] [i_4] [i_1] [i_0] = ((var_13 ? -13806 : (arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 2])));
                            arr_31 [i_0] [i_1] [i_1] [i_4] [i_5] [i_6] [i_6] = (arr_23 [i_0]);
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    arr_34 [i_7] [i_0] [i_0] [i_0] = ((!(arr_20 [i_0] [i_1] [i_0])));
                    arr_35 [i_0 + 1] [i_1] [5] [i_0] [8] = (arr_3 [i_4]);
                    arr_36 [i_1] [1] [i_1] = (arr_16 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]);
                    arr_37 [i_0] [i_1] [i_4] [i_0] = (~18313453313579832982);
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    arr_40 [i_0] [i_1] [i_8] = (((arr_20 [i_0 + 2] [i_0 + 2] [i_1]) * (1175047600 < var_14)));
                    arr_41 [i_0] = (~var_12);
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    arr_44 [i_1] |= ((-(arr_19 [i_1] [i_0 - 1] [i_1])));
                    arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] = ((-(arr_19 [i_0] [i_0 + 2] [i_0])));
                    arr_46 [i_9] [i_0] [i_0] [i_0] = (1 & var_8);
                    arr_47 [i_0] [i_1] [i_4] [i_9] = (!3775491765);
                }
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    arr_52 [i_0] [i_0] [i_1] [0] [i_0] = ((!(arr_8 [i_0 + 1] [i_0 - 1] [i_0])));

                    for (int i_11 = 1; i_11 < 11;i_11 += 1)
                    {
                        arr_57 [i_0] [i_0] = ((-605397461 ? var_6 : var_4));
                        arr_58 [i_0 + 1] [i_1] [i_0] [i_10] [i_11] = var_6;
                    }
                    for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
                    {
                        arr_61 [i_0 + 2] [i_0] [i_0] [i_1] |= ((!(var_13 / 93)));
                        arr_62 [i_0] [i_0] [i_4] [7] [i_12] = (((arr_25 [i_12] [i_10] [i_4] [i_1] [i_0 - 1]) ? (arr_25 [i_0 + 2] [i_0 + 2] [i_4] [i_4] [11]) : (arr_25 [i_0] [i_1] [i_4] [i_10] [i_12])));
                    }
                    for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
                    {
                        arr_66 [i_0 - 1] [i_1] [i_4] [i_10] [i_1] [i_4] &= var_11;
                        arr_67 [i_0] [i_0] [i_10] [i_10] [i_13] = ((~((-1411 ? (arr_39 [i_0] [i_0 + 1] [1] [i_0]) : 15435))));
                        arr_68 [i_0] [i_0] [i_4] [i_0] = ((var_2 ? (arr_25 [i_0 + 2] [i_0 + 1] [i_0 + 1] [4] [i_0 - 1]) : 4));
                        arr_69 [i_0] [i_1] [i_4] [i_4] [i_10] [i_10] [i_0] = ((!(arr_63 [i_1] [i_13] [i_1] [i_4] [i_1] [i_0 + 1] [5])));
                    }
                }
                arr_70 [i_0] [i_0 + 2] [i_0] [i_0] = (((arr_63 [i_0] [i_0] [6] [1] [i_0 + 1] [i_0 + 2] [i_4]) ? var_3 : (arr_63 [i_0] [i_0] [i_0] [2] [i_0 + 1] [i_0 - 1] [i_4])));
            }
            arr_71 [i_0] = (min(-1, 1));
        }
    }
    var_15 = var_12;
    #pragma endscop
}
