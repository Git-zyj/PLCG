/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = ((var_4 ? (((!(arr_1 [i_0])))) : 49534));

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_17 = (min((((~var_11) ? (arr_1 [i_1 - 1]) : var_10)), var_5));
            var_18 = ((((1 & (arr_4 [i_1 - 1] [i_1 - 1]))) | (((arr_4 [i_1 - 2] [i_1 + 1]) | (arr_4 [i_1 - 1] [i_1 + 1])))));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_10 [i_0] [i_0] = var_15;

            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                arr_14 [i_3] = 252;
                var_19 = (arr_0 [i_3 + 1]);
            }
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_22 [i_0] [i_2] [i_4] [i_4] [i_4] = ((0 ? 6000 : ((((arr_7 [i_0]) ^ (arr_0 [i_6]))))));
                            arr_23 [i_0] [i_2] [i_4] [i_2] [i_6] = var_1;
                        }
                    }
                }
                var_20 += (min(6000, ((70 ? -8119799771731254197 : 3))));
            }

            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                arr_26 [i_0] [i_2] [i_7] = (arr_20 [i_0] [i_2] [i_2] [i_7 + 2] [i_7] [i_2]);
                var_21 = (arr_11 [i_0] [i_0]);
                var_22 = (min(var_22, (((((max(-7, var_9))))))));
            }
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                var_23 = var_3;
                var_24 = 63148;
            }
            for (int i_9 = 0; i_9 < 0;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 21;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            arr_37 [i_11] = max(((((((arr_35 [i_0] [i_0] [5] [i_10] [i_11] [i_11]) + 19))) + ((1997687971 ? 3209939377 : -1)))), ((((arr_29 [i_10] [i_10] [i_10 - 2] [i_10 - 2]) ? 58581 : var_8))));
                            arr_38 [i_0] [i_2] [6] [i_9] [5] [i_11] [i_11] = (arr_17 [i_0] [i_0] [i_9]);
                            var_25 += (((arr_32 [i_0] [i_9 + 1] [i_10 - 2] [i_9]) ? ((12 & (arr_35 [i_10 + 1] [i_10 + 1] [i_11] [i_11] [i_10 + 1] [i_11]))) : 1997687971));
                        }
                    }
                }

                /* vectorizable */
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    arr_42 [i_0] [i_2] [i_9] [i_12] = 4294967265;
                    var_26 = 8593419933827433435;
                    var_27 = (min(var_27, (arr_32 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1])));
                }
                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    var_28 = ((~(arr_33 [i_13] [i_0] [20] [i_0] [i_0])));
                    var_29 = var_8;
                    var_30 = (((!(!5311286277832384119))) || ((!(arr_5 [i_13] [i_13]))));
                }
            }
            arr_47 [i_0] = -8740298469943101306;
            arr_48 [i_0] [i_2] = (min(var_15, (max(var_8, (arr_29 [i_2] [i_2] [i_0] [i_0])))));
        }
        var_31 = (((max(5954845322450013164, 5954845322450013164)) * (((865799705 == (arr_7 [i_0]))))));
        /* LoopNest 2 */
        for (int i_14 = 1; i_14 < 18;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 22;i_15 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 2; i_16 < 21;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 1;i_17 += 1)
                        {
                            {
                                arr_58 [i_0] [i_14] [i_15] [i_16] [i_0] = (arr_17 [i_0] [i_15] [i_15]);
                                var_32 += ((((arr_56 [i_0] [i_14] [i_17 - 1] [i_16] [i_16 + 1]) - var_9)));
                            }
                        }
                    }
                    var_33 += (((arr_54 [i_0] [i_0] [i_14 + 1] [i_15]) / ((((((arr_57 [i_15] [i_15] [i_15] [i_14 + 3] [i_14 + 2] [i_0] [i_0]) * 3642852903184350782))) ? var_2 : 37732))));
                }
            }
        }
    }
    for (int i_18 = 0; i_18 < 20;i_18 += 1)
    {
        var_34 = (arr_18 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]);
        arr_62 [i_18] = (arr_57 [i_18] [10] [i_18] [i_18] [i_18] [i_18] [3]);
        var_35 = ((+((((max((arr_28 [i_18] [i_18]), var_4))) ? (((arr_21 [i_18]) ^ (arr_8 [i_18] [i_18]))) : (((-1 + 9223372036854775807) >> (var_4 - 14)))))));
        var_36 = var_0;
        arr_63 [i_18] [i_18] = (((((min((arr_1 [i_18]), 865799705))) ? var_8 : (((var_1 + (arr_12 [i_18] [i_18] [i_18] [i_18])))))));
    }
    var_37 += var_9;
    #pragma endscop
}
