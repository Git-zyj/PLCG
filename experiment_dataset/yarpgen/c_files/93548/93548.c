/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_0));
    var_18 = (max((((var_3 && 15608) - (!39774))), (min(((var_12 >> (var_8 - 37684))), ((var_3 ? var_5 : 15602))))));
    var_19 = (max(var_19, (((((min((max(49928, var_16)), 36123))) ? -13 : ((var_6 ? ((36369 ? 37507 : 29989)) : (4857 / var_4))))))));
    var_20 = (min((((((var_4 ? 58601 : 15602))) ? ((min(20577, 58601))) : var_5)), ((var_8 ? var_6 : var_5))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_21 = (((arr_1 [1]) * ((((min(58521, 54815))) / 55211))));
        var_22 |= arr_0 [2] [i_0];
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (15535 / 7741);
        arr_8 [i_1] = var_10;
        arr_9 [i_1] = ((10324 != (arr_1 [i_1])));
        var_23 |= arr_1 [i_1];
        var_24 = (max(var_24, (!60129)));
    }
    #pragma endscop
}
