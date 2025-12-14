/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_0] = ((((((arr_5 [i_0] [i_0] [i_0 + 1] [i_0]) / (6005206227808927877 != 22518)))) < ((((5735743797012115070 ? 1099507433472 : 4261795107927269952)) >> (((~3047412732) - 1247554504))))));
                            var_16 = ((var_13 & ((10988934702388467455 ? ((31 ? 17 : 8178636439220942880)) : 242))));
                            var_17 ^= (((~(((22518 > (arr_2 [i_0])))))));
                        }
                    }
                }
                var_18 ^= ((~(max(-52, (1099507433449 | 36)))));
            }
        }
    }
    var_19 = (min(var_19, ((max(0, 43018)))));
    #pragma endscop
}
