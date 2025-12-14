/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_11 = (1 ? 0 : (-127 - 1));
                var_12 = (((max(var_0, (arr_4 [22] [i_1]))) - (arr_2 [i_0 - 2] [i_0 - 1] [i_1 + 1])));
            }
        }
    }
    var_13 = var_3;
    var_14 = var_9;
    #pragma endscop
}
