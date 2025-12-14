/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_10 -= var_2;
        arr_2 [i_0] = (min((arr_0 [i_0]), (max((((arr_1 [i_0] [i_0]) ? var_6 : (arr_0 [i_0]))), (arr_1 [i_0] [i_0])))));
    }
    var_11 = (-var_0 - var_2);
    #pragma endscop
}
