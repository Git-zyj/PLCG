/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (max((min(var_1, 0)), (max(var_1, 0))));
        arr_3 [i_0] = (~((360034653 ? 1924046755219283647 : var_13)));
        arr_4 [i_0] = ((!((max((!-8), var_2)))));
    }
    var_15 = (max(((4029 ? var_6 : -1)), (((var_2 && (!var_9))))));
    #pragma endscop
}
