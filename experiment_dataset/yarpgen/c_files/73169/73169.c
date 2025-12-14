/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= ((var_5 || (var_10 * var_6)));
    var_13 = ((-((var_10 ? ((var_6 ? var_6 : var_1)) : var_5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_14 = min((((1 && (var_8 || 63991)))), 4);
                                var_15 = ((-((var_4 << (((min((arr_7 [i_0] [i_0] [i_0] [i_0]), -939393189)) + 939393199))))));
                                var_16 = arr_10 [i_0] [15] [i_2] [i_2] [i_4];
                                var_17 += var_7;
                                arr_13 [i_0] [1] [i_1] [i_0] [i_4] = 8191;
                            }
                        }
                    }
                }
                var_18 = (min((min(18446744073709543424, 1)), 4));
            }
        }
    }
    #pragma endscop
}
