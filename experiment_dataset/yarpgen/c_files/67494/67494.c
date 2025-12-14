/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_18 &= (min((min(-726766657, (arr_2 [i_1]))), 222));
                arr_4 [4] [10] [i_0] = (arr_0 [13] [i_1]);
            }
        }
    }
    var_19 = ((-(((var_0 ? var_4 : var_5)))));
    #pragma endscop
}
