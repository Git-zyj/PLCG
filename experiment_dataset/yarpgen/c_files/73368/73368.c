/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 *= ((3121335217 << (((arr_0 [i_0]) - 27328))));
                var_19 = (max((arr_0 [i_0]), (max((arr_0 [i_0]), (arr_4 [i_1] [i_0])))));
            }
        }
    }
    var_20 = ((((max((max(3121335217, var_12)), -3121335220))) ? -26601 : ((8717947520000934499 ? var_7 : var_6))));
    #pragma endscop
}
