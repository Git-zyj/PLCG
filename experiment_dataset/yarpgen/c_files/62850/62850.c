/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = (--1986695613);
        var_19 = -var_17;
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_20 = (((1986695613 + (var_7 - 3359104811))));
        var_21 = (max(var_21, (min((((((((~(arr_4 [i_1] [i_1]))) + 2147483647)) << (((arr_0 [11]) - 2031470992))))), ((((!(arr_5 [11] [i_1]))) ? (2308271695 ^ var_9) : (1986695593 + 11137195724863641626)))))));
        var_22 |= var_5;
        var_23 = 1986695613;
    }
    var_24 = var_4;
    var_25 = (max(var_25, (2308271695 | 16918)));
    #pragma endscop
}
