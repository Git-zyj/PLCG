/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= var_7;
    var_14 = ((var_6 ? (min(var_0, var_8)) : (!var_2)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_15 -= (arr_5 [i_0] [i_0] [i_0]);
                var_16 = (arr_1 [i_0]);
            }
        }
    }
    #pragma endscop
}
