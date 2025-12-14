/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(((~(min(-1217845258, 1)))), var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (!2139438108)));
                var_19 = ((-((max(1048575, -101)))));
            }
        }
    }
    var_20 = (-((var_2 ? var_8 : ((min(255, -1217845239))))));
    var_21 = (min(var_10, var_12));
    var_22 = (min(-15789, (!3812037077)));
    #pragma endscop
}
