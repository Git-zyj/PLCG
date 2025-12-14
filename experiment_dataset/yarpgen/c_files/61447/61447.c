/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [9] [i_0]);
        arr_4 [i_0] = ((((((arr_1 [7] [i_0]) || (arr_0 [i_0] [i_0]))) && ((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_0 [i_0] [i_0])))))));
        arr_5 [i_0] [i_0] = ((arr_1 [i_0] [i_0]) ? ((((arr_2 [i_0]) ? (((arr_2 [i_0]) ? (arr_1 [i_0] [23]) : (arr_0 [i_0] [i_0]))) : (arr_0 [i_0] [i_0])))) : 3208673162852748910);
        arr_6 [i_0] [i_0] = (((((arr_0 [i_0] [i_0]) ? (arr_0 [1] [i_0]) : (arr_2 [6]))) & (((((arr_0 [6] [i_0]) || (arr_0 [i_0] [i_0])))))));
    }
    var_16 = ((((var_8 ? var_12 : var_14)) >> (((var_2 % var_4) ? (3523882940 <= -650289387734055729) : ((var_1 ? var_10 : var_1))))));
    #pragma endscop
}
