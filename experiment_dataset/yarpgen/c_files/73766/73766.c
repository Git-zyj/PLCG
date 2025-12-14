/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_9 | var_2) ^ var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((((-3000619874990144411 & (arr_0 [i_1])))) - ((var_5 + (arr_0 [i_0])))));
                var_12 = (((var_4 != -46) / ((((arr_1 [i_0] [i_0]) <= var_7)))));
                var_13 = (((65535 || 2251797666201600) > (3000619874990144432 / -30838)));
                var_14 = ((((2313619005 / (arr_2 [i_0] [i_1] [i_1]))) * ((((arr_0 [i_1]) / var_9)))));
            }
        }
    }
    var_15 = var_5;

    /* vectorizable */
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        arr_9 [9] [i_2 - 1] = ((arr_7 [i_2 - 1]) << (var_1 - 696291346425488003));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_16 = (((-4453118743383284348 + 9223372036854775807) << (var_0 - 881089783)));
                    var_17 = ((3000619874990144432 + (3000619874990144432 + var_9)));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_21 [i_3] [i_5] [i_2 - 1] [i_3] [i_3] = (-12037 <= -15027);
                                var_18 = (((arr_7 [i_2 - 1]) | 784980348));
                                var_19 = ((var_4 || (arr_15 [i_3] [i_3] [i_4] [i_3 + 1])));
                                var_20 = (2313619005 - 26279);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
