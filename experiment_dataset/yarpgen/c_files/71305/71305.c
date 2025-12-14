/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1346147288;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_4] [i_0] = 1023;
                                var_16 = 44212;
                            }
                        }
                    }
                    var_17 ^= 8449960581920390080;
                    var_18 = 4337342581769183152;
                    var_19 -= -4457893527863406964;
                    arr_15 [i_0] [17] = 47;
                }
            }
        }
    }
    #pragma endscop
}
