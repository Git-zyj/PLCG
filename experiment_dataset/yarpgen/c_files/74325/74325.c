/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_1;
    var_20 = (((((((var_12 ? var_11 : var_18)) < (max(666254692, var_5)))))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_21 = (arr_1 [i_0 - 1]);
        arr_2 [i_0] = (((max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 3]))) ? (max((arr_0 [i_0 + 3]), (arr_0 [i_0 + 3]))) : (max(((-3364853763755842869 * (arr_0 [i_0]))), ((((arr_0 [i_0]) ? var_10 : (arr_1 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_22 = ((((min((-3364853763755842853 / 32767), ((0 * (arr_0 [i_1])))))) ? ((max(3628712603, 601877609))) : 18446744073709551593));
        arr_5 [17] = (((((2405411189 ? var_14 : var_16)))) ? (arr_3 [i_1]) : (max(32751, 4257177575)));
    }
    #pragma endscop
}
