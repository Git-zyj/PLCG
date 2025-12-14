/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_4;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (((((max(5815, var_18))) ? (arr_0 [i_0]) : ((max(var_7, var_6))))));
        var_20 = var_0;
    }
    #pragma endscop
}
