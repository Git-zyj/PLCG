/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 *= (min((min(-18373, (arr_0 [i_0] [i_0]))), ((1162184282 ? (arr_0 [i_0] [i_0]) : -113))));
        var_17 = (((arr_0 [i_0] [i_0]) - ((-4331 ? 3067698006 : (arr_0 [i_0] [i_0])))));
    }

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 = var_4;
        var_19 = (min(var_19, (((~(65528 | -113))))));
        var_20 &= ((((min((-32767 - 1), var_14))) == var_14));
    }
    var_21 *= var_8;
    #pragma endscop
}
