/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, ((((((arr_6 [i_2 + 1] [16] [i_2 + 1]) ? var_5 : var_18)) / var_10)))));
                    var_21 = -var_17;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_22 += 0;
                                arr_15 [12] [i_2] [i_2] [i_1] = ((!(((var_16 | (((-(arr_9 [i_0] [i_1] [i_2] [i_4 + 1])))))))));
                                var_23 = arr_6 [i_2] [i_2] [i_2];
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = 32640;
    var_25 = (min(var_25, -var_2));
    var_26 = (((((((max(10, var_1))) ? var_12 : (var_17 > var_8)))) ? 16777216 : var_19));
    #pragma endscop
}
