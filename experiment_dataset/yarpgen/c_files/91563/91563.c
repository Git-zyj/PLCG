/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((-10857449906456768108 ? ((0 ? 21215 : 1) : (!-215925588)))));
    var_17 = ((var_11 - (((~-21216) ? -4419662235399403147 : -119))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = 536870911;
                var_19 = (((119 / -21213) ? 39 : 169));
            }
        }
    }
    #pragma endscop
}
