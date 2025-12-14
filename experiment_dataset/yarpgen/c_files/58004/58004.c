/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = var_0;
                var_14 |= var_10;
            }
        }
    }
    var_15 = (min(((min(var_1, var_1))), (((var_11 && ((min(1, var_4))))))));
    var_16 = 1;
    var_17 = var_6;
    var_18 = ((var_8 < ((max((!var_1), (~var_0))))));
    #pragma endscop
}
