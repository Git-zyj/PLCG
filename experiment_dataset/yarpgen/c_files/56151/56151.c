/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (-9223372036854775807 - 1);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 -= -44310;
        var_18 = (((((arr_1 [i_0]) >= (arr_1 [i_0])))) - -3968);
    }
    #pragma endscop
}
