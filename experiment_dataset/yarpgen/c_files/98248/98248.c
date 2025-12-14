/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = var_6;
                var_13 = (var_0 | 1957249887);
            }
        }
    }
    var_14 = ((1957249887 - (~var_9)));
    #pragma endscop
}
