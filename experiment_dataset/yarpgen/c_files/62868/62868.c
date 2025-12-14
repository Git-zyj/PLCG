/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_19 -= (arr_0 [i_0] [i_0 - 2]);
        arr_4 [i_0 - 2] = ((!(arr_3 [i_0] [i_0])));
        arr_5 [i_0] = ((~(arr_1 [i_0 + 1])));
        var_20 = (((-99 + 67) | 255));
    }
    var_21 = (var_17 ? ((-var_12 ? ((min(255, var_16))) : 227)) : var_2);
    var_22 = -var_18;
    var_23 -= 28;
    #pragma endscop
}
