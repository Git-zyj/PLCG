/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_13 = (((((var_2 - (arr_6 [i_1 + 1] [i_0 + 1])))) ? ((16384 - (max(var_4, 1)))) : (-69 + 8192)));
                var_14 = var_11;
            }
        }
    }
    #pragma endscop
}
