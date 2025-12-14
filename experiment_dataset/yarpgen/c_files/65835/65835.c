/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = 8059252488902186351;
        arr_4 [i_0] = 1;
        arr_5 [i_0] = (arr_2 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_14 |= (arr_6 [13] [i_1]);
        var_15 = 469842354;
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_12 [i_2] = ((127 ? ((-3825124941 ? var_2 : -8059252488902186351)) : ((((arr_7 [i_2] [2]) ? var_2 : ((var_1 / (arr_6 [i_2] [17]))))))));
        var_16 = (arr_10 [i_2]);
        arr_13 [8] [4] |= ((max((arr_6 [i_2] [i_2]), (3825124943 == var_1))));
        var_17 = (((~(arr_1 [i_2]))));
        arr_14 [i_2] = var_12;
    }
    var_18 = ((~((1 ? (max(19, 9223372036854775807)) : var_0))));
    var_19 = var_13;
    #pragma endscop
}
