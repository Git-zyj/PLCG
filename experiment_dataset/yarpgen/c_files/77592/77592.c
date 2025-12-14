/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min(var_0, var_1))) < (((((1 < 14) != (var_8 == var_3)))))));
    var_18 = (max(var_8, 42));
    var_19 ^= var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] |= ((var_15 ? (arr_1 [i_0]) : (arr_2 [i_0])));
        var_20 = (min(var_20, (((~(arr_0 [i_0] [i_0]))))));
    }
    #pragma endscop
}
