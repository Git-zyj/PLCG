/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((((!var_3) - (arr_3 [i_0])))) / (min((var_6 - var_8), (arr_0 [i_0]))));
        arr_5 [i_0] = -var_9;
        var_10 ^= (((arr_3 [i_0]) ? ((((!var_1) || (((var_8 ? var_5 : var_5)))))) : ((((var_1 + (arr_1 [i_0])))))));
        arr_6 [i_0] [i_0] = ((var_9 ? (arr_1 [i_0]) : ((~(arr_3 [i_0])))));
    }
    var_11 = ((!(~var_3)));
    #pragma endscop
}
