/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 6521;
    var_13 = 45488;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_14 = (min(var_14, (((-((((max(40, 6511))) << (var_10 + 86))))))));
        arr_2 [i_0 - 1] [i_0] = (10129565638407465098 - (((var_11 ? var_6 : 65518))));
    }
    #pragma endscop
}
