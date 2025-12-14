/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (i_0 % 2 == 0) ? (min((((arr_1 [i_0]) >> (236 - 236))), (-8913511124516587556 >= 236))) : (min((((((arr_1 [i_0]) + 9223372036854775807)) >> (236 - 236))), (-8913511124516587556 >= 236)));
        var_13 += var_5;
        arr_3 [i_0] [i_0] = ((2 / ((-(arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_14 = (max(var_14, (((((((~24717362) ? (min(var_10, 1)) : 128))) ? (-var_1 >= -24717362) : (var_3 != var_6))))));
        arr_6 [i_1] [i_1] = (max(((((arr_4 [i_1]) <= var_10))), (((arr_1 [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_4 [i_1])))));
    }
    var_15 = var_9;
    var_16 = 20;
    var_17 = -var_12;
    #pragma endscop
}
