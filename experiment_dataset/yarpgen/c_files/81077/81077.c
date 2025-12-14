/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_6 ? var_6 : var_13))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_18 = (min(var_18, ((((var_10 ? var_10 : 2147483647))))));
                        var_19 *= (arr_9 [i_0] [i_0] [4]);
                        arr_10 [i_1] [i_1] = (((((arr_5 [i_1]) ? var_0 : (arr_6 [12] [i_2] [i_3])))) ? var_4 : -1);
                        var_20 = (max(var_20, (arr_3 [i_0] [i_0] [i_0])));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_18 [i_0] [15] [0] [i_4] [i_6] = ((var_13 ? (arr_6 [i_0] [i_4] [i_4]) : (arr_15 [i_5])));
                        var_21 = (min(var_21, (((-31 ? 1 : 0)))));

                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_22 = (((((14 ? (arr_6 [i_0] [i_5] [i_5]) : var_0))) ? (arr_9 [i_7] [i_7] [i_7]) : (!1511272951)));
                            arr_23 [i_5] [i_5] [i_4] = (((arr_2 [i_6]) >= ((var_8 ? (arr_16 [i_4] [i_6] [i_4] [i_4]) : var_11))));
                            arr_24 [i_0] [i_4] [i_4] [i_0] [i_4] [1] [i_7] = 1150587344;
                            var_23 = var_8;
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_24 = -889136374;
                            var_25 = (arr_19 [i_8] [i_4] [i_5] [i_6] [17] [i_4]);
                        }

                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            var_26 += 0;
                            var_27 *= var_2;
                        }
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [15] [i_4] = 24834;
                            arr_32 [i_0] [i_4] [19] [i_4] [i_10] [i_10] = ((arr_30 [i_0] [i_4] [i_5] [4] [i_10]) > ((var_8 ? 3721 : (arr_16 [i_4] [i_4] [13] [i_10]))));
                            arr_33 [i_10] [i_4] [i_4] [0] = arr_15 [i_0];
                            arr_34 [i_4] [i_4] [i_5] [i_6] [i_5] = (arr_7 [i_4]);
                        }
                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            var_28 = ((var_12 | var_13) ? ((var_1 ? var_9 : 1)) : (var_7 - var_1));
                            var_29 = (((arr_25 [i_4] [i_4] [i_4]) ? (-32767 - 1) : 1));
                        }
                    }
                }
            }
        }
        var_30 += -var_1;
    }
    /* vectorizable */
    for (int i_12 = 2; i_12 < 20;i_12 += 1)
    {
        arr_39 [i_12] &= (((((255 ? 1150587344 : var_4))) ? ((24996 ? 889136381 : -82)) : (((var_6 >= (arr_3 [i_12] [i_12 + 1] [i_12 - 1]))))));
        var_31 &= ((var_11 ? ((var_7 ? var_1 : (arr_21 [i_12] [i_12] [i_12] [i_12 + 1] [i_12]))) : (arr_22 [i_12 - 2] [i_12] [i_12] [i_12 - 2] [13] [20] [i_12])));
    }
    for (int i_13 = 0; i_13 < 17;i_13 += 1)
    {
        var_32 ^= (arr_9 [24] [24] [i_13]);

        for (int i_14 = 2; i_14 < 13;i_14 += 1)
        {
            var_33 = (arr_22 [i_13] [22] [i_13] [i_13] [16] [i_14 - 1] [3]);
            /* LoopNest 2 */
            for (int i_15 = 2; i_15 < 16;i_15 += 1)
            {
                for (int i_16 = 3; i_16 < 16;i_16 += 1)
                {
                    {
                        arr_52 [1] [i_14] [i_15] [i_16] = ((!(((((var_2 ? -1 : (-2147483647 - 1))) / ((min(var_5, var_5))))))));
                        var_34 = (max(((!((min((arr_9 [i_14 + 4] [i_13] [i_15 - 1]), (arr_25 [i_16 + 1] [23] [i_14 + 3])))))), (!var_9)));
                        var_35 = -66957736;
                    }
                }
            }
        }
    }
    var_36 = ((-((~(max(1780866072, var_3))))));
    #pragma endscop
}
