/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (0 > -14);
    var_17 = (min((max((124 * var_15), var_8)), (min(var_8, var_12))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 -= ((((~var_8) | (min((arr_1 [i_1] [i_1]), var_9)))) & (((124 ? var_8 : (arr_3 [i_0] [i_1] [i_0])))));
                var_19 = (min(var_19, 16));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_20 = (min(var_20, ((((min(38, (arr_6 [i_0] [i_1]))))))));
                    var_21 -= (max((((125 + (!var_3)))), ((~(arr_6 [i_1] [i_2])))));
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    var_22 = (218 != -12);
                    var_23 = (min(var_23, (-9223372036854775807 - 1)));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    arr_13 [i_4] = (((~var_9) < 12));
                    var_24 = ((7 ? var_5 : (38 + 4)));
                    arr_14 [i_0] [8] [i_1] [i_4] = ((-1 ? ((var_13 << (((arr_12 [6] [i_1] [i_0] [i_0]) + 311065303)))) : ((((arr_6 [i_0] [i_1]) ? 10 : 3830391178)))));
                }
                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_25 *= -7;
                        var_26 += (((((((arr_17 [i_0] [i_1] [i_5 + 2]) ? var_0 : (arr_17 [i_0] [i_0] [i_5 + 1]))) + 2147483647)) >> (((((arr_11 [i_1]) ^ var_0)) - 57731012319858813))));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            var_27 = (min(var_27, (((var_6 ? (arr_18 [i_5 - 1] [i_5] [i_5 - 1] [i_5 + 1] [i_0]) : (arr_11 [i_6]))))));
                            arr_23 [i_0] [i_7] [i_7] [1] [i_7] [i_0] [3] = -1659556711;
                        }
                        for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                        {
                            arr_26 [i_8] [i_6] [1] [i_1] [i_8] = ((((var_10 + ((min(218, -654848955))))) >= ((min(((var_15 ? -20408 : 10)), (var_0 < var_4))))));
                            var_28 |= var_12;
                            var_29 ^= arr_5 [i_8] [i_1] [i_8];
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                        {
                            var_30 -= ((((min((arr_9 [i_5 - 1]), (arr_9 [i_5 - 1])))) ? (((arr_9 [i_5 + 1]) ? var_4 : (arr_9 [i_5 + 1]))) : (((6 ? 3151489559684765123 : -6)))));
                            var_31 = (min(var_31, 1732521873));
                        }
                        /* vectorizable */
                        for (int i_10 = 1; i_10 < 9;i_10 += 1)
                        {
                            var_32 = (min(var_32, (~8)));
                            var_33 += ((((((var_0 ? var_11 : var_6)) + 2147483647)) << (((!(arr_28 [i_10]))))));
                            var_34 = (((2147483647 | var_14) < (~var_4)));
                        }
                        var_35 = (min(var_35, ((var_5 * (((min(237, 56))))))));
                    }
                    var_36 = (arr_27 [i_0] [i_1] [i_0] [i_0]);
                    arr_33 [2] [i_1] [i_1] [i_0] = 138;
                }
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 9;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        {
                            arr_38 [i_11] [i_11] [i_11] [i_11] = (-42 <= 195);
                            arr_39 [i_12] [i_11] [i_12] [i_0] [i_0] &= -18446744073709551615;
                            var_37 += (arr_11 [i_1]);
                            arr_40 [i_11] [i_1] [1] [i_1] [i_1] = (min(255, 38));
                            var_38 ^= ((~var_9) - 56);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
