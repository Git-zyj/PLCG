/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = arr_4 [i_0];
                arr_5 [i_0] = (~-28227);
            }
        }
    }
    var_15 ^= ((var_8 | (!var_5)));
    var_16 = 5;
    #pragma endscop
}
