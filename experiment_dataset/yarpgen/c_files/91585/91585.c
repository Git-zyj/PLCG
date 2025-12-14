/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_2);
    var_16 = (((((((var_12 << (30222 - 30198)))) ? ((min(15872, 72))) : var_8)) > ((min(var_8, 4321)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = ((0 ? 4294951423 : -1683074843));
                arr_5 [i_1] [i_0] [i_1] = (min(15872, 5050541319192346427));
                var_18 = var_6;
                var_19 = (max((((0 ? -1683074861 : 2010399977))), (min(var_1, (arr_1 [i_0])))));
                arr_6 [i_0] = ((arr_2 [i_1 + 1] [i_1 - 4] [i_1 - 4]) ? (max(-var_8, var_10)) : (min((max(var_11, var_5)), -var_6)));
            }
        }
    }
    #pragma endscop
}
