/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 541676515;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_11 = ((min(var_4, -var_4)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_12 &= -7238599582373827280;
                                var_13 -= ((~(min((arr_4 [i_0 + 1] [i_1 - 1]), var_5))));
                                arr_14 [i_0] [i_1] [i_2] [i_2] = (arr_9 [i_0] [i_1] [i_2] [i_3]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (min(var_14, var_6));
    #pragma endscop
}
