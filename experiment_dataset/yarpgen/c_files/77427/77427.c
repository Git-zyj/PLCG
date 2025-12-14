/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_10 = 3272929332019643891;
        var_11 |= (((((var_2 ? -15266 : (arr_2 [i_0] [i_0])))) ? 125 : 15265));
        var_12 &= (-78 ? -1 : -78);
        var_13 = (var_5 % var_1);
    }
    var_14 = var_4;
    var_15 = ((var_0 * var_7) ? var_4 : (((((1073741823 ? var_4 : var_8))) ? (max(1073741835, 15243)) : ((min(var_3, var_4))))));

    /* vectorizable */
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        var_16 &= (arr_1 [i_1]);
        var_17 = (max(var_17, 63765));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_9 [i_2] |= -53;
        var_18 = ((-92 ? ((((arr_0 [i_2]) || 144))) : -1916647114));
        arr_10 [i_2] &= 3300246721;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = 15265;
        var_19 = (((arr_1 [i_3]) ? 3158566881 : (arr_11 [i_3])));
        var_20 = ((!(arr_1 [i_3])));
    }
    var_21 = (max(var_21, 32767));
    #pragma endscop
}
