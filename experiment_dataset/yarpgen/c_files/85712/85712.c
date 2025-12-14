/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((min(var_5, var_14)))) ? (((((var_15 ? var_3 : var_13))) ? var_6 : var_5)) : var_7));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 -= (arr_0 [i_0]);
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) ? var_15 : (arr_0 [i_0])));
        var_18 -= (arr_1 [i_0]);
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_19 = ((((max(var_14, (arr_6 [i_1])))) ? (arr_6 [i_1]) : (((var_7 + 9223372036854775807) << (((-7900090423283372908 + 7900090423283372931) - 23))))));
        var_20 = ((-(arr_6 [i_1])));
        var_21 -= ((((min(-1345586415, (arr_4 [0])))) ? ((var_8 << (((-50306 + 50311) - 5)))) : var_9));
        var_22 = (max(var_6, (((-(min(var_0, (arr_3 [i_1] [i_1 - 1]))))))));
        var_23 -= ((+((var_12 ? (arr_4 [i_1 + 1]) : (arr_4 [i_1 - 1])))));
    }
    var_24 = 2434437061;
    #pragma endscop
}
