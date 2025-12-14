/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    var_13 = (((-122 ? -1099197904 : var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] |= (max((((arr_2 [i_0]) ? (arr_4 [i_1]) : (min(1099197903, 92)))), (((((var_9 ? (arr_3 [3] [i_1] [i_1]) : var_3)) > ((-2 ? 39602 : var_4)))))));
                var_14 = (min(var_2, (((((11136213224643103851 ? (arr_3 [1] [i_1 + 1] [i_0]) : (arr_2 [i_1 + 1])))) ? var_9 : 184))));
                arr_6 [i_0] [i_0] = (((arr_3 [i_0] [i_1] [i_1]) ? ((-(1 > 13018))) : (min(255, (max(1099197903, -406261228))))));
            }
        }
    }
    var_15 = var_3;
    #pragma endscop
}
