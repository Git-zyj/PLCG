/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_1 ? (((max(var_11, var_2)) ^ -var_9)) : var_6));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = (min(var_18, (((((65529 ? 0 : 34393)) > ((((arr_1 [i_0]) / (arr_1 [i_0])))))))));
        var_19 = ((1052475952 ? -95 : -893132590));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_20 -= ((!(5248909131042383824 > 5003763630153053796)));
        var_21 = ((((((arr_0 [i_1]) ? (arr_2 [i_1] [i_1]) : (arr_0 [i_1])))) ? (arr_2 [i_1] [3]) : (((arr_0 [i_1]) - (arr_2 [i_1] [i_1])))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_22 = (((7977411727117755415 ^ 36613) - (arr_5 [i_2])));
        var_23 = (((((arr_0 [i_2]) ? (arr_4 [i_2] [i_2]) : (arr_5 [i_2]))) / (arr_4 [i_2] [i_2])));
        var_24 = (arr_1 [i_2]);
    }
    var_25 += (((334303644 ? 1 : -137849286)));
    var_26 = (min((var_0 - var_0), ((((var_7 || var_10) < ((var_15 ? var_12 : var_6)))))));
    var_27 = (max(var_27, (((((var_10 < var_16) > (var_10 * var_4))) || (((var_3 > var_16) == (var_6 > var_6)))))));
    #pragma endscop
}
