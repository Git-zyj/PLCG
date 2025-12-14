/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((max(var_8, 1795039607)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (arr_2 [i_0]);
                arr_5 [i_0] [i_1 + 2] = (~((((min(3151581687717017089, var_4))) ? ((-(arr_0 [i_0]))) : (!536870911))));
            }
        }
    }
    var_16 = (max(2, 1090790372718409851));
    #pragma endscop
}
