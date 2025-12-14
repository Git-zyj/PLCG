/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 = (((5 == 127) * (4080 + -150)));
                                var_17 = ((~(((~-137) | (~-123)))));
                                var_18 += ((169 ? 1 : 461422392));
                            }
                        }
                    }
                    var_19 += ((144 || (((214 ? 41 : 65535)))));
                    var_20 |= (((-461422392 | 4089079649) ? ((38 ? 127 : -150)) : (((1 << (32768 - 32765))))));
                    var_21 = (((-461422392 & 150) | 1));
                }
            }
        }
    }
    var_22 = (min(var_22, 0));
    #pragma endscop
}
