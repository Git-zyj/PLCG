/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 = (max(var_12, (((((max(47, var_8))) - 33554416)))));
    var_13 = var_6;
    var_14 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = (((((14749825778081813356 ? 7 : 46))) ? var_5 : 1));
        arr_3 [i_0] = ((227 ? (arr_2 [i_0] [i_0]) : 18014398509481983));
    }
    #pragma endscop
}
