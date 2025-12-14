/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(9544453899177055296, 12972906844421514723));
    var_11 = (min(((var_1 ? (var_9 / -118) : var_8)), ((((var_3 != var_3) ? -var_7 : (~var_7))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 += var_4;
        var_13 = ((arr_0 [i_0]) ? (((min(-25426, 37864)))) : var_1);
        arr_4 [i_0] = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (((((((arr_7 [i_0] [i_1 + 1] [21] [21]) ? ((~(arr_0 [i_0]))) : ((((arr_2 [i_0]) && var_7)))))) ? ((((!(arr_3 [i_0]))))) : ((((((arr_0 [i_2 - 1]) ? var_4 : var_3))) ? ((2465518084 >> (var_5 - 3766312845100004392))) : ((var_5 ? var_8 : (arr_5 [i_2] [i_1 + 1]))))))))));
                    arr_9 [i_0] [6] [i_0] |= (((((((max(var_8, (arr_2 [16])))) ? ((max(7, (arr_2 [i_0])))) : (arr_5 [i_1 - 2] [i_2 - 1])))) * var_1));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_15 = (((arr_2 [13]) ? (arr_7 [i_3] [i_3] [i_3] [i_3]) : (arr_3 [i_3])));

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        arr_21 [i_3] [i_4] [i_6] [i_3] = ((~(arr_12 [i_3] [i_3])));
                        var_16 = (((arr_15 [i_3] [i_3]) >> (arr_15 [i_4] [i_5])));
                        var_17 = (var_0 * var_7);
                        var_18 *= ((~(arr_18 [i_3] [i_4] [i_5] [i_6])));
                    }
                }
            }
            arr_22 [i_3] [21] = ((-((~(arr_7 [6] [15] [i_3] [15])))));
        }
        for (int i_7 = 2; i_7 < 23;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 0;i_8 += 1)
            {
                var_19 = (max(var_19, (~4128768)));
                var_20 = 14;
            }
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                var_21 *= ((arr_1 [i_7 - 2] [i_7 - 1]) && (arr_24 [i_3] [2] [i_7 + 2]));
                arr_29 [i_3] [1] [i_9] = (arr_25 [i_7]);
                var_22 = ((~(arr_18 [i_3] [i_7] [i_3] [i_9])));
            }
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        {
                            var_23 = (min(var_23, (arr_0 [i_7])));
                            var_24 = (((arr_6 [i_7 - 2] [i_7] [i_7 + 1]) ? (arr_6 [i_7] [4] [i_7 + 1]) : (arr_6 [i_3] [i_7] [i_7 - 2])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 22;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        {
                            var_25 = (((((arr_35 [i_3] [i_7] [i_10] [i_14]) ? (arr_2 [i_7]) : (arr_13 [i_7]))) ^ 11619));
                            var_26 = (47938 ? 18446744073709551615 : -17);
                            var_27 = (min(var_27, (((((((arr_35 [i_3] [i_7] [i_10] [i_13]) ? (arr_5 [i_3] [i_3]) : 143))) ? (arr_12 [5] [5]) : (((arr_12 [i_13] [12]) ? var_3 : var_5)))))));
                        }
                    }
                }
                var_28 = var_1;
                var_29 *= ((-(((var_3 && (arr_1 [1] [i_7]))))));
            }
            var_30 = (max(var_30, (arr_7 [i_3] [i_7] [i_3] [i_3])));
            var_31 *= 2259182263;
            var_32 = (((arr_39 [i_3] [i_7 + 1]) ? (arr_39 [i_3] [i_7 - 2]) : (arr_39 [i_3] [i_7 - 2])));
        }
    }
    var_33 = ((var_3 ? var_7 : var_4));
    var_34 = var_0;
    #pragma endscop
}
