/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (max(((max(1880802790, var_5))), (((!var_0) ? (((-5765380645771653342 ? 5765380645771653331 : var_2))) : 14148335316072818920))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_2] = (max((~140737488355327), (((68 << (var_13 - 79))))));
                    arr_8 [i_2] [i_2] [i_2] [i_0] = (max((max((((var_12 ? 14004 : 1))), 9223372036854775794)), var_10));
                }
            }
        }
    }
    var_15 -= (min(654332662, -45));
    #pragma endscop
}
