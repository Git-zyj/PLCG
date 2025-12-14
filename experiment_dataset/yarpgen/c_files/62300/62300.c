/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_1;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 ^= 2305702271725338624;
        arr_3 [i_0] = var_9;
        var_15 *= ((((!(arr_1 [i_0]))) ? 79 : (6 || var_10)));
    }
    var_16 = var_7;
    #pragma endscop
}
