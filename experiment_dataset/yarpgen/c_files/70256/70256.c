/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((var_11 ? var_11 : ((var_4 ? 1 : ((var_3 ? var_3 : var_3))))));
    var_13 = (~var_1);
    var_14 = var_7;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 = var_9;
        var_16 = (max(var_16, (arr_1 [1] [1])));
        arr_2 [i_0] = (((((((arr_1 [i_0] [i_0]) ? (min((arr_0 [i_0] [i_0]), var_3)) : ((((!(arr_0 [i_0] [i_0]))))))) + 9223372036854775807)) << ((((((((((arr_1 [i_0] [i_0]) % var_0))) ? (((min(204, var_2)))) : var_1)) + 4088)) - 53))));
        var_17 |= ((-(((arr_0 [i_0] [i_0]) / (arr_0 [i_0] [i_0])))));
    }
    var_18 |= ((-((max(var_10, 196608)))));
    #pragma endscop
}
