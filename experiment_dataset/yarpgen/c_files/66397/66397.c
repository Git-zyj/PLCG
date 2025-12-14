/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_2] [9] = ((((arr_1 [i_4 + 1]) ? ((var_11 / (arr_0 [i_0]))) : ((var_11 ? (arr_4 [i_0]) : (arr_5 [i_0] [6] [i_0]))))) / -var_4);
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = var_9;
                            }
                        }
                    }
                }
                arr_13 [i_0] [i_0] [i_0] = arr_5 [2] [i_1] [i_0];
            }
        }
    }

    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_16 [i_5] &= (((!(~var_15))) ? ((((((((var_2 + 9223372036854775807) >> (var_11 + 6658496957493342650)))) || var_15)))) : (max((((arr_7 [i_5] [0] [i_5]) ? (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5]) : (arr_14 [i_5]))), var_0)));
        arr_17 [i_5] = max(((((arr_0 [i_5]) / var_0))), ((max(var_3, var_5))));
        arr_18 [i_5] = (var_1 + ((var_2 ? (arr_1 [i_5]) : var_2)));
    }
    var_16 |= var_5;
    var_17 = var_13;
    #pragma endscop
}
