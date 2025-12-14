/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= ((((((var_7 || 107) - (var_7 || var_0)))) || (!107)));
    var_16 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = (arr_3 [i_1]);
                var_18 = (max(1, (((arr_1 [i_0] [i_1 - 3]) + 130))));
            }
        }
    }
    #pragma endscop
}
