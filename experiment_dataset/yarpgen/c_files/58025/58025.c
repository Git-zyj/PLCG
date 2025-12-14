/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_11 ? (min(var_14, -1576814988)) : (var_18 == var_7)))) < ((var_8 ? (var_14 + var_14) : (max(var_3, var_13))))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_20 = (min(var_20, ((min((!var_12), (((18863 ? 62662 : 62662))))))));
        var_21 = (((9172 ? 27367 : -3389730599796569766)));
    }

    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_22 ^= var_12;
        arr_4 [i_1] = var_6;
    }
    var_23 = ((!((((((9223372036854775807 << (22953 - 22953)))) ? (((var_9 ? var_9 : var_12))) : (max(var_5, var_9)))))));
    #pragma endscop
}
