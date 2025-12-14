/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = (((((1581675162 ? (arr_4 [i_0] [i_1]) : 3265845879766304369))) ? (((1581675162 ? var_9 : var_8))) : ((((arr_1 [i_0]) ? ((-(arr_0 [i_0]))) : (arr_5 [i_0]))))));
                var_13 = (((((4874414758247542511 ? 1581675162 : 1073489316))) ? (((((max(var_9, -6467486423179399395))) ? 10683490497600571320 : (min(var_7, (arr_2 [1] [1])))))) : -39));
            }
        }
    }
    var_14 *= ((((min(var_9, var_7)))));
    var_15 -= (((~-1461480395) ? ((-1073489331 ? -1073489331 : -932315895)) : (((!(((var_11 ? var_7 : var_8))))))));
    #pragma endscop
}
