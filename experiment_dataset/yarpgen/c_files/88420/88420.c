/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = (1 - 59223);
                var_12 &= ((!(((-6614 ? 6613 : 59223)))));
            }
        }
    }
    var_13 = (((max(-180677450, 59223))) ? var_3 : var_4);
    #pragma endscop
}
