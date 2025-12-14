/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((-var_7 % var_10) | var_13));
    var_20 = var_14;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 += (min((((-2147483647 - 1) ? 24093 : 1)), -1));
        arr_4 [i_0] [i_0] = (min((max((arr_1 [i_0]), 25960)), (arr_1 [i_0])));
        arr_5 [i_0] = 1023;
    }
    #pragma endscop
}
