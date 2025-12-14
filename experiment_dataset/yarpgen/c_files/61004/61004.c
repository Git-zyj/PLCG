/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((1207741735098229124 ? (((-587633630 ? 1 : ((1 ? 1 : var_3))))) : 13083531645094275524));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = (max(var_17, ((((arr_1 [i_0] [i_0]) ? (arr_1 [6] [6]) : (arr_0 [i_0]))))));
        arr_2 [15] = (((((10 ? 1 : (arr_1 [i_0] [i_0])))) ? (((2600909079 ? 6753 : var_7))) : (((arr_1 [i_0] [i_0]) * 17403))));
        var_18 ^= (arr_1 [16] [i_0]);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_5 [4] [i_1] = ((!((((-142228010716116573 && -5185) ? ((max(1, var_6))) : (!var_15))))));
        var_19 = (max(var_19, ((((max((arr_4 [i_1]), 1)) < ((var_13 ? 1 : (arr_4 [i_1]))))))));
    }
    var_20 = var_6;
    #pragma endscop
}
