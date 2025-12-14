/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_9;
    var_18 = ((max(var_9, var_10)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_1 - 2] [11] [11] = ((min(-var_10, var_0)));
                var_19 *= ((!(((var_4 ? var_2 : var_5)))));
            }
        }
    }
    #pragma endscop
}
