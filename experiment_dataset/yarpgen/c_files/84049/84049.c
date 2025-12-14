/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((arr_2 [i_0 - 3] [i_0]) ? (((arr_0 [i_0]) * var_0)) : var_7));
        var_17 += var_10;
        arr_4 [i_0] [i_0] = -104;
    }
    var_18 = (max(var_11, var_1));
    var_19 = ((-((25040 >> (!-25041)))));
    var_20 ^= (((((var_2 << (var_0 || -1573434172)))) ? (!var_16) : var_9));
    #pragma endscop
}
