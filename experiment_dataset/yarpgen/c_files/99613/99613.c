/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_21 = ((+(((arr_6 [i_0] [i_1] [i_1]) / 12378070614319363717))));
                var_22 = (!var_19);
                var_23 = ((((var_9 ? ((2376892530 ? (arr_0 [i_1]) : 1)) : (arr_2 [i_0 - 1]))) % (((max(var_15, 1))))));
            }
        }
    }
    var_24 = (12378070614319363717 < 1);
    var_25 &= ((((((max(var_12, 0)) / var_14))) ? (~var_2) : (((var_5 ^ -983107432) / ((13201810748809450602 ? var_15 : var_6))))));
    #pragma endscop
}
