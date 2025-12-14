/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] [i_2] = ((min((arr_10 [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1]), 3594408761)));

                    for (int i_3 = 3; i_3 < 9;i_3 += 1) /* same iter space */
                    {
                        var_19 ^= (1 ? (((((min((arr_7 [i_0] [i_0] [i_2]), var_15)))) + (max((arr_15 [i_2]), var_7)))) : ((((((var_5 ? var_10 : (-32767 - 1)))) ? ((-(-32767 - 1))) : var_15))));

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_20 = (max(var_20, ((max(var_2, var_1)))));
                            arr_19 [i_0] [i_3] = 1;
                            var_21 = (min(var_21, var_0));
                        }
                        /* vectorizable */
                        for (int i_5 = 4; i_5 < 8;i_5 += 1)
                        {
                            var_22 = (max(var_22, (arr_3 [i_0 + 2] [i_3 + 2] [i_5])));
                            var_23 ^= (((var_12 - 4293918720) ? (3170835370818713715 || 13) : (((arr_17 [i_0] [i_0] [i_1] [i_2] [i_0] [i_0]) ? (-32767 - 1) : var_18))));
                            var_24 = (min(var_24, ((((arr_14 [5] [i_3 + 2] [i_2 + 1] [i_1] [i_0 + 1] [i_0]) ? (arr_8 [i_0]) : 0)))));
                            arr_22 [i_0] [i_0] [i_2] [i_2] [i_3] = var_2;
                        }
                        for (int i_6 = 4; i_6 < 10;i_6 += 1)
                        {
                            var_25 = ((((min((arr_9 [i_2 + 1] [i_2]), (arr_9 [i_2 - 1] [i_2])))) ? ((18446744073709551615 ? (-127 - 1) : 1)) : (min((min((arr_24 [i_6] [i_2] [i_1]), var_5)), 1))));
                            var_26 = (min(var_26, ((((arr_2 [i_0]) + (((((max(0, -32756))) - 1))))))));
                            arr_26 [i_0] [5] [i_3] = (((((((-9 && (-9223372036854775807 - 1))) && ((((arr_17 [i_0] [i_1] [i_0] [i_3 - 3] [i_6] [i_0]) ? (arr_7 [i_0] [i_6 - 1] [i_2 + 1]) : -660952435540513943)))))) + (((!(arr_2 [i_2 + 1]))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 9;i_7 += 1)
                        {
                            var_27 *= (((1 != 1654751777) & 0));
                            var_28 = (min(var_28, ((((-660952435540513954 ^ var_14) ? 1073741824 : 17671618256731159269)))));
                            arr_29 [i_0 - 1] [i_1] [i_1] [i_2] [i_3] [i_3] [i_3] = var_18;
                        }
                        arr_30 [i_0] [i_1] [i_2] [i_3] = (((max(((var_6 ? (arr_1 [i_1]) : 1)), (arr_3 [i_1] [8] [8])))) ? ((max((((arr_3 [i_1] [i_1] [i_1]) & var_3)), (max((arr_27 [i_0 + 1] [i_0 + 1] [i_2] [i_3] [i_0]), 125))))) : (arr_9 [i_1] [i_1]));
                    }
                    for (int i_8 = 3; i_8 < 9;i_8 += 1) /* same iter space */
                    {
                        var_29 = ((((((arr_0 [7]) == (arr_18 [i_0 + 1] [i_2 - 1] [i_2 - 1])))) > (((1 && (10831846669529899800 || 4294967295))))));
                        var_30 = var_7;
                    }
                }
            }
        }
    }
    var_31 = (((max(-var_15, ((var_5 ? 514002783501094623 : var_5))))) ? ((0 ? var_1 : (max(var_7, var_17)))) : ((min((var_4 != var_16), (max(var_12, var_2))))));
    #pragma endscop
}
