/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 += ((25 ? (((var_9 ? (~4480) : ((19 ? (arr_4 [i_0 - 2] [i_1]) : var_9))))) : (((~var_1) ? (((max(128, -36)))) : 6311717912764505386))));
                var_16 = (min(((((arr_1 [10]) ? (arr_1 [6]) : var_1))), 12135026160945046229));
                var_17 = var_3;
            }
        }
    }
    var_18 = var_13;
    #pragma endscop
}
