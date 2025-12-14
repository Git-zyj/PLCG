/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_12 [i_3] [i_1] [i_1] [i_0] = (((((arr_6 [i_1] [i_1 + 1] [i_1]) + (arr_11 [i_0] [i_0] [i_0] [i_0]))) + (((1 - (arr_2 [i_2]))))));
                        arr_13 [i_0] &= (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_13 = (((arr_8 [i_0] [i_0] [i_3 - 2] [i_3 + 1] [i_1 + 2] [i_2 - 2]) != (arr_10 [i_0] [i_1] [i_3 - 2] [i_2 + 1])));
                        var_14 = (min(var_14, 1));
                        var_15 = ((-(arr_3 [i_2] [i_0] [i_0])));
                    }
                }
            }
        }
        arr_14 [i_0] = ((~(arr_10 [i_0] [i_0] [i_0] [i_0])));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            {
                var_16 = (min(((((min((arr_15 [i_4]), var_3))) ^ (arr_2 [i_4]))), (arr_4 [i_4] [i_4])));
                arr_21 [i_4] [i_4] [i_4] = (max(((23284 ? 58931 : 0)), ((((arr_16 [i_5 - 1]) - (arr_18 [i_5 + 1] [i_5 - 1]))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 7;i_7 += 1)
                    {
                        {
                            arr_28 [i_4] [i_5] [i_6] [i_4] = (arr_27 [i_7] [i_5] [i_7 - 1] [i_5 - 1] [i_5 - 1] [i_6]);
                            var_17 = (min((arr_20 [i_4]), ((-(arr_20 [i_4])))));

                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 11;i_8 += 1)
                            {
                                arr_31 [i_4] [i_4] [i_4] [i_7] [i_5 + 1] = (((arr_23 [i_7 + 4] [i_5 - 1]) ^ (18446744073709551615 | 0)));
                                var_18 = 1;
                            }
                            for (int i_9 = 0; i_9 < 11;i_9 += 1)
                            {
                                var_19 = ((~(((arr_18 [i_5 - 1] [i_7 + 2]) ? 1 : (arr_24 [i_4] [i_5 - 1])))));
                                var_20 = (max(var_20, ((((arr_10 [i_7 - 1] [i_7 + 1] [i_7 + 2] [i_7 - 3]) ? ((((!(arr_10 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 + 1]))))) : (((arr_10 [i_7 - 1] [i_7 - 3] [i_7 + 4] [i_7 + 4]) ? 1 : (arr_10 [i_7 - 3] [i_7 + 4] [i_7 - 2] [i_7 + 2]))))))));
                            }
                            /* vectorizable */
                            for (int i_10 = 0; i_10 < 11;i_10 += 1)
                            {
                                arr_38 [i_4] [i_4] = (var_11 == 1);
                                var_21 = (((985346339 ^ 255) != (~1)));
                            }
                        }
                    }
                }
                var_22 = (((arr_16 [i_4]) & (((arr_25 [i_5 - 1]) ? (arr_2 [i_5 + 1]) : ((5077537660851240764 ? (arr_11 [i_4] [i_5] [i_4] [i_4]) : (arr_22 [i_4] [i_4] [i_4] [i_5])))))));
            }
        }
    }
    var_23 = var_7;
    var_24 = (max(var_2, ((~(2994950488301885629 | 1466675935686108538)))));
    #pragma endscop
}
