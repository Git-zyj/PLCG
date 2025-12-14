/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = -4026;
                var_20 = var_13;
            }
        }
    }
    var_21 = (min(var_21, var_4));
    var_22 = 1641897987;
    #pragma endscop
}
