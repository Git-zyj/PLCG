/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((max(-4626887221779083904, var_0))) ? ((var_17 ? var_8 : var_15)) : var_12)) == -var_2));
    var_21 = (min((((((var_9 / var_10) + 9223372036854775807)) >> var_14)), (!var_17)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_22 = var_6;
                            arr_10 [i_1] = ((!((((arr_2 [i_0]) ? (max(-32724, -4626887221779083904)) : 4064604679)))));
                            arr_11 [i_1] = ((var_11 | (((((4064604689 ? 11238859759123692201 : var_2))) ? (max(var_10, 127)) : (arr_9 [i_2 - 1] [i_1] [i_3 + 1] [i_3 + 1] [i_3])))));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                arr_16 [i_1] [i_4] = ((var_15 > (arr_9 [i_0 - 1] [i_1] [i_2 + 2] [i_3 + 1] [i_2])));
                                var_23 += ((0 ? var_17 : (((arr_9 [i_2] [i_4] [i_2] [i_3] [i_4]) ? -115 : 125))));
                                var_24 = (((arr_6 [i_1] [i_0 - 3]) ? -128145809298503268 : (arr_4 [16] [i_1])));
                                arr_17 [i_1] [i_1] [i_2] = ((arr_14 [i_0 + 1]) == var_9);
                                var_25 ^= (arr_0 [i_4] [i_3 + 1]);
                            }
                        }
                    }
                }
                arr_18 [8] |= (((arr_13 [0] [1] [i_0 + 1] [i_0 + 1] [i_0 - 3]) ? (((!(arr_8 [i_1] [1] [1] [i_0])))) : ((var_10 ? (((!(arr_1 [i_0 - 1])))) : var_17))));
            }
        }
    }
    #pragma endscop
}
