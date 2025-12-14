/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        var_18 *= (1591276646196512190 ? (arr_1 [i_0]) : (!var_3));
        arr_2 [8] [8] &= ((((((arr_0 [i_0 - 1]) - (arr_0 [i_0 - 1])))) ? (((arr_0 [i_0 - 1]) ? (arr_0 [i_0 + 2]) : 32704)) : (arr_0 [i_0 + 1])));
        var_19 += ((((!((min(var_2, var_17))))) ? (((!(var_2 || 1)))) : (((!((min((arr_1 [i_0]), (arr_0 [i_0])))))))));
        var_20 = (((~(arr_0 [i_0 - 1]))) << (((arr_1 [i_0 - 1]) - 10874145744336132445)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_21 -= ((!(arr_3 [i_1])));
        var_22 = (((var_10 || var_1) / (arr_4 [i_1])));
    }
    var_23 = var_3;
    var_24 = (max(var_24, (((var_14 ? 3006616361054340429 : (min(((min(var_10, 27799))), (var_1 * 8632241083187145844))))))));
    #pragma endscop
}
