/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        var_11 = (arr_0 [i_0]);
        var_12 = 2147483647;
        arr_2 [i_0] [i_0 + 1] |= max((arr_1 [i_0]), (((((max((arr_0 [i_0]), var_1))) ? (arr_0 [i_0 - 4]) : ((1 ? 227 : 255))))));
    }
    #pragma endscop
}
