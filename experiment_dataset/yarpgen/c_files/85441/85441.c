/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((-5996790292265742306 ? ((1 ? var_9 : -111)) : var_1));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_15 = (2841349917459301239 | 32767);
        arr_2 [i_0] = (((arr_0 [i_0 + 2]) ? (arr_1 [i_0 - 1]) : 949449090726077412));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_16 *= (((max(((var_12 ? 3404532849 : 3404532826)), -111)) <= 136));
        arr_7 [i_1] = -111;
    }
    var_17 = ((((var_8 ? 32764 : var_5)) << (((~20442) - 45093))));
    var_18 ^= ((((~((var_13 ? 0 : 3897020665)))) << (((var_3 + 2147483647) >> (var_6 + 15137)))));
    #pragma endscop
}
