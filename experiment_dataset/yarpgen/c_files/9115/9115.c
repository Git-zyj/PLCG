/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;
    var_20 = ((((74 ? 74 : 87))));
    var_21 = 169;

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (3450255626 & 173);
        var_22 = (max(var_22, ((min((min((var_13 < var_16), (arr_1 [6]))), ((min(var_10, var_16))))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_23 = (((((var_12 + 9223372036854775807) >> (127 - 84))) / (~9223372036854775807)));
        var_24 = (max(var_24, ((((((((arr_4 [i_1 - 1]) && var_4)))) >= 12145163547112928084)))));
    }
    #pragma endscop
}
