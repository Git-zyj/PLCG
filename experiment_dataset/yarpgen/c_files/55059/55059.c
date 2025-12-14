/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_0 | (0 == 33676)));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_14 = ((((-1 ? ((49196 ? 1 : -26258)) : (arr_1 [i_0]))) / var_11));
        var_15 = ((0 ? 1 : 1));
        var_16 = ((((((-(arr_1 [i_0]))) % (arr_1 [i_0 + 2]))) >> (var_2 + 10232)));
        var_17 = var_1;
    }
    var_18 = 119;
    var_19 = (min(var_19, ((max((((((var_6 ? var_4 : var_9))) ? var_11 : var_6)), ((var_0 << (var_2 + 10243))))))));
    #pragma endscop
}
