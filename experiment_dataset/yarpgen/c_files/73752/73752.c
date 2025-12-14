/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = arr_2 [i_1] [i_0];
                    var_21 = (max((((arr_3 [i_0]) / 127)), (arr_4 [i_0])));
                    var_22 = (((((var_18 ? 5 : 0))) ? var_8 : ((((175 ? (arr_0 [i_1]) : (arr_0 [i_2]))) - ((12 ? var_14 : (arr_4 [i_0])))))));
                    var_23 = ((((((arr_0 [i_0]) ? ((var_10 ? 103 : 24)) : (var_13 ^ 166)))) ? var_5 : (arr_4 [i_0])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 17;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_24 = (((((128 <= ((min((arr_8 [i_3] [i_3] [i_3]), var_8)))))) | ((((max(161, (arr_14 [i_3])))) ? var_4 : (155 <= var_19)))));
                                var_25 = ((((min(161, 4))) ? ((-((min((arr_14 [i_4 + 1]), (arr_17 [i_3] [i_4] [i_6] [i_6] [i_7] [i_7])))))) : ((max((min(167, 18)), (arr_13 [i_4 + 1] [i_4] [i_4] [i_6 + 1] [i_7 + 1]))))));
                            }
                        }
                    }
                }

                for (int i_8 = 3; i_8 < 17;i_8 += 1)
                {
                    var_26 = min(120, 86);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            {
                                arr_25 [i_3 - 1] [i_4] [i_8] [i_8] [i_10] = 43;
                                arr_26 [i_8 - 3] [i_8 - 3] [i_8] [10] [i_8] = 129;
                                var_27 = ((((((147 ? 224 : var_12)) * var_19)) * (arr_16 [i_10] [i_10] [i_3 - 1] [i_4 - 1] [i_8 - 2])));
                            }
                        }
                    }
                    var_28 = 103;
                }
                for (int i_11 = 2; i_11 < 17;i_11 += 1)
                {
                    var_29 = ((((((min(126, 23))) ? (arr_9 [15] [i_4] [i_11]) : 107)) % (81 || 126)));
                    var_30 = (max(var_30, 61));
                }
                /* vectorizable */
                for (int i_12 = 1; i_12 < 15;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        var_31 = (((arr_30 [5] [i_12 + 3] [i_13]) ? ((169 ? (arr_13 [i_3] [i_3] [i_4 - 2] [i_12 + 3] [i_13]) : 46)) : -73));
                        arr_33 [i_3] [i_3] [i_4] [i_12] [i_13] = ((91 ? 0 : 168));
                        var_32 = ((-((11 ? 43 : (arr_21 [i_3 - 1] [i_4 + 1] [i_12])))));
                        arr_34 [8] [i_4 - 1] [i_4 - 2] [i_4 - 1] [i_4 - 2] [i_13] = (!67);
                    }
                    for (int i_14 = 3; i_14 < 16;i_14 += 1)
                    {
                        var_33 = (130 <= 195);
                        var_34 -= var_5;
                        var_35 = (((arr_7 [i_14 + 2] [i_4 - 1]) - (arr_7 [i_14 - 1] [i_4 - 1])));
                        arr_38 [i_14] = ((~(arr_21 [i_3] [i_3] [i_3])));
                    }
                    for (int i_15 = 1; i_15 < 14;i_15 += 1)
                    {
                        var_36 = (!245);
                        arr_41 [i_3 + 1] [i_3 - 1] [17] [i_15 + 2] [i_4 - 1] = 147;
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 18;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 18;i_17 += 1)
                        {
                            {
                                var_37 = ((var_12 ? (arr_42 [i_3] [i_3 - 1] [i_3] [i_4 + 1] [i_12 + 3] [i_16]) : (arr_10 [i_4 + 1] [i_4 - 2] [5] [i_4 + 1])));
                                var_38 -= (((var_6 - 193) ? var_2 : ((var_3 / (arr_15 [i_12] [i_4] [i_12] [i_16] [i_17])))));
                            }
                        }
                    }
                    var_39 = ((!(arr_7 [i_4 - 2] [i_3 - 1])));
                }
            }
        }
    }
    #pragma endscop
}
