/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] = (max((arr_5 [i_0]), (min((arr_2 [i_1] [i_0] [i_2 + 2]), (arr_2 [i_0] [i_0] [i_2 - 1])))));
                            arr_12 [i_0] [i_0] [i_2] [i_0] [i_3] = 2444045151;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_12 = (max(var_12, (((((min(var_2, ((var_11 ? var_4 : (arr_18 [i_0] [i_0] [i_1] [i_4] [i_5] [i_5])))))) ? ((max((arr_14 [i_4 - 1] [i_1] [i_1] [i_6 - 1]), var_8))) : ((-96 ? (((arr_10 [i_0] [i_4] [i_5] [i_6 + 1]) ? var_5 : -92)) : (((var_5 ? var_9 : (arr_13 [i_0] [i_1] [i_4] [i_5])))))))))));
                                arr_22 [i_0] [i_1] [i_0] [i_0] [i_6] = ((((((117 ? 19738 : 138))) ? (-92 & var_8) : ((var_7 ? -90 : var_7)))));
                                arr_23 [i_0] [i_1] [i_4] [i_5] [i_6 - 2] [i_0] = (((((122 ? 2147483647 : 1))) ? var_7 : (((((6856776042752239504 ? -24624 : 118))) / (148 * 5902619564016832646)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = ((var_5 | (min(((1736262837345229923 ? 112 : 191)), ((var_8 ? var_9 : -90))))));
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            {
                                arr_34 [i_11] [i_10 + 1] [i_10 - 1] [i_9] [i_8] [i_7] [i_7] = (min((((var_3 && ((((var_7 + 2147483647) >> (var_0 + 32466))))))), (arr_27 [i_7] [i_7])));
                                var_14 = ((-101 ? ((min(((min(-88, var_0))), (min((arr_25 [i_7]), 2147483647))))) : (((var_11 || var_1) ? var_11 : (((max(223, var_9))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 18;i_13 += 1)
                        {
                            {
                                var_15 -= ((((((var_8 ? (arr_28 [i_13] [i_12] [i_9] [i_8]) : 126)) >= (arr_28 [i_7] [i_8 + 1] [i_8 + 1] [i_8 + 1]))) ? ((((arr_24 [i_9] [16]) + var_7))) : (((arr_36 [i_7] [i_8 + 1] [i_9] [i_7]) ? (arr_27 [i_7] [i_8]) : var_7))));
                                arr_40 [i_7] [i_7] [i_8] [i_9] [i_12] [i_13] = (min(((((((var_1 ? var_10 : var_5))) && (var_0 ^ -17503)))), ((((!(arr_33 [i_13] [13] [i_9] [i_7] [i_7]))) ? 16671 : (arr_24 [i_7] [i_8 - 1])))));
                                var_16 = 1334576741;
                                var_17 = (min(var_17, (((-((-(((arr_30 [i_9] [i_12] [i_8] [i_12] [i_7] [i_13]) - 5738493089805350727)))))))));
                                var_18 = (min(((((arr_39 [i_8] [i_8] [i_8 + 2]) * -101))), (min(3754812678, -22282))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
