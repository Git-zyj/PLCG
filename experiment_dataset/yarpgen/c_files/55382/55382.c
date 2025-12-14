/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (var_5 / var_7)));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_11 = (max(1, (max(((var_7 * (arr_2 [i_0]))), (-97 > var_8)))));
        var_12 = 356931767;
    }
    #pragma endscop
}
