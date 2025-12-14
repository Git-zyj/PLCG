/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_17 *= ((-(max(-9, (var_2 >> 21)))));
                var_18 = (min(var_18, (((7 ? 39 : 208)))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, ((((arr_11 [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_4]) / (max(var_6, var_3)))))));
                                arr_13 [i_0] [i_1] [i_2] = (max((var_4 / var_15), (arr_3 [i_1 + 2] [i_2] [i_4])));
                                arr_14 [i_3] [i_1] [i_2] [i_3] [1] = ((((~(~1553115174))) == (((arr_4 [i_2 - 1] [i_4 - 1]) / ((53 ? -18383 : var_10))))));
                                var_20 = (max(var_20, 1));
                                var_21 = (max(var_21, var_4));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = 39;
    #pragma endscop
}
