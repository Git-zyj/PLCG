/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] = (arr_1 [7] [i_0]);
                var_18 = 9376072411175664786;
            }
        }
    }
    var_19 = ((((min(var_13, var_4))) ? (min(611601400737994349, 1750750275)) : ((min(1, -1750750272)))));
    #pragma endscop
}
