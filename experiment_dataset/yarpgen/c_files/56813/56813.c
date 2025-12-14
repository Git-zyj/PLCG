/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (min((((max(1, var_8)) - ((var_1 ? var_1 : var_1)))), var_1));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1 - 1] [i_2] [i_0] = (((!(-415870870 == var_7))) ? ((0 & (arr_8 [i_0] [i_1 - 2] [i_2] [i_3] [i_3 - 2]))) : ((max((arr_8 [i_0] [i_0 + 2] [i_0 + 1] [i_0] [i_0]), 117))));
                            var_13 *= var_1;
                            var_14 += (((((arr_4 [i_2] [i_1 + 2] [i_1]) && var_3)) && ((((var_3 || var_11) ? (arr_3 [i_3 - 2]) : var_3)))));
                            var_15 = ((var_11 ? (min(var_4, var_3)) : (((((arr_10 [i_1 + 1] [i_2]) == var_7))))));
                            var_16 = (arr_5 [i_0] [i_2] [i_0]);
                        }
                    }
                }
                arr_12 [i_0] = ((~(((-1007875208 / var_1) * var_3))));
                var_17 += (min(((var_2 ? (arr_8 [i_1 + 1] [i_1] [i_1 + 2] [i_1 + 2] [i_1]) : var_6)), (((var_6 != (max((arr_3 [i_0 - 1]), var_11)))))));
                arr_13 [i_1 - 2] [10] [i_0] &= ((~(arr_9 [2])));
            }
        }
    }

    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {

        for (int i_5 = 1; i_5 < 11;i_5 += 1)
        {
            var_18 += (arr_19 [i_5] [i_5 - 1] [i_5 + 2]);
            var_19 = (max(var_19, ((max(var_3, -var_2)))));
            var_20 = (-((-(((arr_19 [i_4] [1] [5]) ? (arr_10 [19] [i_5]) : 21)))));
            var_21 = (!2147483647);
            var_22 = ((var_5 ? -var_7 : (arr_0 [i_5 + 1])));
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {

            /* vectorizable */
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                var_23 = (min(var_23, ((((arr_17 [i_4]) ? (arr_17 [i_6]) : 0)))));
                var_24 = (arr_6 [i_4] [i_6]);
                var_25 *= 16256;
            }
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 12;i_10 += 1)
                    {
                        {
                            var_26 = (((!((max(var_0, (arr_27 [i_6] [i_6] [2] [i_9])))))));
                            var_27 = ((max(var_5, var_0)));
                            var_28 += ((((min((arr_32 [i_10 - 1] [i_10 - 2] [i_10 - 1] [i_10] [i_10 - 1] [i_10 + 1]), var_8))) ? -var_9 : (((arr_2 [i_10] [i_6] [i_8]) ? (arr_2 [i_10] [20] [i_8]) : var_2))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_29 = -var_4;
            var_30 = ((49264 ? 1 : 4294967284));
            arr_37 [i_11] [i_11] [3] = ((~(arr_36 [i_4] [i_11])));
        }
        var_31 += ((((min(1, -6094577107549188086)))) ? var_10 : var_3);
        var_32 -= ((~(arr_27 [i_4] [i_4] [i_4] [i_4])));
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 10;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 9;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 8;i_14 += 1)
            {
                {
                    arr_47 [i_12] [i_13] [5] [i_14] = max(1729382256910270464, var_7);
                    var_33 = (((!(arr_22 [i_13] [i_14 - 1]))));
                    var_34 -= 49270;
                }
            }
        }
    }
    #pragma endscop
}
