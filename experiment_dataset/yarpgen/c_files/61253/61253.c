/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 = ((14 == (((var_7 ? (arr_0 [i_0]) : var_2)))));
        var_14 &= ((!((((!var_8) ? (((arr_0 [i_0]) ^ (arr_0 [i_0]))) : (~var_0))))));
        var_15 = (~1);
        var_16 = (max(var_16, var_0));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_17 = 2;
        arr_4 [i_1] [i_1] = (((((~(var_6 ^ 1)))) ? (((((((arr_2 [i_1] [i_1]) ? (arr_2 [5] [5]) : (arr_2 [i_1] [i_1])))) ? (((18446744073709551607 == (arr_3 [i_1])))) : (arr_2 [i_1] [i_1])))) : (((var_0 ? 1 : (arr_3 [i_1]))))));
        var_18 = ((!(((0 ? var_9 : 18)))));
        var_19 = (min((arr_2 [i_1] [i_1]), 1));
        var_20 &= ((((((!65518) & (max(var_1, var_6))))) ? -255 : (((var_4 > (min(121, 9)))))));
    }
    var_21 = var_5;
    var_22 = ((0 ? 1 : 0));
    var_23 = 17;
    #pragma endscop
}
