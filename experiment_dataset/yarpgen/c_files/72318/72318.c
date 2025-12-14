/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_8 == (((var_13 ? var_3 : (~var_2))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = (max(var_15, 1));
        arr_2 [i_0] [i_0] = var_7;
        arr_3 [i_0] = (((var_8 + (arr_0 [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_16 = var_2;
        arr_6 [i_1] = ((4294967291 ? -2115844650715373694 : (((var_9 ? 421863653 : 1778247195)))));
        var_17 *= ((15337 >> (((arr_4 [i_1] [i_1]) + 6750090785331428829))));
        arr_7 [i_1] = (-667313681 ? (arr_5 [i_1]) : var_3);
        arr_8 [i_1] = ((~(arr_4 [19] [19])));
    }
    #pragma endscop
}
