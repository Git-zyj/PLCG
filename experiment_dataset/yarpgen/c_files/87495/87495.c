/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((min(2997096182, -2997096182))), (min((max(var_8, -4428685170496222478)), var_10))));
    var_18 = 0;
    var_19 = (min(var_19, (!var_15)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = var_1;
                var_21 = (min(var_21, (((!((max(((var_12 ? var_1 : var_14)), ((min(var_7, var_2)))))))))));
            }
        }
    }
    #pragma endscop
}
