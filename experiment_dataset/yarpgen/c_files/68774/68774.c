/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    var_17 = (~var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = 1677484708;
                var_19 = (((((arr_5 [i_1 - 1] [i_1 - 1]) & (arr_5 [i_1 - 1] [i_1 + 1]))) - (arr_0 [i_1])));
                var_20 ^= (max((arr_2 [i_0]), (arr_2 [i_0])));
                var_21 = (arr_2 [i_1]);
            }
        }
    }
    #pragma endscop
}
