/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = var_3;
        var_17 ^= (var_6 ? (arr_1 [i_0]) : (arr_1 [i_0]));
        var_18 = (min(var_18, var_11));
    }
    var_19 = (max(var_19, (((((max(-26234, -26234))) ? ((~(var_8 / var_6))) : (var_0 & var_7))))));
    #pragma endscop
}
