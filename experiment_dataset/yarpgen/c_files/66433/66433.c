/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((var_4 ? (((!var_16) | (arr_1 [i_0] [i_0]))) : (arr_0 [i_0])));
        var_19 ^= (((((((max(63, (arr_1 [1] [1])))) ? var_0 : var_11))) ? (((((arr_0 [i_0]) ? (arr_1 [14] [1]) : var_15)))) : -58));
    }
    var_20 = -58;
    #pragma endscop
}
