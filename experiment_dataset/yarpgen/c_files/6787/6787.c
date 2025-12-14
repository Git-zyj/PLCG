/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_14 ^= (max(9223372036854775808, 9223372036854775813));
                        var_15 *= (max(((~(arr_0 [i_3 - 1]))), 1));
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        arr_13 [i_0] [i_1 + 1] [i_2] [i_4 - 1] [i_4] [i_0] = (((123 / -120) ? (max((((((arr_3 [i_0]) + 9223372036854775807)) >> 1)), ((2499538269422628413 ? (arr_3 [i_4]) : var_13)))) : (arr_8 [i_2] [i_2] [i_2] [i_2])));
                        var_16 = ((~(max(0, ((2499538269422628413 >> (((arr_6 [i_0] [i_4 - 1]) + 125))))))));
                    }

                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        arr_16 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 1] = 1;

                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            arr_21 [i_6] [i_1] [i_2] [i_5] [i_6] = (arr_3 [i_6]);
                            var_17 += (max(-122, 32));
                            arr_22 [i_0] [i_6] [i_2] [i_5 + 1] [i_6] = (max((max(9223372036854775790, (min(9223372036854775805, (arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]))))), (((((arr_12 [i_0] [i_1] [i_2] [i_6]) & (arr_5 [i_2] [i_6]))) ^ 111))));
                        }
                        for (int i_7 = 2; i_7 < 21;i_7 += 1)
                        {
                            arr_25 [i_0] [i_1 + 1] [i_2] [i_5] [i_7] = (((max(14690404319191323410, 42693))) ? (min(18446744073709551615, 524287)) : (((max(0, (arr_15 [i_2] [i_7 - 1]))))));
                            var_18 ^= (max((~var_3), ((min(1, 1)))));
                            arr_26 [i_0] = (max(((1 * (((var_2 <= (arr_9 [i_0] [i_1] [i_1] [i_5 + 1] [i_7])))))), (arr_6 [i_0] [i_1])));
                            arr_27 [i_0] [i_1] [i_2] [i_5] = (max((max((arr_7 [i_7] [i_7] [i_7 + 1]), ((2182121940 ? (arr_23 [i_1 - 1] [i_2] [i_5]) : 1)))), (max(-4, (arr_12 [i_0] [i_1 + 1] [i_2] [i_7 + 2])))));
                        }
                        var_19 &= var_3;
                        var_20 = (((arr_11 [i_0] [i_1] [i_1 + 1] [i_1]) - (((((arr_17 [i_0] [i_1] [i_2] [i_5] [i_5 - 1]) ? var_7 : var_4)) << (3244767776943195643 - 3244767776943195605)))));
                        arr_28 [i_0] [i_0] [i_0] [i_1] [i_2] [i_5 - 1] = var_7;
                    }
                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        arr_32 [i_0] [i_1] [i_2] [i_2] [i_2] [i_8] = (((16 + var_5) * 0));
                        arr_33 [i_1] [i_2] [i_8] = ((((max((-127 - 1), 1))) * ((min(-120, 1)))));
                        var_21 = (((524282 > (((arr_2 [i_0]) - (arr_6 [i_0] [i_1 - 1]))))));
                    }
                    for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                    {
                        arr_37 [i_0] [i_1] [i_2] [i_9] = (((((max(1, 4)))) && (((((max(var_13, (arr_4 [i_0])))) ^ (~1))))));
                        var_22 &= var_7;
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                    {
                        arr_40 [i_0] [i_1 - 1] [i_2] [i_10] = ((((1 ? (arr_12 [i_0] [i_0] [i_1] [i_1 - 1]) : var_12)) * (((1 ? (((!(arr_12 [i_0] [i_1 + 1] [i_2] [i_10])))) : 1)))));
                        var_23 += 24;
                    }
                }
            }
        }
    }
    var_24 = (((((1 ? var_1 : 1))) * 1));
    #pragma endscop
}
