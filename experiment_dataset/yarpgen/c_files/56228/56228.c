/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((1 >> (26143 - 26141)));
        var_11 = (min((((~(arr_0 [i_0])))), 1));
    }
    var_12 *= (~368998952);
    #pragma endscop
}
