/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0 + 1] [i_0] = (var_4 - 503316480);
        arr_4 [i_0] [i_0] = (arr_1 [i_0 - 1] [i_0 - 1]);
        arr_5 [i_0] [i_0] = (((arr_1 [i_0 - 1] [i_0 + 1]) ? ((var_7 ? var_5 : var_2)) : var_5));
    }
    var_11 = (max(var_11, ((!((var_2 == (!var_5)))))));
    #pragma endscop
}
