/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_6;

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_16 = ((~((~((348455270 ? -7456412208298898085 : var_7))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 = (((arr_1 [i_1] [i_0]) - (((~var_3) ? (((arr_5 [i_0] [i_0]) ? 34 : var_7)) : 9001))));
                    arr_10 [i_0 + 1] [3] [i_1] [i_0] = ((!((((var_5 - 9019) - (arr_7 [i_2] [3] [i_2]))))));
                    arr_11 [i_0] [i_1] [i_0] [i_2] = 65535;
                    var_18 = ((~(!56534)));
                }
            }
        }
        var_19 = ((((!((max(var_1, 9001))))) ? ((((arr_9 [i_0] [i_0] [i_0 - 1]) & (arr_8 [i_0] [i_0] [i_0] [i_0])))) : var_5));
        var_20 = ((-(min(((max(var_6, 2267772231))), (arr_0 [i_0 + 2] [i_0])))));
        arr_12 [i_0] = ((((arr_1 [i_0 - 1] [i_0]) - 9001)) - ((-(arr_8 [i_0 - 2] [i_0] [i_0] [i_0]))));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_21 = ((arr_17 [i_3]) ? (max((max(var_12, var_4)), ((max(56534, -31034))))) : (((max((arr_24 [i_7] [7] [i_7] [i_7] [i_7] [i_7] [i_7 - 3]), (arr_24 [i_7 + 1] [i_7 + 2] [i_7] [i_7] [i_7 - 3] [i_7 + 2] [i_7 - 1]))))));
                                var_22 = var_0;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_23 = var_8;
                                arr_29 [i_4] [i_8] = arr_21 [i_4];
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_10 = 4; i_10 < 14;i_10 += 1) /* same iter space */
                    {
                        var_24 += (3266868641 - 56548);

                        for (int i_11 = 3; i_11 < 16;i_11 += 1)
                        {
                            var_25 = ((~(arr_32 [i_11] [0] [i_11 + 2] [i_11 - 1] [i_11])));
                            var_26 = (min(var_26, (arr_27 [i_3] [2] [i_5] [i_10] [i_4])));
                            arr_34 [i_5] [i_5] = 1187515988;
                            arr_35 [i_3] [i_4] [i_5] [i_10 + 4] [i_11] = (~56534);
                        }
                        for (int i_12 = 2; i_12 < 17;i_12 += 1)
                        {
                            var_27 ^= 1169581664;
                            arr_38 [i_3] [i_10] [i_5] [i_10 + 4] [i_12 - 2] [i_5] = ((-((56534 & (arr_17 [i_5])))));
                            var_28 ^= (((((-(arr_28 [i_4] [i_4] [i_4] [i_4] [i_4])))) - (((arr_23 [i_3] [i_3]) & (arr_36 [i_3] [i_4] [i_5] [i_10] [i_5])))));
                            var_29 = (max(var_29, (arr_32 [i_3] [i_12] [i_5] [i_10] [i_12])));
                        }

                        for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
                        {
                            var_30 = (max(var_30, var_7));
                            var_31 = (((arr_32 [i_5] [i_5] [i_5] [i_10 - 4] [i_10]) - var_11));
                            arr_43 [i_10] [i_4] = ((var_7 & (~3125385654)));
                        }
                        for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
                        {
                            var_32 = (max(var_32, (((var_4 ? 1169581648 : 1)))));
                            arr_48 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (9019 - var_4);
                            var_33 = var_11;
                        }
                        var_34 = (max(var_34, (((~(((arr_44 [12] [12] [i_5] [i_5] [i_5]) & 1169581683)))))));
                    }
                    /* vectorizable */
                    for (int i_15 = 4; i_15 < 14;i_15 += 1) /* same iter space */
                    {
                        arr_51 [i_3] [i_4] [i_5] [i_15] = var_3;
                        var_35 = (((((1 - (arr_40 [8] [i_5] [i_5] [i_4] [i_4])))) ? ((var_11 ? (arr_50 [i_3] [i_4] [i_5]) : (arr_49 [i_4]))) : var_8));
                    }
                }
            }
        }
        arr_52 [i_3] [i_3] = ((1280 ? 3266868643 : ((~((var_12 ? var_7 : var_0))))));
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 18;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 18;i_17 += 1)
            {
                {
                    arr_59 [16] [i_16] [i_17] &= (max((((var_2 - var_14) - 14386)), 17274));
                    var_36 = ((~(((arr_17 [i_3]) ? 1 : (arr_42 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 18;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 18;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 18;i_20 += 1)
                {
                    {
                        var_37 |= ((((!((min((arr_18 [i_3] [i_3]), 162))))) ? (((-32767 - 1) ? (arr_50 [i_18] [1] [i_18]) : ((1169581687 ? var_8 : (arr_33 [0] [i_19] [3] [i_19] [i_20]))))) : (arr_26 [i_3] [3] [i_3] [i_3] [i_3] [i_3])));
                        var_38 |= (~3266868635);
                    }
                }
            }
        }
    }
    var_39 = (((max((min(var_8, var_13)), (var_12 - var_6))) - ((max(((-5568060711587436198 ? 0 : var_6)), var_6)))));
    #pragma endscop
}
