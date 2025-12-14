/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((min(255, 4391929788481770916))) && ((min(var_2, var_8))))) ? ((var_1 ? (!601) : (max(var_4, var_1)))) : var_10));
    var_13 |= ((var_1 ? (max(var_9, ((min(var_3, var_8))))) : (((-9845 <= 17572) ? (((var_9 ? 48410 : var_8))) : var_2))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_14 = ((((16 ^ (~4075128842))) | ((1589706349 ? 1793463811 : 89))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_15 = ((+((~(((arr_9 [i_0 - 2] [i_0 - 2]) ? (arr_6 [i_2] [i_1] [i_0]) : (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [8] [i_1])))))));
                                var_16 -= 15344244828477862020;
                                var_17 *= (1 ^ (((arr_13 [i_4] [i_3] [i_3] [i_3 + 1] [i_0 + 1] [i_0 + 1] [i_4]) & (arr_13 [i_2] [i_3 - 1] [i_2] [i_3 - 1] [i_3] [i_0 + 1] [i_2]))));
                                arr_15 [i_0] [i_0] [0] [i_3 - 1] [i_4] &= ((3557768571 ? 1386694295892337754 : (arr_0 [16])));
                            }
                        }
                    }
                }
                var_18 = var_2;
            }
        }
    }
    #pragma endscop
}
