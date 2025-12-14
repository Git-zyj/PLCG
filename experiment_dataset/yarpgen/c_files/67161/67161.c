/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 = var_8;
        arr_2 [i_0] = (((max(14, (arr_0 [i_0]))) < (((var_3 ? var_1 : (arr_1 [6]))))));
    }
    var_16 = var_2;
    #pragma endscop
}
