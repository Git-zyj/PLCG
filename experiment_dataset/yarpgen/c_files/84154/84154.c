/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-((var_3 ? (6232 * 0) : ((65528 ? 163 : var_9))))));
    var_14 = ((-((-((var_1 ? var_5 : 32767))))));
    var_15 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1 + 1] = -6163324620822465495;
                arr_6 [i_1] [i_1] = (((-70 ? ((max(163, 142)) : ((38917 ? 26603 : 38921))))));
                var_16 = (((-(arr_0 [i_1 - 1]))));
            }
        }
    }
    #pragma endscop
}
