/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((max(((1046528 ? 0 : var_4)), (var_12 % var_4)))) ? (4880694925127515295 != var_3) : var_11));
    var_15 = ((-(((var_11 ? 1046531 : -700952046)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    arr_9 [i_2] [i_2] = min(3396692639402362785, (((-(arr_0 [i_2 - 3] [i_2 - 3])))));
                    arr_10 [i_0] [i_2] = (((-var_5 ? ((min(var_9, var_10)) : ((var_2 ? var_4 : var_9))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_2] [i_2] [i_1] [i_3 + 2] [i_4] = ((+((var_13 >> (((arr_14 [i_2 + 1] [i_2 - 2] [i_3 + 1] [i_4]) + 2388))))));
                                var_16 = (min(5207442598289695455, (((var_5 ? (arr_6 [i_2 - 3] [i_2 - 3] [i_3 + 3]) : var_8)))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = (((max(4498296719227898358, (arr_16 [12] [3] [i_2] [i_2] [i_3 + 2]))) != (((var_2 ? var_6 : (arr_16 [i_3] [8] [i_2] [8] [i_3 + 2]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_2] = ((-var_1 ? (max((arr_6 [13] [i_2] [i_2 - 2]), 30022)) : (!var_12)));
                                var_17 = (min(var_17, (arr_3 [i_5] [i_5])));
                                arr_26 [i_0] [i_0] [i_0] [i_5] [i_2] = (((((((var_1 ? (arr_1 [i_5 + 3] [i_6]) : var_7)) - (((var_5 ? 1046548 : -1046533)))))) ? var_3 : (((arr_6 [i_2 - 1] [i_2 - 3] [i_2 - 1]) ? 156 : var_12))));
                                arr_27 [i_2] [i_1] [i_2] [i_5] [i_6] = 1;
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    var_18 += (max(var_3, ((((((var_11 + 2147483647) >> (var_1 - 3329773414))) == (arr_24 [i_0] [i_0] [i_0]))))));
                    arr_30 [i_0] [i_0] [i_0] [i_0] |= var_6;
                    var_19 ^= (max((((-(!var_11)))), (max(-51, (arr_4 [i_0])))));
                }
                for (int i_8 = 2; i_8 < 14;i_8 += 1)
                {
                    arr_35 [i_0] [i_0] [4] [i_0] = (arr_1 [i_8] [i_8 - 1]);
                    arr_36 [i_0] = var_6;
                    var_20 = var_5;
                    arr_37 [i_0] [7] [i_0] = (min((arr_15 [i_0] [i_0] [i_8]), (min((-127 - 1), var_13))));
                }
                arr_38 [i_0] [13] = -4498296719227898359;
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 14;i_10 += 1)
                    {
                        {
                            var_21 = ((~((((min(var_13, var_1))) ? 1 : ((-1046519 ? var_1 : (arr_2 [i_1])))))));

                            for (int i_11 = 0; i_11 < 15;i_11 += 1)
                            {
                                var_22 = (max(var_22, 1046528));
                                var_23 = ((max(0, 5207442598289695455)));
                                var_24 += 99;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
