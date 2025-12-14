/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    var_18 += (((max(var_10, var_3))) || (((var_0 ? (1 && var_12) : (65535 || var_5)))));
    var_19 = (max(var_19, (((var_5 ? 65533 : (((65535 ? 0 : 61970))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_20 = (((arr_1 [i_0] [i_2]) | ((var_7 + (min(15, -1))))));
                            var_21 = (~3731674726);
                            var_22 = (min(var_22, 82));
                        }
                    }
                }
                arr_10 [i_0] [i_1] = (var_3 && 0);
            }
        }
    }
    var_23 -= (((var_10 | 12652267222114721939) | (min(var_11, var_0))));
    #pragma endscop
}
