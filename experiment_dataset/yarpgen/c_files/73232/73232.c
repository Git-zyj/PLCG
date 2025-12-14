/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_19 ^= (arr_0 [i_0]);
        var_20 = (max(var_20, ((min(var_8, ((0 ? 3 : 9201742757709996731)))))));
        arr_2 [i_0 + 1] = (max(((var_11 ? (arr_0 [i_0]) : (((arr_0 [i_0]) ? 1 : 896)))), (-4 + 2842129050)));
    }
    var_21 = ((((var_0 / -4540802526901812472) >> (var_18 > 5212668258651112058))) * var_13);
    var_22 = var_13;
    var_23 = (((((var_0 / var_0) ? (((1 ? var_10 : 1))) : ((1 ? 9223372036854775807 : var_14)))) >= var_2));
    #pragma endscop
}
