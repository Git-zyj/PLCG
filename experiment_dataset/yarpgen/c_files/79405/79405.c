/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_15 = (min((max((arr_1 [i_0 + 1] [10]), 4294967292)), ((((arr_1 [i_0 + 2] [i_0]) >> (((arr_1 [i_0 + 3] [7]) - 75)))))));
        var_16 = ((((-9223372036854775806 | -2827653643405626273) | var_8)));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_17 = (((((((var_1 ? var_9 : var_5))) ? ((((arr_4 [i_1]) ? var_3 : 15631))) : ((233 ? 7514925198534593588 : var_13)))) <= (((min(14, (arr_3 [i_1]))) >> (((~3057699144107731248) + 3057699144107731290))))));
        var_18 |= ((((max((arr_3 [0]), var_13))) ? (!-2827653643405626273) : (max(22, (arr_4 [i_1])))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        var_19 = ((!(arr_5 [i_2])));
        var_20 = (((arr_5 [11]) / (((arr_5 [i_2]) ? 189 : var_13))));
        var_21 = 13483;
    }
    var_22 = (max(var_22, var_13));
    var_23 &= var_11;
    #pragma endscop
}
