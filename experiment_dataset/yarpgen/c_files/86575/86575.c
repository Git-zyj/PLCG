/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (-var_4 * (((((var_5 ? var_15 : var_9))))));
    var_17 = var_13;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = ((~((18446744073709551615 ? 199 : (18446744073709551602 != 199)))));
        arr_2 [i_0] = 5544125819320975547;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (arr_4 [i_1]);
        arr_7 [i_1] = (arr_3 [i_1]);
    }
    var_19 = 2981;
    #pragma endscop
}
