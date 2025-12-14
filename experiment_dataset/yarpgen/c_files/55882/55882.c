/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max(var_9, var_2))) ? (min((min(var_4, var_0)), (var_0 ^ var_4))) : var_3));
    var_11 *= (((((var_6 ? (max(var_9, -855032842)) : var_3))) ? (!var_1) : ((var_7 >> (var_2 - 36444)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = (min(var_12, (-113 == -91)));
        var_13 = (max(var_13, var_7));
        var_14 -= var_5;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_15 = (max(var_15, ((((arr_2 [1]) + (max((arr_3 [i_1] [i_1]), ((((arr_2 [4]) - var_8))))))))));
        var_16 = (max(var_16, (((!((((min(112, (arr_0 [i_1])))))))))));
    }
    #pragma endscop
}
