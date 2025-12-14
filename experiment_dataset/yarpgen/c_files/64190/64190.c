/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_5 || var_1);

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_11 = arr_0 [i_0];
        var_12 = (-((max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))));
    }
    var_13 = (((((var_3 ? var_4 : var_9)) != var_7)));
    #pragma endscop
}
