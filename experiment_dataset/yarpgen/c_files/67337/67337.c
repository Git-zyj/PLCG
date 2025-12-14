/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (((((min(var_10, var_9)))) ? var_9 : ((0 ? ((var_1 ? var_6 : 13932607646087433420)) : (((max(var_8, var_6))))))));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_13 = (max(var_13, ((min((var_3 / 49152), (max((((-(arr_0 [i_0 - 2] [i_0])))), (var_9 % var_11))))))));
        var_14 *= ((((~((((arr_1 [i_0] [i_0]) > 1))))) != (arr_0 [i_0 - 2] [i_0 - 2])));
        var_15 = var_9;
        var_16 *= (((~var_5) & (!var_2)));
    }
    var_17 = ((((min((var_7 | var_0), (max(var_11, var_0))))) ? (((((min(-115, var_6)))) & var_5)) : var_0));
    #pragma endscop
}
