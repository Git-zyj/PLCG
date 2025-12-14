/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((!var_6) ? (((6698995033128274492 + var_12) ? var_2 : var_3)) : var_10));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_0] [i_1] = var_5;
                    var_14 = (-var_3 > var_5);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_0 - 2] [i_1] [i_2] [i_1] [i_0 - 2] = (arr_7 [i_2] [i_1] [i_2]);
                                var_15 = var_7;
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        arr_17 [i_1] [i_1] = 70;
                        var_16 = (min(var_16, (((~(arr_15 [i_0] [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_0 - 2] [5]))))));
                        var_17 = 71;
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_1] = (((~3786052788133226878) ? 44300 : ((63 << (((arr_4 [i_0] [i_0 - 1]) - 50241))))));
                        arr_23 [i_1] [i_1] [i_2] [9] [i_1] = (!var_9);
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        var_18 = (((((arr_24 [i_0] [i_0] [i_0] [i_2] [i_0] [i_7]) - var_11))) ? (arr_7 [i_0 - 2] [i_1] [i_2]) : (((~(((arr_12 [i_2] [12] [i_1] [i_2] [11]) ? var_10 : var_8))))));
                        arr_26 [i_0 + 2] [i_1] [i_1] [i_1] = (arr_10 [i_0] [i_0] [1] [7] [i_0 - 1]);
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_19 += (((-(arr_0 [i_0 - 1]))));
                            var_20 = var_8;
                            var_21 = ((-(((!((((arr_28 [i_1]) ? (arr_4 [i_8] [i_1]) : 77))))))));
                            var_22 = ((-(((arr_13 [i_0] [i_0] [i_0] [i_0 + 2] [i_0 - 1]) ? (arr_13 [14] [i_0] [i_0] [i_0 - 2] [i_0 - 1]) : (arr_13 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0] [i_0 - 1])))));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_23 = (min((((arr_33 [i_1]) % 61)), ((-((18446744073709551615 ? var_6 : 14967241430474114163))))));
                            arr_35 [i_0] [i_1] [i_2] [i_8] [i_8] = (max((min(var_11, 0)), (arr_1 [1] [i_1])));
                            var_24 = ((~(((arr_3 [i_0 - 1] [i_0 + 2] [i_0]) ? (arr_3 [i_0 + 2] [i_0 + 2] [i_0 + 2]) : (arr_3 [i_0 - 2] [i_2] [2])))));
                            var_25 += (((arr_10 [i_0 + 2] [i_0 + 2] [7] [10] [i_10]) ? var_5 : (((((!var_6) < (!-62)))))));
                            arr_36 [i_10] [i_10] [i_1] [i_10] [i_10] = ((~(((arr_31 [i_0] [i_0] [i_2] [i_8] [i_0 - 2] [5] [i_10]) << (((arr_34 [i_0] [4] [i_2] [i_8] [i_0 - 2]) - 29970))))));
                        }
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            var_26 = arr_20 [i_0 + 2] [i_0] [0] [i_0] [i_0];
                            var_27 = (arr_34 [i_0] [1] [i_2] [i_0] [i_11]);
                        }
                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            var_28 = ((~((-(arr_41 [i_8])))));
                            var_29 = ((((((((var_3 - (arr_12 [i_2] [i_2] [i_1] [i_8] [i_8])))) ? -6698995033128274508 : (var_8 | 65535)))) || 54258));
                            var_30 = var_4;
                        }
                        var_31 = (~15376626089867176460);
                        var_32 -= ((-(!6698995033128274492)));
                        var_33 = ((32 + ((-(arr_2 [i_0 + 2])))));
                    }
                    arr_42 [i_1] [i_1] [i_1] [i_1] = -1272203862;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 3; i_13 < 15;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {
            {

                for (int i_15 = 0; i_15 < 19;i_15 += 1) /* same iter space */
                {
                    var_34 = (arr_49 [i_14]);
                    var_35 = ((((max(var_8, -94))) + -1));
                    var_36 = (((((((128192043 / (arr_46 [i_15] [i_14] [i_13])))) ? (arr_44 [i_13] [i_14]) : var_7)) | (((((!63) < ((-(arr_49 [i_13 + 2])))))))));
                    arr_50 [i_15] [i_14] [i_13] [i_13] |= ((~(((var_7 > var_7) ? (((arr_45 [i_13 - 2] [0] [i_13 + 2]) ? var_5 : var_10)) : (((min((arr_43 [i_14]), 16382))))))));
                }
                for (int i_16 = 0; i_16 < 19;i_16 += 1) /* same iter space */
                {
                    var_37 = (arr_47 [i_13] [i_13]);
                    var_38 ^= 44293;
                    arr_53 [i_14] |= ((~(max(-25, (((6698995033128274502 ? (arr_49 [i_14]) : 3877657863)))))));
                    var_39 = (!1589233099);
                }
                var_40 = ((((((((-(arr_46 [i_14] [13] [i_13])))) ? -var_11 : ((var_6 ? (arr_44 [i_14] [i_14]) : (arr_43 [i_13 + 4])))))) ? (44275 - var_1) : (max(var_10, -3))));
            }
        }
    }
    var_41 = (~var_3);
    #pragma endscop
}
