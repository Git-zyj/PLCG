/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = (arr_2 [i_1]);
                arr_6 [i_1] [7] [i_1] &= 35401;
                arr_7 [i_0] = ((!(arr_5 [i_1 - 1])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_14 = var_12;

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_15 &= ((var_10 - (((arr_12 [i_2 + 2] [i_1]) - var_1))));
                                var_16 = 35401;
                                var_17 = (((-18 ? 30134 : var_5)));
                                arr_17 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = var_0;
                            }
                            var_18 = -1;
                        }
                    }
                }
                var_19 = (((((var_11 + (1 - 0)))) ? (var_6 - -74) : var_11));
            }
        }
    }
    var_20 = (!var_1);
    var_21 = ((45115 ? 182 : 137438949376));
    var_22 = var_3;
    #pragma endscop
}
