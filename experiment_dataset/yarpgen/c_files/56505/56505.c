/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_0));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 ^= ((((!(arr_0 [i_0])))));
        arr_2 [i_0] [2] = (max(((max(-1051944378683630429, 1465972622))), (((arr_0 [i_0]) & (((arr_0 [i_0]) ? var_1 : (arr_0 [i_0])))))));
    }
    #pragma endscop
}
