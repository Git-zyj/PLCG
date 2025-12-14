/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        arr_3 [i_0] = (((0 * var_3) * (var_17 * 255)));
        var_18 = (arr_0 [i_0 + 3]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_19 = (((((29360128 ? (((var_8 ? 169 : (arr_6 [i_1])))) : (min((arr_6 [i_1]), (arr_4 [i_1])))))) ? ((min((min((arr_6 [i_1]), 1005967548)), (!-24577)))) : (arr_4 [i_1])));
        arr_7 [i_1] [i_1] = ((((min((((arr_5 [i_1]) / (arr_5 [17]))), (arr_5 [i_1])))) ? (((arr_6 [i_1]) >> (((arr_6 [i_1]) - 149743952)))) : (((!(arr_4 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_20 = ((!((max((!var_17), 34)))));
        var_21 ^= ((((max(((min(253, var_2))), (max((arr_6 [19]), (arr_6 [i_2])))))) & (arr_8 [i_2])));
    }
    var_22 = (max(var_22, var_15));
    #pragma endscop
}
