/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = ((+((-(((arr_0 [13]) - (arr_0 [i_0])))))));
        arr_2 [15] [i_0] = var_18;
        var_21 = 15803055063137397401;
    }
    var_22 = var_12;
    var_23 = var_8;
    #pragma endscop
}
