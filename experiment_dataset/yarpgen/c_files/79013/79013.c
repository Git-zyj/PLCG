/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 = var_4;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = var_1;
                                var_16 = (min((((!(arr_12 [i_1 + 2] [i_3] [i_3] [i_3] [i_4] [i_4] [i_4])))), var_0));
                            }
                        }
                    }
                    var_17 = max((((55524 && (arr_2 [i_1 - 1] [i_2 - 1])))), var_2);
                    var_18 = ((-(min(238, var_11))));
                }
            }
        }
        arr_13 [2] = (arr_9 [i_0] [0] [i_0] [i_0]);
        var_19 ^= 12002;
        arr_14 [i_0] = ((((1041094457 && ((min(33554432, (arr_4 [i_0] [i_0])))))) ? var_6 : (min((arr_9 [i_0] [i_0] [i_0] [i_0]), ((var_7 ? var_3 : var_4))))));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_20 &= (((((-(arr_16 [22] [i_5])))) ? (arr_17 [20] [20]) : (arr_15 [i_5])));
        var_21 = ((4294967295 << (var_11 - 19339)));
        var_22 = max((arr_16 [i_5] [i_5]), 2147483647);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_23 = (arr_11 [i_6] [i_6] [i_6] [i_6] [i_6] [10]);
        var_24 = (var_5 < var_13);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        arr_22 [i_7] = ((-1770769503 ? var_12 : -1));
        arr_23 [i_7] = ((12204 + (var_9 / 44148)));
        var_25 = ((var_11 ^ (arr_15 [i_7])));
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            {
                arr_30 [15] [i_9] [15] = ((((min(20, 1770769502))) ? (((arr_28 [i_8] [i_9]) ? (arr_24 [i_8]) : var_4)) : ((((var_4 < (arr_25 [22] [i_9])))))));
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 21;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        {
                            arr_36 [i_8] [i_8] [i_8] = (var_3 ^ var_12);
                            var_26 = (max(var_26, (((((((arr_27 [i_10 + 2] [i_10 + 1] [i_10]) << (((arr_27 [i_10 + 2] [i_10 - 1] [i_10]) - 62))))) ? (((max(969159042, var_11)) + (var_1 != var_8))) : var_2)))));
                        }
                    }
                }
                arr_37 [i_8] [i_9] &= ((((var_13 < (arr_15 [i_8]))) ? ((((max(var_11, var_13))) | var_6)) : var_2));
            }
        }
    }
    #pragma endscop
}
