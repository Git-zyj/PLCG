/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_10, 4294967295));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = (((arr_1 [1]) && 11));
        var_15 -= ((((var_8 - (arr_0 [i_0])))) ? 2028734372 : (arr_0 [i_0]));
    }
    #pragma endscop
}
