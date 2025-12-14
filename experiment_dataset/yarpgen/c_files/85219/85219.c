/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = -3811;

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_17 = (!var_8);
                        arr_12 [i_1] [i_3] = var_9;
                        arr_13 [i_3] = ((1 ? 11233040409666703943 : 126));
                    }
                }
            }
        }
    }
    var_18 = ((!(((var_8 ? var_10 : (var_0 ^ var_15))))));
    #pragma endscop
}
