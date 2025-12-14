/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 |= (max(((max((!var_1), 2785713024993714631))), (((((248 ? (arr_0 [i_0] [i_1]) : var_4))) ? (max(-9351, 6955973990325160165)) : 248))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_20 = (max(var_20, (((((-268 ? var_7 : 15846191580122855546)) << (((((arr_4 [i_0]) ? (-9353 % -263) : var_2)) + 182)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 = (((((-(max((arr_7 [i_0] [i_1] [i_2]), -2785713024993714631))))) ? 263 : ((53840 ? 3 : -2785713024993714630))));
                                arr_13 [i_0] [16] [i_2] [i_2] [i_3] |= (max(((max(8190, var_4))), (max((arr_7 [i_0 - 1] [i_0 - 1] [i_2]), (arr_3 [i_0 - 1])))));
                                var_22 = (min(var_22, ((max((((58 ? var_18 : ((0 ? 0 : -3))))), ((2785713024993714633 ? (var_4 > -268) : 1610612736)))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_23 = ((var_8 ? -265 : var_15));
                        var_24 = ((-6481 ? 7 : 2148764983));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_19 [i_0] [i_6] [i_2] [i_6] = ((((!(((var_18 ? 19 : 8281862958349701236))))) ? ((3381456913 ? var_12 : (arr_12 [3] [3] [12] [i_6] [i_0 - 1] [i_2] [i_1]))) : var_16));
                        var_25 = (((((((max(var_10, (arr_1 [i_2])))) ? ((var_11 ? 11227 : -2071851131)) : ((var_15 ? 1855278573 : 19212))))) ? (((!(!3)))) : ((((!var_13) && -263)))));
                    }
                }
                arr_20 [7] [i_1] [1] = ((((max((arr_7 [i_0] [i_0 - 1] [i_0 + 1]), 1776863475))) ? (((((((var_14 ? var_2 : -263))) > (((arr_15 [i_0 - 1] [i_1] [i_1] [i_1] [14]) ? var_15 : var_10)))))) : -3381456923));
            }
        }
    }
    var_26 -= 778828719;
    #pragma endscop
}
