/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    var_19 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = (((-1 + 2147483647) << (((arr_1 [i_0 - 2] [i_0 + 1]) - 1))));
                var_21 = (max((~var_3), (((arr_3 [i_1 - 1] [i_1 + 2] [i_1 + 3]) + (max(940268584, (arr_3 [i_0] [i_0] [i_0])))))));
            }
        }
    }
    #pragma endscop
}
