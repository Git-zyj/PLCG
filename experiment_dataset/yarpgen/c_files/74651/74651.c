/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = (max((((((min(var_5, var_3))) && ((max(var_9, 9223372036854775807)))))), (var_3 ^ var_9)));
    var_13 = ((~(var_1 | 91)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = ((!(arr_6 [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_15 -= arr_7 [i_0] [i_0] [8] [i_4];
                                var_16 = (((var_7 ? 81 : (arr_7 [i_0] [i_0] [i_3] [i_4]))) << ((((-90 ? var_5 : var_5)) + 128)));
                                var_17 = ((((((arr_2 [i_2] [i_1] [i_2]) * var_8))) ? var_6 : var_0));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_6 [i_1] [i_4]);
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 12;i_6 += 1)
            {
                {
                    arr_17 [i_6] [i_5] [i_6] [4] = (((arr_15 [i_0] [i_5] [i_0]) - -var_5));
                    var_18 = var_7;
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        var_19 = (((arr_5 [i_7] [i_7] [i_7]) * (arr_6 [i_7] [i_7])));

        for (int i_8 = 3; i_8 < 13;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 14;i_10 += 1)
                {
                    {
                        var_20 = var_6;
                        var_21 = (((((arr_22 [i_8 - 1] [i_9] [i_9]) ? ((max((arr_6 [i_8] [i_9]), var_7))) : (max(var_4, var_2))))) ? var_1 : var_9);
                    }
                }
            }

            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        {
                            var_22 += var_1;
                            var_23 = (max((((!((var_3 != (arr_11 [i_7] [5] [i_7] [5] [i_7])))))), (((min(var_9, var_5)) + (((var_1 ? (arr_35 [i_7] [i_7]) : (arr_29 [i_11] [i_13]))))))));
                        }
                    }
                }
                arr_36 [i_7] [2] = min((((var_3 < (arr_2 [i_7] [i_8] [i_8 - 3])))), (arr_2 [11] [11] [i_8 - 3]));
                var_24 = 61284;
            }
            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                var_25 -= 1616372166;
                arr_40 [7] [i_7] [i_8] [i_14] = var_10;
            }
            /* vectorizable */
            for (int i_15 = 1; i_15 < 12;i_15 += 1)
            {
                arr_43 [i_7] = (arr_34 [i_7] [i_7] [i_7] [i_8 - 1] [i_15 + 3]);
                var_26 = var_0;
                var_27 = (((arr_10 [i_7] [i_7]) - (arr_10 [i_15 + 3] [1])));
            }
            var_28 += -83;
            var_29 += var_7;
            arr_44 [i_7] [i_7] = (((min((arr_33 [i_8 - 1] [i_8 - 2] [i_8 + 1] [i_8]), ((var_6 ? var_6 : (arr_23 [0] [i_8]))))) / (((var_4 >> (var_3 - 2024084429))))));
        }
        for (int i_16 = 3; i_16 < 14;i_16 += 1)
        {
            arr_48 [i_16] [i_7] [i_16 - 3] = (max((max(var_6, (arr_6 [9] [i_16 - 3]))), var_3));
            var_30 = (min(var_30, ((max(var_3, ((18446744073709551609 << (((max(48295, var_9)) - 2131646388)))))))));
            var_31 += var_8;
            arr_49 [i_7] [i_16] [i_7] = ((16169279627212351787 <= (arr_37 [i_7])));
            arr_50 [i_7] [i_16] = var_1;
        }
        var_32 = ((((~((max(31, var_7)))))) || ((((max(21633, (arr_19 [i_7]))) ^ (arr_27 [4] [i_7] [i_7] [4])))));
        var_33 = (min(var_33, (arr_22 [14] [i_7] [14])));
    }
    for (int i_17 = 1; i_17 < 9;i_17 += 1)
    {
        arr_54 [i_17] = (min((max(var_3, (arr_24 [i_17 + 1] [i_17 + 1] [1] [i_17 - 1]))), -var_0));
        var_34 = ((var_6 - ((247 ? var_6 : (arr_53 [i_17] [i_17])))));
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 0;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 10;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 10;i_20 += 1)
                {
                    {
                        var_35 = ((((max(var_0, (arr_5 [i_18] [i_18 + 1] [i_18])))) || (arr_14 [i_17] [i_17])));
                        var_36 |= ((((((max(0, 969558820))) || (var_8 + var_6))) && (arr_21 [i_17])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 1;i_21 += 1)
        {
            for (int i_22 = 1; i_22 < 9;i_22 += 1)
            {
                {
                    var_37 = (min((((min(var_9, 18446744073709551612)) & (((min((arr_56 [i_22] [i_21] [i_17 - 1]), var_0)))))), ((min((arr_13 [i_22 - 1] [i_22 - 1]), ((-(arr_58 [i_17] [i_17] [i_17] [i_22]))))))));
                    var_38 = ((var_1 + (((!(arr_19 [i_17 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 10;i_23 += 1)
                    {
                        for (int i_24 = 1; i_24 < 8;i_24 += 1)
                        {
                            {
                                var_39 = (min(((((arr_24 [i_24 + 2] [i_22] [i_22 - 1] [i_17 + 1]) != (arr_24 [i_24 + 2] [i_23] [i_22 + 1] [i_17 - 1])))), (arr_24 [i_24 - 1] [i_22] [i_22 - 1] [i_17 - 1])));
                                var_40 = (((var_7 && (arr_27 [i_24] [i_24 + 2] [i_24] [i_24 - 1]))) || (arr_27 [i_24] [i_24 + 2] [i_24 + 2] [i_24 - 1]));
                                arr_75 [i_23] [i_23] [7] [i_23] [i_24] = arr_32 [i_22 + 1] [0] [i_22];
                            }
                        }
                    }
                }
            }
        }
        var_41 = (min(var_41, 1));
    }
    for (int i_25 = 0; i_25 < 17;i_25 += 1)
    {
        arr_78 [i_25] = var_6;
        arr_79 [8] = var_3;
    }
    #pragma endscop
}
