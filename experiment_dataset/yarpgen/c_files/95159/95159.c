/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    var_21 -= 255;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_22 &= ((-63 ? (arr_0 [8]) : ((5 ? 172 : (arr_0 [8])))));
        var_23 = (((((arr_1 [i_0]) < (arr_1 [i_0]))) ? ((var_11 ? (arr_1 [i_0]) : 0)) : ((((arr_1 [i_0]) <= var_16)))));
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
    }
    #pragma endscop
}
