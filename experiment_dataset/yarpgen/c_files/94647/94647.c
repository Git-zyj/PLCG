/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_20 = (arr_10 [i_0] [i_0] [3]);
                    var_21 += ((~(((arr_4 [i_0] [1] [i_0 - 1]) << (var_12 - 8403319986516727550)))));
                }
            }
        }
    }
    var_22 = var_11;

    for (int i_3 = 3; i_3 < 13;i_3 += 1)
    {
        var_23 &= (max((arr_12 [i_3 + 1] [4]), (arr_12 [i_3 - 1] [10])));
        var_24 |= (min(((~((var_1 ? var_12 : 255)))), (max(((var_19 ? 7873329642729271627 : var_5)), var_17))));
        var_25 = (min(var_25, (max(((((min(var_2, var_18))) ? var_11 : var_11)), (((~(arr_11 [i_3 - 1]))))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_26 -= (var_2 << (((arr_14 [i_4] [i_4]) - 94)));
        var_27 += 56;
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    {
                        var_28 = (((((-(arr_23 [i_6] [i_7 - 3] [i_7 - 3] [11])))) ? ((var_17 ? var_2 : var_6)) : (((arr_24 [i_5] [i_7 - 2] [i_7] [i_8] [i_8] [i_6]) * (arr_22 [i_5] [i_7 - 3] [i_8] [i_8])))));
                        var_29 = (min(var_29, (((max(10573414430980279989, (arr_17 [i_5])))))));
                    }
                }
            }
        }
        var_30 = -18446744073709551615;
    }
    for (int i_9 = 2; i_9 < 12;i_9 += 1)
    {
        arr_29 [i_9] = ((((arr_28 [i_9 + 1] [i_9 + 3]) | (arr_28 [i_9 + 1] [i_9 + 3]))));

        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            var_31 += (((-(arr_20 [i_9] [i_9] [i_10]))));

            for (int i_11 = 1; i_11 < 13;i_11 += 1)
            {
                var_32 = 26;
                var_33 = (arr_15 [i_9]);
                var_34 = ((min(((!(arr_25 [i_11] [12]))), (!127))));
            }
        }
        for (int i_12 = 1; i_12 < 1;i_12 += 1)
        {
            var_35 ^= ((~((~((~(arr_17 [i_12])))))));
            var_36 ^= (max(9115939996313903479, (arr_32 [i_9 - 2] [i_12 - 1])));
        }
        for (int i_13 = 3; i_13 < 12;i_13 += 1)
        {
            var_37 += ((-(min(((-(arr_34 [i_9] [i_13]))), (arr_37 [7] [i_13 + 1] [i_13])))));
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 15;i_15 += 1)
                {
                    {
                        arr_44 [i_9] [i_13] [i_14] [1] [10] [i_13] = ((~(arr_22 [i_13 - 2] [i_13] [i_13 + 2] [i_9 - 2])));
                        var_38 = (max((arr_20 [i_9 - 1] [i_9] [i_9 + 3]), ((~(arr_38 [i_13 - 2] [i_13 - 3] [i_14])))));
                        var_39 = ((!((max(var_2, var_16)))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 15;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {
                    {
                        arr_50 [i_17] [i_13] [i_13] [i_9] = (max(((((var_8 || (arr_22 [i_17] [i_16] [i_13] [i_9]))))), var_0));
                        var_40 *= ((-(arr_20 [i_13 - 1] [21] [i_13 + 1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
