/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((((((((var_7 ? var_9 : var_9))) ? (max(var_5, var_6)) : var_10)) + var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 |= (((min(((min(37, 27))), var_4)) - 833004054));
                var_20 = var_9;
            }
        }
    }
    var_21 = (!var_15);
    var_22 = ((min(var_17, ((min(var_8, var_13))))));
    #pragma endscop
}
