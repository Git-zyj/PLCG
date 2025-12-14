/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [12] &= (((~var_2) ? (arr_0 [2]) : (((1152673324 % (max(1, -1032873315669970669)))))));
        arr_4 [i_0] [i_0] = (arr_0 [i_0]);
    }
    var_15 = ((((-var_11 >> (var_1 - 66))) << ((((var_7 % (min(1, -8106506920794356706)))) - 73))));
    #pragma endscop
}
