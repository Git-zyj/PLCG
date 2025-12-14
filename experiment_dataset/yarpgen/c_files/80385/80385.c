/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 ^= 1;
        arr_2 [i_0] [0] &= ((max((arr_1 [i_0]), (arr_1 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_16 = ((((((var_11 ? var_0 : 13426108667935997194)))) || (var_1 == var_5)));
        arr_6 [i_1] [i_1] = -1940782381;
    }
    #pragma endscop
}
