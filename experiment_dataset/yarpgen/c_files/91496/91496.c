/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((!var_7) ? var_6 : var_5))) ? 1 : (((~7) ? var_6 : ((1 ? var_1 : 2147483647))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = ((1 ? -2 : 8));
                var_16 = ((23 ? 28543 : var_7));
            }
        }
    }
    #pragma endscop
}
