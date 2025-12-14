/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [4] |= (((((var_9 ? 1569621493343013180 : 10658486477833650544))) || (((-14801 ? -14817 : var_3)))));
                var_21 = (max(var_21, ((17729 ? 140 : ((-14801 ? 0 : 38))))));
                arr_5 [4] |= ((2618238240176410271 ? ((min(1, 1336602822))) : 12976563322781968764));
            }
        }
    }
    var_22 = var_9;
    #pragma endscop
}
