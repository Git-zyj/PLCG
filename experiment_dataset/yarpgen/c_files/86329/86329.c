/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    arr_10 [i_2] [i_1] [i_1] = var_12;
                    var_18 -= ((-(arr_7 [i_2] [i_0])));
                    arr_11 [i_0] [i_2] = ((((((arr_2 [i_0] [i_2]) * var_14))) || (arr_7 [i_1 - 2] [i_1])));
                }
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    arr_14 [i_0] [i_0] [i_0] = min((((var_16 >> (((arr_0 [i_0]) - 22006))))), (((arr_9 [i_0] [16] [i_3] [i_3 + 1]) ? var_14 : (((var_9 ? (arr_1 [i_0] [i_0]) : 2147483647))))));
                    arr_15 [i_0] [i_1] [12] = max((arr_9 [i_1] [i_1 + 1] [i_1 + 1] [i_3 + 2]), (!4931));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_19 = (max((max((arr_18 [i_0] [i_3 - 1]), (arr_1 [9] [i_1 - 1]))), (arr_8 [i_1] [i_3 + 1] [i_5])));
                                arr_22 [i_5] [i_3] [i_3] [i_1] = ((-(arr_16 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4 - 1] [i_4 + 2])));
                                var_20 = -4961;
                            }
                        }
                    }
                }

                for (int i_6 = 4; i_6 < 21;i_6 += 1)
                {
                    var_21 = (max((arr_24 [i_1 + 1] [15] [i_1 - 2]), ((-(arr_17 [i_0] [i_1 + 1] [i_6 + 1])))));
                    var_22 = -4932;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                arr_30 [i_0] [i_1 + 1] [i_6] [8] [i_7] = min(((-(arr_28 [i_0] [i_0] [i_0] [5] [i_0] [i_1 - 1] [i_6 + 1]))), -374255331);
                                var_23 += 4294967295;
                            }
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    var_24 = ((!(arr_24 [i_1 - 1] [i_1 - 2] [5])));
                    var_25 = (max(4294967293, 2015261554));
                }
                /* vectorizable */
                for (int i_10 = 3; i_10 < 20;i_10 += 1)
                {
                    var_26 = (min(var_26, (arr_1 [i_1 + 1] [i_10 - 1])));

                    for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                    {
                        var_27 = (arr_9 [i_0] [i_10 + 1] [i_0] [i_1 + 1]);
                        var_28 = (((arr_33 [i_11] [i_1 - 1] [i_10 + 2]) - (arr_33 [i_11] [i_1 - 1] [i_11])));
                        arr_41 [i_0] [i_0] [i_1] [7] [i_11] [i_11] = (var_12 ? (arr_8 [i_1 + 1] [i_1 + 1] [i_10]) : var_16);
                        arr_42 [i_0] [i_0] [i_11] [i_10] [i_11] = arr_12 [i_10 - 2] [i_1 - 1];
                    }
                    for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
                    {
                        var_29 = (((arr_27 [i_0] [i_1] [18] [18] [i_0]) ? (((arr_24 [i_0] [i_0] [1]) << (var_1 - 141))) : (-127 - 1)));
                        var_30 = var_3;
                        arr_45 [i_0] [i_0] [i_10 - 2] [i_12] [i_0] [6] = (arr_38 [i_0] [i_0]);
                    }
                    for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
                    {
                        var_31 += ((-(arr_2 [i_0] [i_1 - 1])));
                        arr_48 [i_0] [i_0] = (arr_38 [i_10] [i_10]);
                    }
                    var_32 = (min(var_32, (arr_17 [i_1 - 1] [i_10] [18])));
                    arr_49 [8] [i_1] = (arr_21 [i_0] [18] [i_10] [i_1 + 1] [i_1 + 1] [i_10 - 2]);
                }
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    arr_52 [i_0] [i_14] [16] [i_0] = (((-(930453032 / 49548))));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 19;i_16 += 1)
                        {
                            {
                                arr_59 [i_0] [i_14] [i_0] = arr_21 [i_0] [10] [i_0] [i_0] [i_15] [8];
                                arr_60 [i_14] [i_16] = var_0;
                                arr_61 [i_0] [i_1 + 1] [i_14] [i_16] = ((-((((arr_37 [i_0] [i_1] [i_1] [i_14] [i_14] [2]) && (arr_37 [i_0] [i_1] [i_14] [i_15] [i_14] [i_14]))))));
                            }
                        }
                    }
                    arr_62 [i_0] [i_14] [i_14] [i_1 + 1] = (max(((-((max((arr_55 [i_0] [i_0] [i_1] [i_1 - 2] [i_14]), var_8))))), ((max(var_1, 486894493)))));
                    arr_63 [i_14] [4] [18] [i_14] = (((arr_6 [i_1] [i_1 + 1]) ? ((var_14 | (arr_36 [i_1] [i_1 - 2] [i_1 + 1]))) : (arr_44 [10] [i_1] [i_1] [i_1 - 2] [i_1 + 1])));
                }
                arr_64 [i_0] [i_0] [i_0] = (min((arr_31 [10] [10]), (((arr_31 [2] [2]) >> (((arr_31 [16] [16]) - 31589))))));
            }
        }
    }
    var_33 = ((((var_15 * var_9) ? (min(var_11, var_12)) : var_1)) - var_7);
    var_34 = 2279705741;
    var_35 = var_3;
    #pragma endscop
}
