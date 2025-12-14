/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = (min((min(549226181, (-32767 - 1))), ((min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0]))))));
                arr_6 [i_0] [i_1] = var_0;
                var_16 = (min(var_16, (((-2696 ? 43 : (min(549226181, 9223372036317904896)))))));
                var_17 = (min(var_17, 1023670345));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 16;i_3 += 1)
        {
            {
                var_18 += max((((var_4 <= (arr_11 [i_2] [i_2])))), -var_15);
                arr_13 [i_2] [i_3] [i_3] = (min(var_7, ((((var_8 ? -1023670346 : 1023670350)) | ((max(-2696, (arr_7 [i_3]))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_19 += 10083768964841973070;
                            arr_20 [i_2] [i_3] [i_5] [i_3] = ((((max((((0 && (arr_9 [7])))), (((arr_11 [i_2] [13]) ? var_9 : 48601))))) & ((10083768964841973070 << (-310547334 + 310547391)))));

                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                arr_23 [i_2] [i_2] [i_2] [i_3] = (((min((-32767 - 1), 32767)) <= ((((((arr_18 [1] [i_3 - 3] [i_3 - 3] [i_3] [i_3 - 3] [13]) < 2064384))) & (arr_21 [0] [i_2] [i_2])))));
                                var_20 |= 1;
                                var_21 = 102;
                                var_22 *= (((max((arr_15 [2] [i_3 - 3]), -128)) >= var_2));
                            }
                            for (int i_7 = 0; i_7 < 18;i_7 += 1)
                            {
                                var_23 = (min(var_23, ((max((((arr_26 [i_4]) ? (((-20391 ? -8150 : 549226181))) : (min(-33554432, 4294967290)))), var_6)))));
                                var_24 = (min(((((arr_19 [i_2 - 1]) / (arr_15 [i_3] [i_3 - 1])))), 5));
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 1;i_8 += 1)
                            {
                                arr_30 [i_2] [i_2] [i_2 + 1] [6] [i_2 - 1] [i_3] [i_2] = ((var_11 ^ (arr_9 [i_4])));
                                var_25 = ((!(4294967294 == -32764)));
                                arr_31 [i_2 + 1] [i_3] [i_2 + 1] [8] [i_8] = 32745;
                                arr_32 [i_3] [i_3] [i_4] [i_3] [11] [i_4] [i_3] = (arr_19 [i_2]);
                            }
                            for (int i_9 = 3; i_9 < 16;i_9 += 1)
                            {
                                var_26 = max(((min(var_7, var_0))), (max((max((arr_11 [i_5] [i_5]), (arr_11 [i_2] [i_2]))), 32750)));
                                var_27 = ((((max((arr_18 [i_9] [i_9] [i_9] [i_9 - 1] [i_9 + 2] [i_9 - 3]), -549226190))) ? (((!(((1 ? (arr_33 [i_4] [15] [i_4] [i_4] [i_4]) : var_9)))))) : (max(35637, (~27167)))));
                                arr_35 [i_3] [i_3] [i_3] [i_3] = (((max((~-256), (arr_19 [i_3 - 3])))) ? (max(928, -1023670359)) : (max(-32763, -var_11)));
                            }
                        }
                    }
                }
                arr_36 [i_2 - 1] [i_3] = var_2;
            }
        }
    }

    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        var_28 = ((36651 ? 29899 : 549226181));
        arr_39 [5] [5] = ((((max(10083768964841973070, 4294967284))) ? (((min((arr_38 [i_10]), (arr_38 [i_10]))))) : -4294967290));
    }
    #pragma endscop
}
