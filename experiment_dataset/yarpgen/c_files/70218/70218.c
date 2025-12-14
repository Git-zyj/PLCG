/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] = ((~((~(((arr_7 [i_0] [i_1] [i_0]) ? 127 : var_19))))));
                    arr_9 [i_0] [i_1] [i_1] [i_1] = (max((arr_5 [i_2 + 1] [i_2] [i_2]), (((arr_7 [i_2 + 1] [i_2] [i_0]) ? (arr_7 [i_2 + 1] [1] [i_0]) : 58720256))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_20 -= ((-(max(((-(arr_10 [i_3] [0]))), 8))));
        arr_13 [i_3] = var_14;
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_21 = (((((-(-127 - 1)))) ? -124 : 26303));
        arr_16 [i_4] [i_4] = ((-(((arr_6 [i_4]) * (((!(arr_3 [i_4] [i_4]))))))));
        var_22 = ((((-(arr_6 [i_4]))) | (var_11 | 37170)));
    }
    /* vectorizable */
    for (int i_5 = 4; i_5 < 9;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 9;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 9;i_9 += 1)
                        {
                            {
                                var_23 += ((~((-12 ? (arr_19 [i_5] [i_6] [i_5]) : 2968034870))));
                                var_24 = var_3;
                            }
                        }
                    }
                    arr_32 [5] = (((arr_15 [i_7]) + (~var_18)));
                }
            }
        }
        arr_33 [i_5] = (27247 ? (~4294967282) : (arr_4 [i_5] [i_5]));
        arr_34 [i_5] = (((var_18 & (arr_27 [i_5] [i_5] [i_5 + 1] [i_5]))));
        arr_35 [i_5 - 1] = (((arr_27 [i_5] [i_5 - 2] [i_5] [i_5]) <= (arr_11 [i_5 + 1])));
        arr_36 [i_5 + 1] [i_5] = ((((!(arr_18 [6] [i_5])))));
    }
    #pragma endscop
}
