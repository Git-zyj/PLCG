/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (~var_9);
        arr_4 [i_0] [i_0] = ((var_16 ? (arr_2 [i_0]) : ((768807741 ? -9678 : -1681029031))));
    }

    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                {
                    var_18 = (((((((var_4 ? (arr_8 [i_1] [i_1] [i_3 + 1]) : var_17)) / 44152))) ? 105 : (arr_8 [i_1] [i_2] [i_3 + 1])));
                    arr_13 [i_3] = ((((min((arr_12 [i_3 + 3] [i_3 - 1] [i_3 + 3] [i_3 + 1]), (arr_12 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 3])))) ? (((!(arr_12 [i_3 + 1] [i_3 - 1] [i_3 + 3] [8])))) : ((-((min((arr_7 [i_1] [i_1]), var_5)))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_18 [i_5] [i_3] [i_3] [i_3] [i_1] = (((-2147483640 > (arr_7 [i_1] [i_1]))));
                                var_19 = ((((arr_5 [i_1]) <= 1)));
                                arr_19 [i_5 + 1] [i_3] [i_3] [i_4] [1] [21] [i_1] = (min(((((arr_10 [i_3 + 2]) != (arr_10 [i_3 + 3])))), ((-(min(var_9, (arr_9 [i_2] [11])))))));
                                var_20 = (arr_8 [i_1] [i_3] [i_5 + 1]);
                            }
                        }
                    }
                }
            }
        }
        var_21 = -var_15;
        var_22 = (((arr_8 [i_1] [i_1] [i_1]) ? var_11 : (arr_17 [i_1] [i_1] [i_1] [i_1] [i_1])));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    {
                        var_23 = (min(var_23, ((max((arr_11 [i_7 + 3] [i_7 + 2]), var_2)))));
                        var_24 = (min(var_24, (((((((((arr_12 [10] [1] [i_6] [i_1]) ? (arr_14 [i_1] [i_1] [i_7] [i_7]) : 3354399198))))) / 3783995850)))));
                        arr_29 [i_1] [i_1] [i_1] [7] [i_7 + 3] [i_8] = (arr_22 [i_8]);
                        arr_30 [i_7] = ((-((((arr_7 [i_7 + 2] [i_8 - 1]) > (arr_17 [i_7] [13] [i_7 + 2] [13] [i_7 - 3]))))));
                        var_25 = (min(var_25, (((-(((arr_23 [i_1] [i_6] [i_8 - 1]) >> (max(-8248930063836336249, var_15)))))))));
                    }
                }
            }
        }
    }
    var_26 = (var_12 + var_16);
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            {
                var_27 = (arr_12 [i_10] [i_10] [i_9] [i_9]);
                var_28 = ((((arr_7 [i_9] [i_9]) ? (max((arr_5 [i_10]), (arr_12 [i_9] [i_9] [i_9] [i_9]))) : 1)) + var_8);
                arr_36 [i_10] [i_10] [i_10] = (8248930063836336243 | 2147483629);
            }
        }
    }
    #pragma endscop
}
