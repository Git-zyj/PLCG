/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = (arr_2 [i_1] [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = (((((((arr_8 [i_1] [i_2] [i_3] [i_4]) % var_5)) | var_12)) - var_14));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] [i_4] = (max(-1625184292, (-127 - 1)));
                                var_18 = (!25950);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            {
                var_19 = ((+(((((var_14 ? (arr_10 [i_5] [i_6 + 1]) : var_3))) ? var_16 : (max(var_16, var_12))))));
                arr_24 [i_6 + 1] [i_5] = (arr_1 [i_5]);
                var_20 = (((-(arr_1 [i_6 - 1]))));
                arr_25 [i_5] [i_5] [i_5] = var_7;
            }
        }
    }
    #pragma endscop
}
