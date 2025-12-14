/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((17885830775669298547 << (!var_9)));
    var_15 = var_12;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0 - 1] = ((((((((1 ? (arr_1 [i_0]) : var_5))) ? ((((arr_1 [i_0]) ? var_1 : var_1))) : (arr_0 [i_0])))) ? ((760 ? (arr_2 [i_0 + 1]) : (((560913298040253069 ? var_12 : -761))))) : (arr_1 [i_0])));
        var_16 |= -767;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_17 = var_6;
        arr_6 [i_1] [i_1] = (((((-var_11 ? 3608085625 : (arr_4 [i_1])))) ? ((((((arr_5 [i_1] [i_1]) ? var_7 : var_11))) ? (arr_1 [i_1]) : (arr_2 [i_1]))) : (arr_4 [i_1])));
        var_18 = ((((((((arr_0 [i_1]) ? var_9 : 0))) ? var_0 : var_2))) ? (arr_1 [i_1]) : (arr_5 [i_1] [i_1]));
    }
    #pragma endscop
}
