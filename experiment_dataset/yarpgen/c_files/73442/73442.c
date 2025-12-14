/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    var_21 *= var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_22 = ((!(((arr_0 [2]) <= (~var_11)))));
                arr_7 [i_0] [i_0] = (max(0, (((arr_2 [i_0]) ? (max(var_6, var_4)) : ((var_15 ? (arr_6 [i_0] [i_1] [i_1]) : -1665623084))))));
            }
        }
    }
    #pragma endscop
}
