/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = var_3;
        var_20 = ((((max(0, (arr_2 [i_0 - 1])))) ? -744406522 : (((arr_2 [i_0 + 1]) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 - 1])))));
        arr_4 [i_0] [i_0] = ((((((arr_0 [i_0 - 1]) & (arr_0 [i_0 + 1])))) <= (((2099798367 % var_12) - (arr_1 [11])))));
        var_21 = (~((-((2195168906 ? (arr_2 [i_0 - 1]) : 2195168934)))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_22 = (((arr_7 [16]) ? (arr_6 [4]) : (max(var_19, var_14))));
        arr_9 [i_1] [i_1] = ((+(((arr_7 [i_1]) ? (arr_7 [i_1]) : (arr_7 [i_1])))));
        var_23 = (((((arr_7 [i_1]) ? (arr_7 [i_1]) : (arr_7 [i_1])))) ? (((4294967277 && -6064159864631085270) ? ((((!(arr_6 [i_1]))))) : (arr_8 [i_1]))) : (arr_8 [i_1]));
    }
    var_24 = ((((((var_19 ? 4294967294 : var_1))) ? var_8 : var_13)));
    var_25 = var_14;
    var_26 = var_18;
    #pragma endscop
}
