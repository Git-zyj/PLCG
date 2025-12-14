/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                var_12 = (min(var_12, ((min(21541, 112499692919570986)))));
                arr_4 [i_0] = ((var_9 ? (max((((!(arr_1 [i_0])))), ((-(arr_1 [i_0]))))) : var_0));
                var_13 = ((!(arr_0 [i_1])));
            }
        }
    }
    var_14 = (!var_5);
    #pragma endscop
}
