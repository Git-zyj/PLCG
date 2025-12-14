/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((((1622826920 < var_9) ? 1622826929 : (((((1622826915 ? 78 : 1622826908))) * ((var_14 ? 31 : var_8)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_19 = ((-(max(((min((arr_5 [i_0] [i_1] [i_2]), 1))), ((var_11 ? 1246516688 : (arr_3 [i_0])))))));

                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        arr_12 [i_0] = ((1622826915 < ((var_4 ? (arr_6 [i_3 - 2] [i_3 - 1] [i_0] [i_2]) : (arr_6 [i_0] [i_3 - 1] [i_0] [i_3 - 1])))));

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = (((var_1 + 2147483647) >> (183 - 163)));
                            var_20 = (min(var_20, ((((((var_15 ? var_14 : (arr_4 [i_0] [i_4] [i_2] [i_1])))) ? (15 ^ 116) : (-2255 / -660013258))))));
                        }
                        for (int i_5 = 4; i_5 < 23;i_5 += 1)
                        {
                            arr_19 [i_0] [i_0] [i_2] [i_3] [i_5 - 2] [10] [2] = 2672140380;
                            arr_20 [i_0] [i_1] [i_3] &= (((arr_17 [i_0] [i_0] [i_0] [i_0] [i_3]) ? var_17 : (!10)));
                        }
                        var_21 ^= (-2747014625884377394 | 128);
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 24;i_6 += 1)
                    {
                        var_22 = arr_4 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 + 1];
                        var_23 = 1622826889;
                    }
                }
            }
        }
    }
    #pragma endscop
}
