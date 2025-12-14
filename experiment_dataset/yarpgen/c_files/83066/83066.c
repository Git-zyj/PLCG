/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -4294967294;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_14 = ((max((max((arr_1 [i_0] [i_0 - 1]), 0)), var_7)));
        arr_2 [i_0] |= (max(1, (((arr_0 [i_0 + 1]) ? 63 : (arr_1 [i_0] [i_0])))));
    }
    var_15 = var_3;
    #pragma endscop
}
