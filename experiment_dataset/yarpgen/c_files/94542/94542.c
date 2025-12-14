/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_1 + (max(((var_7 ? var_8 : var_5)), ((max(-2117325608, var_3)))))));
    var_12 = (((((((((2117325607 ? var_4 : var_0)) + 2147483647)) >> (!var_0)))) ? var_2 : ((((var_8 ? var_10 : -2117325631)) - (var_6 + 102)))));
    var_13 = (max(var_8, var_6));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((((14620690369654523045 ? var_5 : (arr_0 [i_0] [i_0]))) ? (arr_2 [i_0]) : ((((var_6 > (arr_3 [i_0]))))))));
        arr_5 [i_0] = (min(((1 ? var_8 : (((-127 - 1) ? var_5 : 1)))), ((((min(-49, var_4)))))));
        var_14 = (1 * 552108413);
        var_15 = 321906942892956437;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_8 [i_1] [3] = 3826053704055028552;
        var_16 -= ((((max(var_7, 0))) & (((((max((arr_1 [17]), (arr_3 [i_1])))) == (arr_3 [i_1]))))));
        var_17 = (((((14336 ? -84 : 1692536261))) || ((((max((arr_0 [i_1] [i_1]), (arr_0 [3] [4]))) | (arr_7 [i_1]))))));
        var_18 -= ((-2117325607 != (arr_6 [i_1] [i_1])));
    }
    #pragma endscop
}
