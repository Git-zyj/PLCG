/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_15));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 = (min(var_19, (var_3 + 1735026444)));
        var_20 = ((((((arr_1 [i_0]) ? ((-1735026427 ? (arr_0 [6]) : -932029679)) : ((var_15 ? var_13 : (arr_0 [i_0])))))) ? ((-18841 + (arr_1 [i_0]))) : ((~(27 / 41980)))));
        var_21 |= var_14;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_22 += 583595732;
        var_23 -= (arr_2 [14] [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {
        var_24 = ((((25628 ? var_5 : var_16)) & var_9));
        var_25 = ((~((var_7 ? var_3 : 591839925))));
    }
    var_26 = ((var_5 ? (!-1735026444) : (((~var_11) ? ((var_17 ? 177464065655448351 : var_3)) : var_16))));
    var_27 &= 11942972944537043344;
    #pragma endscop
}
