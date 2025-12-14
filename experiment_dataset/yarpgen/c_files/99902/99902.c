/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~1);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [4] = ((max(((26 ? 26 : 1)), (-27 >= -27))));
        var_16 = (arr_0 [i_0]);
        var_17 = (((min((arr_1 [5]), (arr_0 [i_0]))) & (((((-1 || -22240) && (!232)))))));
        var_18 = (min((((var_6 == var_4) ? -504 : var_7)), ((((var_3 ^ var_1) ? (((var_3 + 2147483647) << (var_7 - 145))) : var_3)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 = (max(var_19, ((((((var_7 ? var_3 : var_2))) ? (-7796 & 22239) : (((arr_5 [1]) ? var_8 : 443642125)))))));
        var_20 = (((((var_6 ? var_6 : (arr_4 [i_1] [i_1])))) ? ((((var_3 + 2147483647) >> (var_0 + 347420734)))) : (arr_5 [i_1])));
    }
    #pragma endscop
}
