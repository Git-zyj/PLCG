/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((min((var_1 / var_7), var_4)) < var_5));
    var_12 = var_7;
    var_13 = (min(((~((var_9 << (var_8 - 61))))), (min(var_8, var_2))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_14 ^= (arr_3 [i_0]);
        arr_4 [i_0] = ((min(var_6, var_9)) * ((min((min((arr_1 [i_0]), var_7)), -11))));
        var_15 -= ((~(arr_1 [i_0])));
        var_16 = (max(var_9, var_8));
    }
    var_17 = (min(var_17, ((((-44940525 ? -1 : 0)) < ((var_1 + (var_5 - var_4)))))));
    #pragma endscop
}
