/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_10 = (min(var_10, (((((min((((arr_0 [i_0]) << (arr_0 [i_0]))), (arr_0 [11])))) ? (((min((min((arr_1 [i_0]), (arr_1 [i_0]))), (arr_0 [i_0]))))) : 4294967295)))));
        var_11 = (arr_0 [i_0]);
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_4 [i_1] &= 1;
        var_12 = (arr_0 [10]);
    }
    var_13 = (min(var_13, var_2));
    #pragma endscop
}
