/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 = ((((((arr_0 [i_0]) ? 0 : var_3))) ? ((((arr_1 [i_0] [i_0]) ? (var_10 ^ var_8) : (((arr_2 [9] [i_1] [9]) ? var_2 : var_5))))) : ((-(arr_6 [i_1])))));
                    arr_7 [i_0] [i_1] [i_1] = var_7;
                }
            }
        }
    }
    var_13 = ((var_6 ? (min(var_6, var_11)) : var_5));
    var_14 = ((((((((2061300799 ? 11196 : var_6))) ? var_1 : (((5388496227919839343 ? var_5 : 1)))))) ? ((((1 ? var_9 : var_10)) << ((((var_9 ? var_2 : 1352821151)) - 1714001699)))) : ((var_0 ? var_8 : -1))));
    var_15 = (min(var_15, -19314));
    #pragma endscop
}
