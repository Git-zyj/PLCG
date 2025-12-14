/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    var_15 = (max((((max(var_12, var_9)) * ((-1 ? var_10 : var_7)))), ((max(1, (!var_3))))));
    var_16 = (min(var_16, var_11));
    var_17 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (-127 - 1);
                var_19 = (min(var_19, (+-3380045516951317328)));
            }
        }
    }
    #pragma endscop
}
