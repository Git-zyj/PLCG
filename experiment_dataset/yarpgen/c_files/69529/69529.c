/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= 127;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_20 += -18792;
                var_21 += (((var_4 && var_7) ? (130 || 3725963829172724866) : (((arr_2 [i_0] [15] [15]) ? var_4 : 0))));

                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    var_22 = (((min((arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]), (arr_4 [i_2 + 1] [i_2 - 1] [i_2 - 1])))) && ((127 >= (arr_4 [i_2 + 1] [i_2 - 1] [i_2]))));
                    var_23 = (max(var_23, (((((max((arr_4 [i_2 - 1] [i_2 + 1] [i_2 + 1]), var_0))) << (((var_7 + 118) - 7)))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_24 = (min(var_24, ((((arr_5 [i_2 - 1] [i_3]) >> (arr_0 [2] [2]))))));
                        var_25 = (min(var_25, (arr_8 [i_2 + 1] [i_2 - 1] [24])));
                        arr_11 [20] [i_2] [i_2] [9] = (((arr_1 [i_2 + 1]) || (-31736 / 144115187002114048)));
                    }
                    for (int i_4 = 2; i_4 < 24;i_4 += 1)
                    {
                        arr_16 [i_0] [i_1] [i_2 - 1] [i_2] = var_11;
                        arr_17 [i_2] [i_2] [19] [i_4 + 1] = (min(((-2036830028 < ((0 ? -121 : 637490348)))), var_1));
                        var_26 = ((~(arr_3 [i_2] [i_2 + 1])));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_27 += (76 && (var_15 - 115));
                            arr_24 [i_0] [i_1] [i_2] [i_2] [i_5] [i_5] [i_6] = var_9;
                            arr_25 [i_6] [i_2] [13] [i_2] [i_0] = 101;
                            arr_26 [17] [i_1] [i_2] [i_5] [9] [i_2] [i_0] = ((~(arr_22 [i_2] [i_2 - 1] [i_2 + 1])));
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            arr_29 [i_1] [i_2] [i_2] [i_2] = 1;
                            arr_30 [i_0] [i_2] [i_2] [i_5] [i_7] [i_2] = var_8;
                            var_28 = (min(var_28, (arr_15 [i_0])));
                            arr_31 [i_2] [i_2] [i_5] = (var_7 && 120);
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_34 [12] [12] [i_2 - 1] [i_2 - 1] [i_2] = ((var_5 & (1023 + -115)));
                            var_29 = (arr_28 [i_0] [7] [7] [i_5] [i_8] [14]);
                            arr_35 [i_2] [i_2] [i_2] [i_2] = var_18;
                            var_30 -= -2036830028;
                        }
                        arr_36 [i_0] [i_1] [i_2] [i_5] = 154;
                        var_31 = (max(var_31, ((((arr_23 [i_5] [i_2 + 1] [i_2 - 1] [i_2] [i_2 + 1]) ? (arr_27 [i_0] [i_0] [i_0] [i_1] [i_2] [i_5]) : 18446744073709551613)))));
                    }
                }
                arr_37 [i_1] = var_17;
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 22;i_10 += 1)
                    {
                        {
                            arr_43 [i_0] [i_9] = (arr_2 [i_1] [1] [i_1]);

                            for (int i_11 = 0; i_11 < 25;i_11 += 1)
                            {
                                var_32 = (((var_10 || (((var_15 * (arr_5 [i_0] [i_0])))))));
                                arr_46 [i_10] = ((((min((arr_13 [1] [i_0] [i_9 - 1] [i_9 - 1] [i_10 + 3] [i_10 - 1]), (arr_13 [0] [i_0] [i_9 + 1] [i_9 + 1] [i_10 - 1] [i_10 + 3])))) ? (((arr_13 [24] [24] [i_9 + 1] [i_9 + 1] [i_10 + 3] [i_10 + 1]) ? (arr_13 [20] [20] [i_9 + 1] [i_9 + 1] [i_10 - 1] [i_10 + 1]) : (arr_13 [8] [8] [i_9 + 1] [i_10] [i_10 - 1] [i_10 + 2]))) : (var_4 + 7)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_33 = var_13;
    var_34 ^= 1023;
    #pragma endscop
}
