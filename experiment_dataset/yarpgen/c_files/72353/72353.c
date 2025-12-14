/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_8, ((var_4 ? var_6 : ((var_2 ? var_8 : 7566815665426818697))))));
    var_12 = (((var_6 == var_7) * var_1));
    var_13 = ((var_9 ? (var_0 / var_6) : ((-(max(var_0, var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                {
                    var_14 *= ((~(((arr_4 [i_2 + 1] [i_2 - 1]) | (arr_4 [i_2 - 4] [i_2 - 2])))));
                    var_15 = (min(var_15, (((~(((arr_2 [i_2 - 1]) ? (arr_1 [i_1]) : (((arr_7 [i_2] [i_1] [i_0] [i_0]) | -14)))))))));
                    var_16 = var_8;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_17 = (((((5696287891177743012 == 13) ? (arr_4 [i_0] [i_1]) : (!var_3))) | var_2));
                                var_18 ^= var_6;
                                var_19 = (min((arr_2 [i_2 - 4]), (((10879928408282732918 ? 10 : 22903)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    var_20 = (((+(min((arr_15 [i_7] [i_6] [i_5]), var_8)))));
                    var_21 = var_2;
                }
            }
        }
    }
    #pragma endscop
}
