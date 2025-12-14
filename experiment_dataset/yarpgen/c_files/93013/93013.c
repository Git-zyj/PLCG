/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = (-(((arr_5 [i_1 - 1] [2] [i_1]) ? var_12 : (arr_5 [i_0] [i_0] [i_1]))));
                    var_21 = (max((((arr_6 [i_1 + 1] [i_0] [8]) - (arr_6 [i_1 + 1] [i_1] [i_1]))), (arr_6 [i_1 + 1] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_22 = -5900673034608539016;
                                var_23 = ((var_12 ? ((((!(arr_1 [i_2] [3]))) ? ((78 ? 2097151 : var_15)) : var_18)) : (~2862054753)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_1] [i_2] [i_5] [i_6] = var_3;
                                var_24 |= (((var_18 ? var_18 : (arr_15 [i_6] [i_6 + 3] [1] [i_5] [i_1] [i_1]))));
                                arr_20 [i_1] = ((var_5 ? ((var_3 ? ((var_0 / (arr_13 [i_1]))) : (((min(65525, 78)))))) : var_14));
                                var_25 = ((max(3223840033, (min(4132970887358722465, 1071127255)))));
                                var_26 = ((((max((((arr_14 [i_1] [i_1 + 1]) & var_0)), var_1))) ? var_12 : 0));
                            }
                        }
                    }
                    var_27 = max((2097166 || var_7), (min(93, (arr_0 [i_1 + 1] [i_2]))));
                }
            }
        }
        var_28 += ((+(max((arr_9 [i_0] [i_0] [10] [i_0] [i_0] [i_0]), ((3223840033 ? var_4 : var_15))))));
        var_29 = (177 ? (arr_3 [i_0]) : ((var_0 ? (arr_3 [i_0]) : var_15)));
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        var_30 = min((((((((arr_22 [7]) ? var_0 : var_14))) ? (!var_7) : var_9))), (arr_22 [i_7]));
        arr_23 [i_7] [12] &= -1439793162;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                {
                    arr_28 [i_7] = ((76 ? (var_9 || 30) : ((-76 ? var_11 : var_15))));
                    var_31 &= -63;
                    var_32 = ((min(var_19, 26139)));
                    var_33 = ((((min((360 | var_3), (arr_22 [i_9])))) ? var_12 : var_14));
                }
            }
        }
        arr_29 [i_7] [14] = var_3;
    }
    var_34 = -3223840064;
    #pragma endscop
}
