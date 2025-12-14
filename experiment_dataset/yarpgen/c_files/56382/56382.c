/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((48358 ? var_2 : -7480272699520719729)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, (arr_5 [i_3 + 2] [i_3 + 1] [i_3 - 2])));
                                var_22 = (!var_1);
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_15 [i_0] [i_2] [i_5] = arr_10 [i_2] [i_5];
                        var_23 = (max(var_23, (arr_4 [i_0])));
                        var_24 = (max(var_24, (((~((var_18 ? 2550648155580118123 : -2550648155580118123)))))));
                    }
                    for (int i_6 = 2; i_6 < 9;i_6 += 1)
                    {
                        var_25 = ((-(arr_11 [i_2] [i_6 - 2])));

                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            arr_20 [i_0] [i_1] [i_2] [i_2] [i_2] [i_1] = (((((-(arr_18 [i_7] [8] [i_2] [7] [i_0])))) ? -49912 : 63424));
                            var_26 = (max(var_26, (((var_9 ? (arr_8 [i_6 - 1]) : (((arr_4 [i_1]) - 1)))))));
                            arr_21 [i_0] [i_1] [i_2] [i_0] [i_7] = (arr_6 [i_6 - 2] [i_6 - 2] [i_6] [i_6 + 1]);
                            arr_22 [i_0] [5] [i_0] [i_2] [i_7] = ((-(arr_1 [i_6 + 1])));
                            var_27 = arr_3 [i_1] [i_2];
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_2] = 1;
                            var_28 = (((arr_16 [i_2] [i_8] [i_6 + 1] [i_2]) ? (arr_16 [i_2] [i_8] [i_6 - 1] [i_2]) : (arr_16 [i_2] [5] [i_6 + 1] [i_2])));
                            var_29 = var_16;
                        }

                        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                        {
                            arr_28 [3] [i_1] [i_2] [i_6] [i_2] = (((arr_1 [i_0]) ? (((-(arr_13 [i_2] [i_1] [i_2])))) : 14757492484520117714));
                            arr_29 [i_0] [i_0] [i_2] [i_6 - 2] [i_2] = (arr_19 [i_2] [i_2]);
                        }
                        for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                        {
                            var_30 = (((arr_30 [i_2] [1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [0]) ? (arr_30 [i_2] [i_1] [i_6 - 1] [i_6] [i_6 - 1] [i_6]) : (arr_18 [i_0] [6] [i_6 - 1] [i_0] [i_1])));
                            var_31 = (max(var_31, var_12));
                        }
                        for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
                        {
                            var_32 = (((arr_26 [i_0] [i_0] [i_0] [i_0] [i_11] [i_2]) + (arr_1 [i_6 - 2])));
                            var_33 = (max(var_33, -var_5));
                        }
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                    {
                        var_34 -= var_1;
                        var_35 &= (arr_3 [i_0] [i_0]);
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                    {
                        var_36 = (arr_33 [i_13] [i_13] [i_2] [i_0] [i_0]);

                        for (int i_14 = 2; i_14 < 8;i_14 += 1)
                        {
                            arr_44 [i_2] = (((arr_41 [i_14 + 1] [i_2]) % (arr_41 [i_14 + 2] [i_2])));
                            var_37 = ((!(arr_13 [i_2] [i_2] [i_2])));
                            arr_45 [i_0] [i_1] [i_2] [i_13] [i_14 - 2] = (((arr_7 [2] [4] [2]) != (arr_4 [i_0])));
                        }
                        arr_46 [i_0] [i_2] = ((var_8 ? var_18 : (arr_38 [i_2] [i_1])));

                        for (int i_15 = 3; i_15 < 7;i_15 += 1)
                        {
                            arr_51 [i_15] [i_1] [i_1] [i_1] [i_1] [i_0] |= (((~-1567684091) ? (~var_1) : ((1046528 ? 1 : 1))));
                            var_38 *= ((30425 ? var_1 : (arr_39 [i_0] [i_0] [6] [i_0] [i_1] [i_0])));
                        }
                        for (int i_16 = 0; i_16 < 10;i_16 += 1)
                        {
                            var_39 = (max(var_39, (((0 - ((var_16 / (arr_49 [i_0] [i_0] [i_0] [i_13] [i_16] [i_0] [i_1]))))))));
                            var_40 = var_7;
                            var_41 = ((1 ? ((var_13 ? (arr_5 [4] [4] [4]) : (arr_0 [i_16]))) : var_6));
                            var_42 = ((!(arr_39 [i_0] [i_1] [i_0] [5] [i_2] [i_2])));
                        }
                    }
                }
            }
        }
        var_43 = (~(arr_43 [i_0] [i_0] [i_0] [i_0] [i_0]));
        arr_54 [i_0] = (arr_24 [0]);
    }
    for (int i_17 = 3; i_17 < 16;i_17 += 1)
    {
        /* LoopNest 3 */
        for (int i_18 = 2; i_18 < 17;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 18;i_20 += 1)
                {
                    {
                        arr_68 [i_17] [i_19] [i_20] = (arr_55 [1]);
                        var_44 = (min((((((-2550648155580118111 ? 162 : 55420))) || 0)), ((((min(var_6, var_18))) || ((max(65535, -93)))))));
                        var_45 = -16688;
                        var_46 -= ((var_8 ? -21 : (min(((max((arr_61 [i_20] [i_18 - 1] [i_20] [8]), (arr_57 [i_18])))), var_5))));
                        var_47 = (max(var_47, ((((arr_65 [i_20]) > ((~(arr_63 [i_17] [i_17] [8] [i_18]))))))));
                    }
                }
            }
        }
        var_48 = ((var_0 * (var_13 * -32152)));
        var_49 = (max(var_49, ((42976 ? 65535 : (arr_59 [i_17] [14] [i_17])))));
    }
    var_50 = (max(var_50, (((var_12 ? -var_10 : var_1)))));
    #pragma endscop
}
