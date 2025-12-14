/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((576460752303423487 + 576460752303423462) ? var_7 : (((65533 | -576460752303423479) ? var_5 : var_2)));
    var_13 = ((((min(var_0, -576460752303423488))) <= (min(-576460752303423487, var_3))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            var_14 = var_4;
            var_15 = (arr_2 [i_0]);
        }
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            arr_8 [5] = (arr_4 [i_2] [i_0] [i_0]);
            var_16 = var_11;
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                {
                    var_17 = (~var_4);
                    var_18 = ((((((arr_9 [i_3]) ? (arr_6 [4] [i_3] [i_4]) : -576460752303423500)) + 9223372036854775807)) >> (var_9 - 7767371942458713366));
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {
        var_19 = ((((arr_5 [i_5 + 2] [i_5 + 1] [i_5]) ? (arr_5 [i_5 + 2] [i_5 + 2] [i_5]) : (arr_5 [i_5 + 3] [i_5 + 3] [i_5]))));
        var_20 = (!576460752303423462);

        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            arr_17 [i_5] [i_6] = (((min(1474081828, (arr_11 [i_5] [i_5] [i_6]))) >> (123 - 63)));
            var_21 = 576460752303423462;
            arr_18 [i_6] = (((((arr_7 [i_5 + 2] [i_5 + 1]) ? (arr_7 [i_5 + 2] [i_5 + 1]) : (arr_7 [i_5 + 2] [i_5 + 1]))) - ((var_6 * (arr_7 [i_5 + 1] [i_5 + 3])))));
            var_22 = var_8;
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 4; i_9 < 12;i_9 += 1)
                {
                    {
                        arr_26 [i_5] [i_7] = (-989483487 > var_9);
                        arr_27 [i_5] [i_7] [i_8] = (((arr_5 [11] [i_8 - 1] [i_5 + 2]) ? (arr_5 [12] [i_8 - 3] [i_5 + 1]) : (arr_5 [i_8 + 1] [i_8 + 1] [i_5 - 1])));
                    }
                }
            }
            var_23 = -1;
            var_24 = (((((-576460752303423488 ? 12931913950245575015 : 13351797828943490624))) ? 5514830123463976598 : var_10));
            arr_28 [i_7] [i_7] [2] = (-32767 - 1);
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 16;i_12 += 1)
            {
                {
                    var_25 = (max(var_25, (~58973)));
                    arr_37 [i_11] [i_11] [i_11] = ((var_5 ? (arr_30 [i_11] [i_12]) : (arr_30 [i_11 - 2] [i_11 - 2])));

                    for (int i_13 = 3; i_13 < 16;i_13 += 1)
                    {
                        arr_41 [i_10] [i_11] [15] [i_10] [i_13] = (((var_9 >> (50486 - 50445))));
                        var_26 = (((((var_10 ? (arr_34 [i_10] [i_11]) : (arr_38 [i_11] [i_11])))) ? (((arr_38 [i_11] [i_11]) ? 576460752303423507 : (arr_31 [i_10] [i_11 + 1]))) : (arr_36 [i_11 - 1] [i_12 - 2] [i_11])));
                        var_27 = (arr_32 [7] [i_10]);
                    }
                    for (int i_14 = 1; i_14 < 15;i_14 += 1)
                    {
                        var_28 = (((arr_31 [i_12 - 2] [i_11 - 3]) ? (arr_43 [i_11 - 1] [i_11]) : ((29221 | (arr_30 [i_10] [i_12 - 1])))));
                        var_29 = (((arr_39 [i_12] [i_14 - 1] [i_14] [i_14 - 1] [i_14 + 1]) ? var_5 : (arr_29 [i_10] [i_11])));
                        var_30 = (-(arr_39 [i_10] [i_11 + 1] [i_12 + 1] [7] [i_14]));
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 2; i_15 < 15;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 17;i_16 += 1)
                        {
                            {
                                var_31 = var_0;
                                var_32 = var_2;
                            }
                        }
                    }
                }
            }
        }
        var_33 = ((~(arr_48 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])));
        var_34 = ((arr_48 [10] [14] [i_10] [i_10] [i_10] [14] [i_10]) ? 2990734584651397967 : var_10);
    }
    #pragma endscop
}
