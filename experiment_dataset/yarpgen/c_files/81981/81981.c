/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = max(1389849626, (~-24));
    var_11 = ((-(((((112 ? var_7 : 77))) ? var_4 : (4170775430 + var_8)))));
    var_12 = (max(var_12, var_6));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_13 = (max(var_13, ((min((min((arr_1 [i_0] [i_0]), 0)), var_8)))));
        var_14 = (max(((-109 ? 2694670043 : 40)), (!35056)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_15 = ((~(((arr_3 [i_1]) ? 1 : var_7))));
        var_16 = (~var_4);
        var_17 = 186;
        var_18 = ((((((arr_3 [i_1]) ? var_4 : 3))) ? (!30342) : (((!(arr_1 [i_1 - 1] [i_1 - 1]))))));
    }
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        arr_6 [i_2] [i_2 - 2] = (arr_4 [i_2] [i_2]);
        arr_7 [i_2 - 2] = ((0 ? var_7 : (((227 > 42) ? (((-68 ? (arr_4 [i_2 + 1] [i_2]) : var_3))) : 3323502209))));
    }
    var_19 = (((~112) ? ((~(~var_5))) : var_8));
    #pragma endscop
}
