/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 16;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_2 [i_0 + 1] [i_0 - 2]) || (var_5 & var_16)));
        var_18 = (min(var_18, 48));
    }
    var_19 = ((((min(var_5, (max(var_4, 295412411))))) ? var_6 : (min(var_2, (-1219295258 / var_13)))));
    var_20 = (min(var_20, var_12));
    #pragma endscop
}
