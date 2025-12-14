/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = (arr_4 [i_0] [i_0] [i_0]);
                var_14 ^= (min(((~(max((arr_2 [i_1]), 845990821)))), 3448976489));
            }
        }
    }
    var_15 = (min((max(var_2, (!var_5))), (var_5 & -1)));
    #pragma endscop
}
