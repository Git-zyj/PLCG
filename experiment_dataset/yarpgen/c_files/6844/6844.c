/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        arr_3 [i_0] [10] = (var_16 ? 7 : (arr_1 [i_0 + 2]));
        var_18 = -1;
    }
    var_19 = 57;
    var_20 = (min(0, -1362848730));
    var_21 = (min((min(var_11, (~1))), var_1));
    #pragma endscop
}
