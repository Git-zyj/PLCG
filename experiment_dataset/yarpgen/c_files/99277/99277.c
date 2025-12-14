/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (((var_13 + 2147483647) >> (((max(var_13, (min(7146138372516946069, -3321186459162205335)))) - 18446744073709551518))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (min((min((~67), -3854954377469186955)), ((((arr_0 [i_1] [i_1]) ? (arr_0 [8] [i_1]) : (arr_0 [i_0] [i_0]))))))));
                var_21 ^= (arr_3 [i_0] [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_9 [i_2] [i_2] [i_2] = (~-3854954377469186958);
                            var_22 = var_10;
                            var_23 = (((((-3646836768928904286 ? ((((18446744073709551615 > (arr_1 [i_0]))))) : (max((arr_6 [i_3] [i_2] [17] [i_0]), var_10))))) | 1));
                            arr_10 [i_2] [i_2] [i_2] [3] = 2211649220969473250;
                            var_24 |= 19;
                        }
                    }
                }
            }
        }
    }
    var_25 = (min(var_25, ((((((var_12 ? (min(1583112113289157373, var_16)) : ((var_15 ? 5 : var_1))))) ? var_7 : var_1)))));
    #pragma endscop
}
