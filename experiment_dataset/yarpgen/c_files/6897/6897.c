/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_3;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 = (min(0, ((126 ? var_12 : -19575))));
        var_20 = var_2;
        var_21 = (-126 - var_11);
        var_22 = (max(var_22, ((((((126 ? 16422819300446524669 : -19709))) ? var_1 : (((var_7 ? -56 : (arr_1 [i_0])))))))));
        arr_4 [i_0] = (((var_16 ? var_14 : (max(-8926516452515914465, var_11)))));
    }
    #pragma endscop
}
