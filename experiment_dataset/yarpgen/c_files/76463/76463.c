/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    var_16 += var_7;
    var_17 = (79 + var_10);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 += (min(((-(arr_0 [i_0]))), ((-(arr_0 [i_0])))));
        var_19 += (max((min((((-(arr_1 [i_0])))), var_11)), ((var_14 ? ((var_6 ? (arr_1 [i_0]) : (arr_0 [i_0]))) : ((((arr_1 [i_0]) >> (var_14 + 1073691933))))))));
        var_20 += -var_6;
        var_21 = (min(var_21, ((min((((!((max((arr_0 [i_0]), (arr_0 [i_0]))))))), (max((arr_0 [i_0]), (arr_0 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = 42;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_22 = (max(var_22, ((((max((arr_7 [i_1] [i_1]), (arr_7 [i_1] [i_1]))) / (((arr_7 [i_3] [i_2]) ? (arr_7 [i_1] [i_1]) : (arr_7 [i_1] [i_1]))))))));

                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 19;i_4 += 1)
                    {
                        var_23 = (arr_10 [i_1] [i_1] [i_1] [i_4]);
                        var_24 = 2606375130;
                        arr_14 [i_1] [i_1] [i_1] [i_1] = (!var_0);
                        var_25 = var_12;
                    }

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_26 = (((((arr_3 [i_5]) && (arr_8 [i_1] [i_2]))) ? (arr_13 [i_2] [i_1] [i_1]) : (arr_13 [i_5 - 1] [i_1] [i_5 - 1])));
                        arr_17 [2] [i_2] [1] [i_1] [5] = (var_8 ^ -98);

                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            var_27 -= var_8;
                            var_28 = 1;
                        }
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            arr_24 [i_1] [i_1] [i_3] [i_5] [i_1] [i_7] [i_7] = ((~(arr_10 [i_3] [i_1] [9] [i_1])));
                            arr_25 [19] [i_1] = ((arr_15 [i_1] [i_2] [i_3] [i_5] [4]) ? var_10 : ((var_4 ? (arr_9 [i_1]) : var_6)));
                            var_29 = ((arr_11 [i_1] [i_1] [i_1] [i_1]) ? (arr_12 [i_5] [i_5] [i_5 - 1] [i_5 - 1]) : (((arr_11 [i_1] [i_1] [i_1] [15]) ? 1 : (arr_7 [i_1] [i_2]))));
                        }
                    }
                    for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        var_30 = (max(var_30, ((((arr_5 [i_1]) ? (arr_23 [i_1] [i_1] [i_1] [i_2] [i_3] [i_8] [i_8]) : var_2)))));
                        var_31 = ((((max((arr_2 [i_1] [i_3]), (arr_2 [i_1] [i_8 - 1])))) ? -511 : ((-(arr_11 [i_1] [16] [i_1] [i_1])))));
                    }
                    for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                    {
                        arr_33 [i_1] [i_1] [i_1] [i_2] [i_3] [i_1] = var_9;
                        var_32 = (max(var_32, (((max((arr_4 [2]), (arr_4 [2])))))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
                    {

                        for (int i_11 = 1; i_11 < 18;i_11 += 1)
                        {
                            arr_40 [i_11] [i_1] [3] [i_1] [i_1] = (arr_30 [i_10] [i_1] [18] [i_1] [i_2]);
                            var_33 = ((1 ? (arr_15 [i_1] [i_1] [5] [5] [i_11 + 1]) : (arr_15 [i_1] [i_2] [i_3] [i_10] [i_11 - 1])));
                            var_34 = var_14;
                            var_35 = -16;
                        }
                        arr_41 [i_1] [i_2] [i_1] [i_10] = (arr_30 [i_1] [i_2] [i_2] [i_1] [i_10]);
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            {
                                var_36 = (max(var_36, ((min(var_1, ((max((arr_37 [i_1] [10] [10] [i_12]), (arr_20 [18] [i_2] [i_12] [i_2] [i_12] [i_2] [i_2])))))))));
                                var_37 = (max(var_37, var_9));
                                var_38 = (min((min(var_5, var_14)), ((-(((arr_9 [i_1]) * var_2))))));
                                var_39 = (min(((min(var_10, ((min(1, 38)))))), (min((!35), (arr_31 [12] [11] [i_1] [i_12] [i_12])))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_14 = 1; i_14 < 1;i_14 += 1) /* same iter space */
    {
        arr_49 [i_14] [i_14] = ((-44403 ? ((min((arr_47 [i_14 - 1]), 325492364))) : (min(((((arr_47 [3]) && -48))), (arr_46 [i_14 - 1] [i_14 - 1])))));
        var_40 = ((var_6 && ((((arr_48 [i_14 - 1]) ? (arr_48 [i_14 - 1]) : (arr_48 [i_14 - 1]))))));
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 20;i_16 += 1)
            {
                {
                    arr_56 [i_14] [i_14 - 1] [6] [i_14] = (max(((((arr_48 [i_14]) + var_3))), (max((arr_55 [i_16 - 1] [i_16 - 1] [i_16]), (arr_55 [i_16 + 1] [i_16] [10])))));
                    var_41 = var_9;
                    var_42 &= (1 && -113);
                }
            }
        }
    }
    for (int i_17 = 1; i_17 < 1;i_17 += 1) /* same iter space */
    {
        arr_61 [i_17] = (arr_53 [i_17] [i_17] [i_17 - 1]);
        var_43 = -1;
        arr_62 [i_17] = (max(146, (arr_48 [i_17 - 1])));
        var_44 ^= (arr_59 [8]);
        var_45 ^= (arr_53 [i_17 - 1] [i_17 - 1] [i_17 - 1]);
    }
    #pragma endscop
}
