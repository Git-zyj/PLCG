/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = ((min((min(var_4, var_17), (arr_3 [1] [1] [i_1])))));
                var_21 = (max(var_21, (+-8710738619685566508)));
                var_22 = (arr_0 [i_0 - 1]);
            }
        }
    }
    var_23 = ((!((((var_15 - var_17) ? -514062357 : var_13)))));
    var_24 = -var_0;
    #pragma endscop
}
