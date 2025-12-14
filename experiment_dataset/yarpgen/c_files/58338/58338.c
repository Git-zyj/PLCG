/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((-7726 ? 3736322276 : -7726)))) ? var_17 : var_16));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_20 = min((((min(7725, var_10)))), (min(((min(var_6, var_12))), ((109 ? 7725 : var_14)))));
                var_21 += -117;
            }
        }
    }
    #pragma endscop
}
