/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] = ((((min(((max(-6062, (arr_1 [i_0] [i_0])))), (((arr_0 [i_0]) ? var_13 : (arr_1 [1] [i_0])))))) ? (max(3593956609, 6062)) : (((-((max(var_5, var_10))))))));
        arr_4 [i_0] = ((((arr_0 [i_0]) | 6061)));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_16 [i_1] [i_1] [i_1] [10] [i_4] = ((~((239 + (((arr_14 [i_2] [i_2 + 1] [i_3] [i_4] [i_3] [i_3]) << (4294967295 - 4294967271)))))));

                        for (int i_5 = 4; i_5 < 20;i_5 += 1)
                        {
                            var_15 = ((((max((arr_8 [20] [i_5 - 3]), 6982))) + (arr_10 [i_1] [14])));
                            arr_19 [i_1] = ((-(max(var_10, -6976))));
                        }
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            var_16 = (min(var_16, (((~(min(21099, (((arr_10 [i_4] [i_1]) | var_8)))))))));
                            arr_22 [i_1] [i_2 + 1] [11] [i_2] = (min((((arr_14 [i_1] [i_1] [i_1] [i_4] [i_4] [i_4]) + (arr_14 [i_1] [i_1] [i_6 - 1] [i_1] [i_6 - 1] [i_6 + 1]))), (arr_21 [3] [i_1])));
                        }
                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            var_17 = ((!(!-6089)));
                            var_18 = (min((((arr_10 [i_4] [i_4]) / (arr_10 [i_7 + 1] [i_3]))), (((arr_23 [i_4] [i_3]) ? (arr_12 [i_1] [i_2 + 1] [i_3] [i_7 + 1]) : (arr_23 [i_3] [i_2])))));
                            arr_25 [i_1] [i_4] [i_3] [i_2] [i_1] = ((-(arr_20 [i_1] [i_2] [i_1] [i_7 + 1])));
                            arr_26 [i_1] [i_2] [i_3] [i_3] [15] = (6066 && 65526);
                        }
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            var_19 *= ((!((!(((50785 << (18 - 14))))))));
                            var_20 = (min(var_20, var_10));
                        }
                        var_21 *= (arr_15 [i_1] [i_2] [19] [i_2 - 1] [i_3]);
                        var_22 = (min(var_22, ((((arr_14 [i_2 + 1] [i_2] [17] [i_2] [i_2 + 1] [i_2 + 1]) >> (((min(12960, (((arr_8 [17] [i_2 - 1]) ? 599241175 : 237)))) - 12903)))))));
                    }
                }
            }
        }
        var_23 = (min(((var_13 ? (((-(arr_21 [1] [i_1])))) : (arr_17 [i_1] [i_1] [i_1] [i_1] [6]))), (arr_9 [i_1])));
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                {
                    var_24 = (min(var_24, (arr_5 [i_9])));
                    arr_37 [i_9] [i_10] [i_11] [i_11] = (+-var_11);
                }
            }
        }
        arr_38 [i_9] [i_9] = ((!(((-(arr_35 [i_9] [i_9] [i_9]))))));
    }
    var_25 = ((((var_11 ? (((min(1, var_10)))) : ((var_12 ? var_0 : var_6)))) + var_3));
    var_26 &= (max(var_6, var_0));
    #pragma endscop
}
