/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = ((-((((min(var_18, (arr_2 [i_1] [i_0])))) ? var_16 : (arr_0 [i_0])))));
                arr_8 [i_0] [i_1] [5] = (arr_4 [i_0] [i_0] [i_0]);
            }
        }
    }
    var_21 = ((var_7 ? ((((((var_9 ? var_9 : var_14))) ? var_17 : -var_0))) : var_15));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        {
                            arr_18 [i_2] [i_2] [i_2] [i_5] = (max((arr_12 [i_2] [i_2]), (max((max(var_13, var_10)), (2992213076 | 1302754201)))));

                            for (int i_6 = 2; i_6 < 13;i_6 += 1)
                            {
                                var_22 = (max(((max((arr_20 [i_5] [i_5] [i_5 + 1] [2] [i_5 + 2]), (arr_19 [i_5] [i_5] [i_5 + 1] [i_5] [3] [5] [i_5 + 1])))), ((var_10 & ((min((arr_21 [i_2] [i_2] [1] [i_2] [13]), var_19)))))));
                                arr_22 [i_2] [i_2] [i_2] [i_2] [i_5] [i_2] = ((((((arr_11 [i_6 + 3]) ? var_8 : var_8))) || ((min((((var_19 ? var_11 : var_15))), (min((arr_15 [i_3]), (arr_16 [i_2] [i_3] [i_4] [i_5 + 2]))))))));
                            }
                        }
                    }
                }
                var_23 = (min(var_23, (((+(((arr_15 [i_2]) & (arr_15 [i_3]))))))));
            }
        }
    }
    #pragma endscop
}
