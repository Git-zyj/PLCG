/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 *= (((arr_9 [i_2] [i_2] [i_1] [i_2]) & (20090 || 1)));
                                arr_14 [i_0] [i_0 + 3] [i_1] [i_1] [i_2] [i_3] [i_3] |= 148133247;
                            }
                        }
                    }
                }
                arr_15 [i_0] = 1604394761;
                var_20 *= 31409;
            }
        }
    }
    var_21 = var_10;
    #pragma endscop
}
