/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_20 += ((-(((((3141658571 ? 1 : 1456286434))) ? ((((arr_2 [18]) ? (arr_0 [i_0]) : 21171))) : ((23803 ? 2051108801 : -2121))))));
                var_21 = ((0 ? (!-3) : (arr_1 [i_1 + 1])));
                arr_6 [i_0] = -8192;
                arr_7 [i_0] [i_1] [i_0 + 3] = ((!(~4398046511104)));
            }
        }
    }
    var_22 = var_9;
    #pragma endscop
}
