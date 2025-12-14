/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((max(var_0, var_2)) << ((((((15514 << (7463386823412846021 - 7463386823412846009))))) - 40948))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            {
                var_13 = (max(6181382874649878776, (arr_6 [i_0] [i_1])));
                var_14 = (arr_1 [i_0]);
                var_15 = 745581583;
                var_16 = (min(var_16, (((-(arr_3 [i_1 + 2] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
