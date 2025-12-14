/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!((max(((max(1, 224))), (var_18 & -120)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (((((arr_3 [i_0] [i_0]) + 2147483647)) << (((((arr_3 [i_0] [i_0]) + 88)) - 15))));
        var_21 = (min(var_21, var_15));
    }
    #pragma endscop
}
