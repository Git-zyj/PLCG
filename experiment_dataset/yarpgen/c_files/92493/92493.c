/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_3] = (((((~(arr_7 [i_2])))) ? (arr_7 [i_2]) : 24864));
                            var_17 = (!-24845);

                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                var_18 = (max(var_18, (!9235)));
                                var_19 = (min(var_5, (max(-98, ((var_13 ? -779403106248469753 : (arr_5 [i_3] [i_2 - 1] [i_1 + 1])))))));
                            }
                            var_20 = ((~(arr_4 [i_0 - 1] [i_0 - 1])));
                        }
                    }
                }
                var_21 = ((~(max(229511692, -24870))));
                var_22 *= (((arr_9 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1]) ^ var_12));
                arr_15 [i_0] [11] [4] = (max(((((var_4 ? var_5 : -50)) + 19815)), (max(((5049054101126253884 ? var_14 : (arr_10 [i_0 - 1] [i_0 - 1] [i_1]))), (arr_13 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1])))));
                var_23 = (arr_6 [i_0] [i_1 + 1] [i_0]);
            }
        }
    }
    #pragma endscop
}
