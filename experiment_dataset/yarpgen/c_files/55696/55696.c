/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0 - 2] [i_1] = arr_0 [i_1 - 1];
                    arr_10 [13] [i_1 - 2] [i_1] [i_1] = arr_6 [14];
                }
            }
        }
    }
    var_17 = (min(var_17, var_0));
    #pragma endscop
}
