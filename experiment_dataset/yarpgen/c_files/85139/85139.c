/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_5));
    var_11 = ((var_8 ? -58 : (((((min(var_7, var_8)))) & (var_4 % var_1)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 = (((((-(arr_1 [i_0])))) * (((((arr_1 [i_0]) ? (arr_2 [i_1]) : var_1)) / (arr_0 [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, ((min(1405877548341671090, 231)))));
                                arr_10 [i_0] = var_0;
                                var_14 = ((((((arr_0 [i_0]) | ((var_0 ? (arr_7 [i_0] [i_1] [i_0] [i_3] [i_4] [i_0]) : (arr_9 [i_0] [i_0])))))) ? ((((min(var_4, (arr_1 [i_0])))) - var_7)) : 231));
                            }
                        }
                    }
                    arr_11 [i_0] = var_0;
                    var_15 = (max(var_15, (((1405877548341671118 ? -1405877548341671090 : ((max((arr_1 [i_2]), var_3))))))));
                }
            }
        }
        var_16 &= (((arr_4 [i_0] [i_0]) & ((min((arr_8 [i_0] [i_0] [i_0] [0] [4]), (arr_8 [i_0] [0] [i_0] [0] [i_0]))))));
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    arr_21 [i_5] [i_5] = (~(46 & 250));
                    var_17 = (((((arr_19 [i_5] [i_5] [i_5] [i_5]) ? var_8 : (arr_4 [i_5 - 1] [i_5]))) != var_6));
                    var_18 = (min(var_18, (arr_18 [i_5] [i_6] [i_7])));
                    var_19 &= ((var_0 ? ((((((arr_7 [1] [i_6] [i_6] [i_6] [i_6] [i_6]) ? (arr_7 [i_5 - 1] [i_5] [i_5] [i_5] [1] [i_7]) : var_5)) % ((min(43806, 2)))))) : ((var_1 ? 1405877548341671118 : (arr_12 [i_6])))));
                }
            }
        }
        var_20 = -1405877548341671090;
        arr_22 [i_5] [i_5] = (arr_15 [i_5] [i_5]);

        for (int i_8 = 4; i_8 < 13;i_8 += 1) /* same iter space */
        {
            var_21 = (min(var_21, (((((((var_7 ? var_9 : (arr_1 [12]))))) ? var_9 : (arr_9 [i_8 - 3] [8]))))));
            var_22 = (max(var_22, ((min(var_9, (min((arr_25 [i_8] [14]), (arr_25 [i_8] [8]))))))));
            var_23 = (max((arr_20 [i_5] [i_5] [i_8 - 3] [i_8]), ((-((-1405877548341671090 ? var_9 : var_4))))));
        }
        /* vectorizable */
        for (int i_9 = 4; i_9 < 13;i_9 += 1) /* same iter space */
        {
            var_24 = var_3;

            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                arr_31 [i_5] [i_5] [i_5 - 1] [i_5] = (((arr_25 [i_5] [i_5]) < (arr_0 [i_5])));
                var_25 -= (((((1405877548341671081 ? var_0 : var_4))) ? ((((arr_14 [1] [i_10]) / var_6))) : (arr_6 [i_10] [i_9] [i_10] [i_5])));
                var_26 = 2194728288256;
                var_27 = (((var_5 != var_0) * (((arr_24 [i_5 - 1] [i_5] [i_10]) ? (arr_8 [i_10] [i_5] [i_9] [i_5] [i_5]) : 2054889171))));
            }
        }
    }
    for (int i_11 = 1; i_11 < 22;i_11 += 1)
    {
        arr_34 [i_11] = ((var_0 <= (arr_32 [i_11] [i_11 + 2])));
        var_28 += (((((min(var_4, -42735)) + 2147483647)) >> (var_7 - 53)));
        var_29 |= (~1);
        var_30 = (min(var_30, ((38280 ? (((((!(arr_33 [i_11] [7]))) ? (((max(var_0, 1)))) : 2054837231))) : (max((var_7 + var_1), (arr_32 [9] [i_11])))))));
        var_31 -= var_3;
    }
    var_32 = (min(-6378695698025273358, var_0));
    #pragma endscop
}
