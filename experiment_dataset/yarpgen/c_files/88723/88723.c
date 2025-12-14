/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 = var_18;
        var_21 = (arr_1 [i_0]);
        var_22 = (((((-(arr_0 [i_0])))) ? (min((!511), (arr_1 [i_0]))) : ((((!(!-511)))))));
        var_23 = ((((min((arr_0 [i_0]), 511))) ? -var_9 : var_9));
        arr_2 [i_0] [i_0] = (((((var_12 << (5844085671260896409 - 5844085671260896400)))) ? ((min(7068084470994601191, 511))) : ((((min(var_15, (arr_0 [i_0])))) ? (max(var_14, (arr_1 [i_0]))) : var_3))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = (((((min((!var_15), (arr_5 [i_1]))))) + ((-513 ? var_1 : -8415040285723747122))));
        var_24 = ((+(((arr_6 [i_1]) + (arr_4 [i_1])))));
    }
    var_25 = (min(var_1, -21924));
    var_26 = (((((!3511) >= 15508)) ? (((~var_0) ? -57251 : var_18)) : 21934));
    var_27 = (((((((var_5 ? var_17 : var_15))) ? var_8 : var_10)) * (min((var_0 * 26318), (min(2929949418, var_8))))));
    #pragma endscop
}
