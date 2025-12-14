/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += -15;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = ((((min(32762, var_8))) ? (((!5) % (arr_0 [i_0 + 1]))) : (arr_3 [15])));
                var_17 ^= 4794144335898114197;
                var_18 = ((!(((((((arr_0 [i_1]) ? (arr_0 [i_0]) : -29))) ? (((arr_4 [i_1] [i_0] [i_0]) % 6343241463109640018)) : (var_1 <= var_2))))));
            }
        }
    }
    #pragma endscop
}
