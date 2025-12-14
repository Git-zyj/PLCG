/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((var_6 ? -var_0 : (((((var_1 & var_12) > var_10))))))));
    var_14 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = (min(((var_6 ? (((arr_2 [i_0] [i_0] [i_1]) & var_3)) : 32640)), (((((-8 ? var_4 : var_2))) ? ((~(arr_0 [i_1]))) : (arr_0 [i_0])))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] = (((((-1170946631 ? (max(var_5, (arr_0 [i_1]))) : (arr_6 [i_2] [i_1] [12])))) ? (max((((arr_2 [i_0] [i_0] [i_2]) ? (arr_5 [i_1] [2]) : (arr_6 [20] [i_1] [i_1]))), ((((arr_4 [i_1]) ? 16365 : var_10))))) : ((((!((!(arr_3 [i_0] [i_0] [i_0])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 ^= (((((7 ? (arr_14 [i_4] [i_4] [i_4] [i_4] [5] [i_4 + 1] [i_4]) : (arr_14 [i_2] [i_2] [i_4] [i_2] [i_4] [i_4 + 3] [6])))) % (~-var_6)));
                                var_17 = (min(var_17, ((max(7, (min((arr_12 [16] [i_4] [16]), ((443365445 ? (arr_3 [i_0] [i_0] [22]) : var_12)))))))));
                                var_18 = var_10;
                                arr_15 [i_0] [i_0] [i_0] = (((((~(arr_12 [i_0] [i_1 - 1] [i_4 + 3])))) ^ (((~18446744073709551615) ? (max(1, (arr_14 [i_0] [9] [22] [i_3] [15] [i_3] [15]))) : -437157233))));
                            }
                        }
                    }
                    var_19 += ((((((var_0 <= (arr_2 [i_0] [18] [i_2]))))) & var_4));
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    var_20 = (min(var_20, ((min(2, -1)))));
                    var_21 = ((((min((arr_2 [i_1 + 2] [i_0] [i_0 + 1]), var_8))) ? (min((arr_2 [i_1 + 1] [i_0] [i_0 + 1]), 443365445)) : (((15361347349047794837 || (arr_11 [i_0] [i_0 + 1]))))));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        arr_22 [i_0] [i_1 - 1] = (~(arr_5 [i_0] [i_0]));
                        var_22 = (max(var_22, (((18446744073709551602 ? var_3 : (arr_2 [i_0 + 1] [i_6] [i_1 + 1]))))));
                        var_23 = (arr_12 [i_0] [i_0 + 1] [i_1 - 1]);
                    }
                    for (int i_7 = 1; i_7 < 24;i_7 += 1) /* same iter space */
                    {
                        var_24 = (((-(arr_17 [i_7] [i_5] [i_0]))));
                        arr_26 [i_0] = var_12;
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 24;i_8 += 1) /* same iter space */
                    {
                        var_25 = ((!(arr_19 [i_0])));
                        var_26 = (-var_3 ? (arr_7 [i_0 + 1] [i_0 + 1] [7]) : ((var_6 ? var_9 : var_12)));
                        arr_31 [i_0] [i_0] [19] [i_0] = 2201603164231029040;
                    }
                }
            }
        }
    }
    var_27 = var_12;
    #pragma endscop
}
