/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = ((((!(arr_0 [i_1] [i_1 + 3]))) ? (((((var_9 ? var_4 : var_9))) ? (min(var_0, var_12)) : var_8)) : -74));
                var_17 = (((arr_1 [i_0]) | (((!var_5) ? ((((!(arr_0 [15] [i_1]))))) : (arr_1 [i_0])))));
            }
        }
    }
    var_18 = ((((max((var_13 > var_5), (~var_15)))) ? var_6 : var_8));
    var_19 = var_3;
    #pragma endscop
}
