/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (((max((var_12 == var_11), var_3)) == (var_6 && var_10)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = (min(var_14, var_4));
                var_15 = (arr_1 [i_1] [6]);
            }
        }
    }
    #pragma endscop
}
