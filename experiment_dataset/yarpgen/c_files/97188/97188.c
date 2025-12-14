/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_10 ? var_8 : var_11))) ? (((((var_10 | var_10) || (!var_0))))) : var_6));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_4 [6] = (max((arr_3 [i_0]), (((var_5 ? (arr_1 [0]) : (arr_3 [4]))))));
        arr_5 [i_0] = (arr_3 [i_0 - 1]);
        arr_6 [i_0] = (min((((((var_7 ? var_14 : -4288861377750204473))) ? (((-127 ? (arr_2 [i_0] [i_0]) : 105))) : (arr_1 [i_0]))), (((((arr_3 [7]) < -1107))))));
    }
    var_16 = (!-18873);
    var_17 = var_10;
    #pragma endscop
}
