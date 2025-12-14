/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_20 = arr_1 [i_0 - 2] [i_0 - 2];
        var_21 = (max(var_21, ((((((25699 ? 62060 : 18421))) ? (((arr_1 [i_0 + 2] [i_0 + 2]) & (arr_0 [i_0 + 1]))) : 1920)))));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        arr_4 [i_1] = (((arr_0 [i_1 + 1]) ? 43 : ((((62060 ? 65534 : 16599))))));
        var_22 = ((+((22331 ? (48197 + 48928) : 48927))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_23 = ((var_3 ? ((-(arr_7 [i_3] [i_2] [i_4]))) : (((!(arr_7 [i_3] [i_3 + 2] [i_4]))))));
                    var_24 -= ((((max((arr_5 [i_3]), (arr_1 [i_3] [i_3 + 2])))) || ((!(arr_7 [8] [i_3 + 2] [i_4])))));
                    arr_12 [i_2] [i_3] [i_3] [3] = (max((arr_8 [i_2] [i_2]), (((arr_11 [i_3] [i_3]) * (arr_0 [i_3 + 1])))));
                    arr_13 [i_2] [i_2] [i_3] [i_2] = arr_3 [11] [i_3 + 3];
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    arr_20 [12] [i_2] [i_2] [i_5] = ((!(((62043 ? 65533 : (arr_11 [i_5 + 1] [i_5]))))));
                    var_25 = 60359;
                    arr_21 [i_5] [i_5] [i_5] = ((((6460 + ((59067 ? (arr_1 [i_2] [21]) : (arr_17 [i_5] [i_5] [i_5]))))) + (arr_6 [i_6])));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                arr_28 [i_2] [i_2] [i_5] = (((arr_22 [i_5 + 3] [i_5] [i_5] [i_7]) ? (4639 & 62022) : (arr_22 [i_5 + 2] [i_5 + 3] [i_5 + 2] [i_8])));
                                var_26 ^= ((-((16383 ? var_12 : 6447))));
                                var_27 = (((~var_19) ? ((65532 ? 65515 : 62043)) : (((!(arr_27 [i_5] [8] [i_5] [7] [i_5]))))));
                            }
                        }
                    }
                }
            }
        }
        var_28 += ((((((((arr_11 [i_2] [4]) ? (arr_3 [i_2] [i_2]) : 65521)) & ((65529 << (var_11 - 52923)))))) ? (((((arr_5 [i_2]) ? 59067 : 10191)))) : (arr_7 [0] [i_2] [i_2])));

        for (int i_9 = 4; i_9 < 11;i_9 += 1)
        {
            arr_31 [i_2] [i_2] = ((~((0 ? ((65527 ? (arr_24 [i_2] [i_2] [i_9] [i_2]) : var_12)) : -65530))));
            arr_32 [i_2] [i_9] = (((arr_0 [i_2]) != ((16384 ? (arr_8 [i_2] [i_9 - 1]) : 3492))));
        }
        arr_33 [i_2] = (min(((max(6654, (min(65533, 60517))))), (min((arr_26 [i_2] [i_2] [i_2] [i_2] [i_2]), ((25677 ? 0 : 55493))))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        var_29 = ((!(!var_2)));
        var_30 = (max(var_30, 18974));
    }
    var_31 = var_3;
    #pragma endscop
}
