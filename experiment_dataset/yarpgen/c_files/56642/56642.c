/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (min(1, (~var_5)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 += (~24293);

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_10 [19] [i_1] [i_3] [i_3] = var_7;
                        arr_11 [i_0] [9] [i_0] = 127;
                    }
                }
            }
        }
    }
    #pragma endscop
}
