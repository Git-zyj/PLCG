/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= ((min(var_6, var_7)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = (((min((arr_4 [i_0] [i_0] [i_1]), (arr_3 [i_0])))) && (arr_4 [i_1] [i_0] [i_0]));
                arr_6 [i_0] [i_0] = 15975746697042390766;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_16 = (!((((((1 ? 1 : 1))) ? var_1 : 1))));
                            var_17 = (max(var_17, (((min(1, (arr_7 [i_3])))))));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                arr_14 [i_2] [i_2] [i_2] = ((var_7 ? (arr_11 [i_0] [i_3] [i_2] [i_3] [i_4] [i_2]) : var_9));
                                var_18 *= (1 >> 1);
                                var_19 = (((arr_2 [i_0]) - 322867646));
                                var_20 = (min(var_20, (~-26240)));
                            }
                            var_21 = (((~598649913) ? ((~(~1))) : (((var_7 && (((-(arr_2 [i_3])))))))));
                        }
                    }
                }
                var_22 = (arr_9 [1] [i_1] [1] [1] [i_0] [1]);
            }
        }
    }
    #pragma endscop
}
