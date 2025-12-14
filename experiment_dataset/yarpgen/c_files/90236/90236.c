/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((min(791965895, var_13)) + var_7));
    var_16 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_17 ^= var_14;
                                var_18 = 791965895;
                                var_19 &= (arr_10 [i_0] [i_4] [i_2] [6] [i_4]);
                            }
                        }
                    }
                    var_20 = -1;
                }
            }
        }
    }
    #pragma endscop
}
