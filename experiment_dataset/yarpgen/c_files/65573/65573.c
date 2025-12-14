/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((min(((-28914 ? var_4 : var_7), var_11)))))));
    var_20 = (max(10471887342339692368, var_3));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = var_9;
                var_22 = ((-(max((max(var_3, 15)), (!var_0)))));
            }
        }
    }
    #pragma endscop
}
