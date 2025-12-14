/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 ^= var_10;
        var_19 = ((((65524 ? var_1 : (arr_2 [i_0]))) == ((((arr_2 [i_0]) - (arr_2 [i_0]))))));
        var_20 = (max(var_20, (arr_1 [6])));
    }
    var_21 = ((var_4 ? ((var_5 ? var_0 : var_16)) : var_2));
    var_22 &= var_0;
    var_23 = ((var_3 ? 211042091 : ((var_11 ? var_5 : ((var_4 ? -109 : var_3))))));
    #pragma endscop
}
