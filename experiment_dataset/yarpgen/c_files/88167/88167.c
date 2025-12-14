/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0 + 3] = (max((arr_1 [i_1] [1]), (var_9 - var_1)));
                var_13 *= (arr_2 [i_0 + 2] [i_0 + 2] [i_0 + 1]);
            }
        }
    }
    var_14 = (max(var_14, ((((min(8855719140740363214, (min(8855719140740363194, var_3)))) * var_5)))));
    var_15 = var_11;
    #pragma endscop
}
