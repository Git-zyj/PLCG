/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_7));

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (max(((((((-(arr_0 [i_0])))) && ((max(var_1, var_2)))))), ((var_9 ? ((-125 ? (arr_1 [i_0]) : (arr_0 [i_0]))) : (arr_1 [i_0])))));
        arr_3 [1] = (arr_0 [i_0 - 2]);
    }
    #pragma endscop
}
