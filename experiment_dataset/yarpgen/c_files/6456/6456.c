/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = var_3;
        var_11 = var_1;
        var_12 = (arr_1 [i_0 - 2] [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] = (((((var_0 - ((var_3 ? var_9 : 8388607))))) ? ((8388604 ? var_4 : (min((arr_2 [i_1]), -8388588)))) : ((~(arr_2 [i_1])))));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_13 = ((((((arr_5 [i_1]) ? var_3 : (arr_2 [i_2])))) ? (arr_7 [8] [i_1]) : 8388576));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_14 = (max(var_14, 0));
                        var_15 = var_2;
                        arr_15 [4] [i_2] [7] [4] [7] [i_4] = var_1;

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            arr_19 [i_1] [4] [i_3] [i_4] [i_5] &= ((((!(min(var_8, var_8)))) ? var_4 : ((3 ? (arr_7 [i_3] [i_4]) : (((arr_16 [i_1] [i_2] [i_3] [i_4] [1] [11] [i_2]) ? -21 : -9113346686128741503))))));
                            var_16 = ((-((max((arr_9 [i_2]), var_5)))));
                            var_17 &= ((!((var_7 || (arr_7 [i_2] [i_4])))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_23 [i_1] [i_3] [i_3] [i_3] [i_2] = ((-(arr_16 [i_1] [i_2] [i_1] [i_4] [i_6] [i_4] [i_3])));
                            var_18 = (arr_16 [i_1] [i_2] [i_3] [i_1] [i_1] [i_3] [6]);
                            arr_24 [i_1] [i_2] [i_3] [i_4] = (arr_7 [i_2] [i_6]);
                            arr_25 [i_1] [i_2] [i_3] [i_3] [i_1] [i_2] [i_2] = var_3;
                        }
                    }
                }
            }
            arr_26 [i_1] [i_2] = -8388577;
            var_19 = ((((9113346686128741503 | 1) ^ var_7)));
            var_20 = (min(var_20, ((min(((148 ? ((var_0 + (arr_13 [i_1] [i_1] [i_1] [i_2] [1]))) : (arr_7 [i_1] [i_1]))), (((9113346686128741489 ? (arr_9 [1]) : var_1))))))));
        }
        arr_27 [3] [3] = (arr_7 [i_1] [i_1]);
        var_21 += (116 & 100);
    }
    var_22 = var_2;
    var_23 = ((var_1 ? var_5 : (max(var_3, (((101 ? var_4 : 8388576)))))));
    #pragma endscop
}
