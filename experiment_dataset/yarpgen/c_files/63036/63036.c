/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_6, ((((max(1, var_11))) ? var_2 : ((var_13 ? var_3 : var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (~var_6)));
                arr_6 [i_0] [21] [1] = ((((-((-705 ? 1 : var_4)))) == (((max((0 > var_1), ((!(arr_5 [i_0] [i_0] [14])))))))));
            }
        }
    }
    var_18 = -var_8;
    #pragma endscop
}
