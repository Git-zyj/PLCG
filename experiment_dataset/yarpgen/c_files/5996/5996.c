/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (max(var_6, ((var_5 ? (max(var_7, var_5)) : var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] [i_1] = (arr_6 [i_0] [i_1 - 2] [i_1 - 2]);
                var_13 = (var_5 | var_2);
                arr_9 [i_0] [i_1 - 2] = var_1;
                var_14 -= ((!(((min(-12401, var_7))))));
            }
        }
    }
    var_15 = (!var_6);
    var_16 = (var_4 & var_7);
    #pragma endscop
}
