/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = var_11;
                var_18 = 28138;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_19 = (max(var_19, var_11));
                            var_20 = (arr_3 [i_0]);
                            var_21 = (min(var_21, ((((15727940786505021733 ? var_16 : 37398))))));
                        }
                    }
                }
            }
        }
    }
    var_22 = (((var_7 ? (37394 & var_13) : (~220))));

    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        arr_13 [i_4] = (var_0 & var_1);
        var_23 = (((((0 ? ((-(arr_7 [i_4] [12] [i_4]))) : 1))) ? 37400 : -1145));
        var_24 = 1;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        arr_17 [i_5] [i_5] = -31862;
        arr_18 [6] = (arr_3 [i_5]);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    arr_26 [i_5] [i_6] [i_6] = var_2;
                    var_25 = -31887;
                    arr_27 [i_5] [i_5] [2] = var_8;
                }
            }
        }
    }
    for (int i_8 = 2; i_8 < 17;i_8 += 1)
    {
        var_26 |= ((+(((~31888) ? ((-31862 | (arr_8 [i_8] [19]))) : (arr_9 [i_8] [i_8] [i_8] [i_8] [i_8])))));

        for (int i_9 = 1; i_9 < 16;i_9 += 1)
        {
            arr_35 [12] [i_8] [i_9] = (min((((-(arr_30 [i_8])))), var_9));
            arr_36 [i_8] = (max(var_11, (arr_29 [i_8])));
        }
    }

    /* vectorizable */
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                {
                    var_27 = ((-6719 ? (arr_2 [i_10] [i_11]) : var_7));
                    /* LoopNest 2 */
                    for (int i_13 = 3; i_13 < 10;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 11;i_14 += 1)
                        {
                            {
                                var_28 = (arr_47 [i_11] [i_11] [i_12]);
                                arr_52 [i_14] [i_11] [i_12] [i_11] [i_10] = -61;
                            }
                        }
                    }
                    arr_53 [i_11] [i_11] = (arr_41 [i_11] [8] [i_12]);

                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        var_29 = ((-82 ? 16380 : var_5));
                        var_30 = var_1;
                        var_31 = 1023;

                        for (int i_16 = 2; i_16 < 8;i_16 += 1)
                        {
                            var_32 *= (((arr_45 [i_15] [i_11] [i_12]) > -31852));
                            var_33 = var_11;
                            var_34 = -61;
                        }
                        for (int i_17 = 0; i_17 < 12;i_17 += 1)
                        {
                            var_35 |= var_5;
                            arr_62 [i_10] [i_11] [i_11] [i_15] [i_17] = ((var_15 * (arr_49 [i_11] [i_11] [i_15] [i_11])));
                        }
                        for (int i_18 = 1; i_18 < 10;i_18 += 1)
                        {
                            var_36 = (((arr_28 [i_10]) >> 1));
                            var_37 -= var_15;
                        }
                    }
                    var_38 = var_9;
                }
            }
        }
        var_39 = ((var_11 ? (-127 - 1) : 14402));
        arr_66 [i_10] = 31897;
    }
    #pragma endscop
}
