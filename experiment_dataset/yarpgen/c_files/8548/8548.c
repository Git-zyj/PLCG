/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 = ((-(11822382181982614867 - var_2)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] |= (((((((min(1762395065, 6624361891726936748))) ? var_4 : ((65535 * (arr_0 [i_0])))))) ? (((arr_1 [i_0]) ? (arr_0 [i_0]) : var_0)) : ((((arr_0 [i_0]) && var_11)))));
        arr_3 [i_0] = var_6;
    }
    var_14 = var_3;
    #pragma endscop
}
