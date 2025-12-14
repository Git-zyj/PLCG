/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_4 > var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (((~(arr_0 [i_1 - 2]))))));
                var_22 += (arr_5 [4] [5]);
            }
        }
    }
    var_23 = ((var_18 ? var_5 : (max(var_9, var_12))));
    #pragma endscop
}
