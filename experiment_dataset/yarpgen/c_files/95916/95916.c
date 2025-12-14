/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 -= 1023;
                var_20 -= (~1);
            }
        }
    }
    var_21 = (~var_2);
    var_22 = ((1 ? var_9 : (var_13 - var_2)));
    var_23 = (min(var_23, var_17));
    var_24 = 22072;
    #pragma endscop
}
