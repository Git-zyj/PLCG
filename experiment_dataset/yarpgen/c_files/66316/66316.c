/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_10 = ((((-(arr_0 [i_0]))) > 967203792));
        var_11 = (max(var_11, (arr_1 [i_0])));
    }
    var_12 = (max(var_12, (~2037646471)));
    #pragma endscop
}
