/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_10 ? (max(((var_12 ? 32760 : var_2)), var_3)) : var_12));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [0] [0] = ((22255 ? -117 : (arr_0 [i_0])));
        var_15 = (((arr_1 [i_0]) >= (((!(arr_1 [i_0]))))));
    }
    #pragma endscop
}
