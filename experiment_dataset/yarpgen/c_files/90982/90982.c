/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = (min(var_12, var_3));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_13 = (max(var_13, ((((((32767 ? 32755 : -32764))) && ((!(arr_2 [10]))))))));
        var_14 = ((-(arr_1 [i_0])));
        arr_3 [i_0 + 1] [i_0] = (min(((-(arr_1 [i_0]))), var_0));
        var_15 = (max(var_15, (arr_0 [i_0 + 1] [i_0 - 1])));
        var_16 ^= 57723;
    }
    var_17 = -32761;
    #pragma endscop
}
