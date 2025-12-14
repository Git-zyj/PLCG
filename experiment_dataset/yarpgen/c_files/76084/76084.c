/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    var_14 = (max(var_14, (((-(!-var_6))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = (((((var_7 > (-32767 - 1)))) == (((!(arr_2 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_13 [i_1] [i_1] = (((((arr_7 [i_0] [0] [8]) ? var_2 : -126)) == (arr_0 [i_3])));
                        var_15 = (((arr_12 [i_0] [i_0] [i_3]) ? (arr_3 [i_3]) : (arr_12 [i_0] [i_2] [i_2])));
                        var_16 = (max(var_16, ((((((var_9 | (arr_1 [i_0])))) ? (((arr_8 [i_0]) | 126)) : ((var_7 ? (arr_2 [i_0]) : var_1)))))));

                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            arr_16 [i_3] [i_3] [i_1] [i_3] [i_3] = (((var_8 == var_0) ? (((arr_2 [i_0]) ? (arr_6 [i_1] [i_1] [i_1]) : 109)) : -95));
                            var_17 = ((var_1 ? (arr_2 [i_4 + 1]) : (arr_2 [i_4 + 1])));
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_19 [i_2] [2] [1] [i_2] [7] [i_1] = (((arr_14 [i_1]) & var_11));
                            var_18 = (max(var_18, ((((var_8 ^ var_8) | var_8)))));
                        }
                    }
                    var_19 = var_2;
                }
            }
        }
    }
    #pragma endscop
}
