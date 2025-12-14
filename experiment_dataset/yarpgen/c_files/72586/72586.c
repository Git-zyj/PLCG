/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_11 = (min(var_3, (arr_1 [i_0 + 1] [i_0 + 1])));
        var_12 = (((((-(arr_0 [i_0])))) ? 23 : ((min(32436, -32437)))));
        var_13 = 32436;
        var_14 = (max(((((0 ? (arr_1 [i_0] [9]) : -32437)) < (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_10)))), (((min((arr_1 [9] [9]), var_7)) <= 30321))));
    }
    var_15 = ((var_1 & var_9) <= (((8118126223072937878 ^ var_7) ? var_7 : var_1)));
    var_16 = (var_5 <= var_4);
    var_17 = (min(var_7, (min(var_7, (var_3 || var_6)))));
    var_18 |= var_5;
    #pragma endscop
}
