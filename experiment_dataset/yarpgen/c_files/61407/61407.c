/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_10 [i_0] = ((-(((arr_6 [i_0] [i_1 + 1]) ? (arr_5 [i_1] [i_1 - 2]) : (arr_5 [i_1 + 2] [i_1 + 3])))));
                    var_18 = (((arr_4 [2] [2]) ? (((arr_1 [i_1 + 2] [i_0]) & var_4)) : 18446744073709551615));
                    var_19 = (arr_0 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] = ((((~(arr_1 [i_0] [i_0])))) ? ((((min((arr_5 [i_0] [i_3]), var_0))) ? (arr_9 [i_0]) : (arr_5 [i_2] [i_1 + 1]))) : 1322849274);
                                var_20 = (min(var_20, ((((((arr_15 [i_3]) ? ((((arr_11 [i_3] [i_3]) - (arr_5 [i_1] [i_1])))) : 5646409556441021037)) / (((~(min(var_11, -1322849275))))))))));
                                var_21 = (((arr_5 [i_1 + 1] [11]) ? -1322849275 : (((!(!var_5))))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    var_22 = ((max(((var_0 + (arr_9 [i_0])), (arr_11 [i_0] [2])))));

                    for (int i_6 = 1; i_6 < 24;i_6 += 1) /* same iter space */
                    {
                        var_23 = (-((1777661181 ? 7330275954537306381 : 2596816372)));
                        var_24 = (arr_1 [i_1 - 1] [i_0]);
                        var_25 = (((((max(var_9, 187)) ? (!var_13) : var_4))));
                        var_26 ^= (((((arr_3 [i_5]) ? 5690943327527253734 : ((min(var_5, var_5))))) < ((+(((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_18 [i_1 + 2] [i_5] [i_1]) : var_10))))));
                    }
                    for (int i_7 = 1; i_7 < 24;i_7 += 1) /* same iter space */
                    {
                        var_27 = arr_21 [i_0] [i_1 - 2] [i_5] [i_0];
                        var_28 = ((max((arr_3 [i_0]), 1698150924)));
                    }
                }
                for (int i_8 = 4; i_8 < 21;i_8 += 1)
                {
                    var_29 = ((-(((arr_7 [i_1 + 3] [i_1 + 1]) ? var_8 : (arr_7 [i_1 + 3] [i_1 + 1])))));
                    arr_29 [i_0] [i_1] [i_0] [18] = ((((((((3585496233 ? 2479610695 : 8191))) & (((arr_21 [i_0] [i_1] [i_1 - 2] [i_0]) ? -1322849277 : var_6))))) ? (arr_6 [i_1 + 2] [i_1 + 2]) : (((arr_11 [i_0] [i_0]) ? (2967575444 | var_8) : (arr_7 [i_0] [16])))));
                    arr_30 [i_0] [i_1 + 1] [i_1] = ((max(((var_13 ? -5226778350450241141 : -1777661182)), 227)));
                    var_30 = (max(var_30, (((!(((3725577102 ? 2106558257 : var_6))))))));
                    var_31 = ((var_12 ? (((((arr_28 [i_8 - 2]) | (arr_6 [i_0] [i_1]))))) : ((max((arr_13 [i_0] [i_1] [i_1] [i_8]), var_12)))));
                }
                var_32 = (min(var_32, (arr_1 [i_0] [i_1])));
                arr_31 [i_0] = (max((arr_14 [i_1 - 1] [i_1 - 2] [i_1] [i_1 + 3] [i_1 - 1] [i_1 + 2] [i_1 + 2]), (arr_14 [i_1 - 1] [i_1 - 2] [i_1] [i_1 - 1] [i_1 + 3] [i_0] [i_0])));
            }
        }
    }
    var_33 = var_1;
    #pragma endscop
}
