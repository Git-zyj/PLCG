/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = (max(0, 0));
                var_20 = ((var_6 ? (~25116) : var_2));
            }
        }
    }
    var_21 = ((-1 ? var_5 : 4611686018426339328));
    #pragma endscop
}
