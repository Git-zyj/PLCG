/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (~-105)));
    var_18 = (min(((min(var_10, var_10))), (((max(15002, 678974984))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = (min(var_19, var_16));

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    arr_6 [i_0] [i_0] [i_0] [i_0] = (min(var_15, var_6));
                    arr_7 [i_2] [i_0] [i_0] = (((((126 ? (min(43, 17431159709918387090)) : ((min(var_10, var_16)))))) ? 43 : var_1));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 = var_5;
                                var_21 = (((1 * var_2) ? ((-11271 ? 65512 : var_11)) : ((-(arr_12 [i_0 - 1] [i_0 - 3] [i_0] [i_0 - 1] [i_0 - 4])))));
                                var_22 = (max(var_22, ((max(var_7, ((var_7 ? var_6 : (((65535 ? 14 : var_13))))))))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_23 += ((-1269631443 ? (-2147483647 - 1) : -4925261978234976722));
                    var_24 = (max(((1 ? (arr_9 [i_0 - 4] [i_0] [i_0] [i_0 + 3]) : ((4294967267 ? 213 : var_1)))), (var_12 % var_11)));
                    arr_16 [i_0] [i_0] [i_0] = (max(0, -11280));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_22 [i_0] = (((((((var_11 ? var_12 : 2305843009205305344))) ? ((var_11 ? var_4 : var_15)) : var_3)) % ((min((((arr_5 [i_1] [i_5] [i_7]) % 2047)), (max(-891840642, 255)))))));
                                arr_23 [i_0 - 3] [i_0] [i_5] [i_6] = (var_3 * 213);
                            }
                        }
                    }
                    var_25 &= ((var_10 ^ 30) ? ((-43 ? (((max((arr_21 [14] [18]), var_9)))) : (min(-2151266085220032478, -2048)))) : (max((arr_8 [i_0] [1] [i_0] [1]), (arr_20 [14] [14] [i_1 + 1] [i_1 - 1] [i_1] [i_1]))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    var_26 = (min(var_26, ((var_15 == (arr_13 [i_0] [i_0 + 3] [0] [8])))));
                    var_27 = var_10;
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 17;i_10 += 1)
                        {
                            {
                                var_28 = ((~(arr_24 [i_0] [i_0] [i_9 + 1] [i_10 + 2])));
                                arr_33 [i_0] [i_10] = (((((1 ? 1 : 206))) ? ((var_5 ? var_13 : 2384)) : var_11));
                                var_29 = (!33);
                                var_30 = var_9;
                            }
                        }
                    }
                    arr_34 [i_0] [i_0] [i_0] = ((((135 && (arr_27 [i_0]))) ? (arr_27 [i_1]) : -136));
                }
                /* vectorizable */
                for (int i_11 = 3; i_11 < 18;i_11 += 1)
                {
                    var_31 &= (((arr_8 [i_0 + 1] [i_0 - 3] [i_0 - 3] [4]) ^ var_3));
                    var_32 *= ((((var_16 << (((arr_8 [13] [i_1 - 1] [i_1] [i_0]) - 9068321556300125605)))) - var_4));
                    var_33 = ((5677 - (var_11 * 0)));
                    arr_37 [i_0] = -1469078250;
                }
                arr_38 [0] [0] |= (((((0 ? 1 : 578088667)))));
            }
        }
    }
    #pragma endscop
}
