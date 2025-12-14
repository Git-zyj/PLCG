/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_15 = ((15799 - (arr_1 [i_0])));
        var_16 = (var_6 >= -17112);
        var_17 = ((((((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 + 1])))) >= ((-17113 ^ ((17625 ? (arr_0 [i_0]) : -32767))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        arr_4 [i_1] = var_7;
        var_18 = (((arr_1 [i_1 + 1]) < var_2));
        var_19 = (((arr_0 [i_1 - 1]) ^ 2409223169));
    }
    var_20 |= var_8;

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_21 = (min(var_21, ((((((var_11 + (((arr_6 [i_2] [1]) ? var_9 : var_1))))) ? (((((((arr_5 [4]) ? (arr_5 [i_2]) : (arr_6 [i_2] [16]))) >= ((((arr_6 [i_2] [i_2]) + var_9))))))) : (((arr_6 [i_2] [8]) ? (arr_6 [i_2] [i_2]) : (72057559678189568 % 6))))))));
        var_22 = (min(var_22, ((((((-197047482 ? (arr_5 [i_2]) : -1))) ? (((arr_5 [i_2]) & (arr_5 [i_2]))) : (((arr_5 [i_2]) - (arr_5 [i_2]))))))));
    }
    #pragma endscop
}
