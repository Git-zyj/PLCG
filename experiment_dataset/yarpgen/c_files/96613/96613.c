/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((min(var_10, ((max(9223372036854775807, var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [1] [i_1] [13] = (arr_2 [i_0]);
                arr_7 [i_1] = var_9;
            }
        }
    }
    var_13 = ((9223372036854775807 ? (max((1 > var_4), var_5)) : (min((max(-9223372036854775780, 31)), (var_8 + var_2)))));
    #pragma endscop
}
