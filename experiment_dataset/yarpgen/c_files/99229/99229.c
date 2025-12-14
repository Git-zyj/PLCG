/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-var_1 ? -17466 : var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = (!17471);
                var_17 = -72923915;
            }
        }
    }
    #pragma endscop
}
