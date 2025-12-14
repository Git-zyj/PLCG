/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_8 ? (((var_10 ? var_4 : var_6))) : (var_7 * 18446744073709551615))) - ((((0 * var_1) << (var_15 > 20247))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 = (((18446744073709551602 & 0) >> (((((1047759388 | 1) & (1 | -32757))) - 1047756763))));
        var_18 = (((((arr_2 [i_0] [i_0]) ? 51 : (arr_1 [i_0] [i_0]))) - ((((arr_2 [i_0] [i_0]) & var_6)))));
        var_19 = (max(var_19, (((((((((var_13 ? var_5 : (arr_1 [i_0] [i_0])))) ^ ((var_10 ? 18446744073709551597 : (arr_0 [i_0] [i_0])))))) ? (((var_2 >= var_15) ? (arr_2 [i_0] [i_0]) : (var_6 - 0))) : (((arr_2 [i_0] [i_0]) | var_8)))))));
        var_20 |= ((((((var_7 || (arr_1 [i_0] [i_0]))))) < (((((var_15 - (arr_1 [i_0] [i_0])))) - ((1 - (arr_1 [9] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_21 |= (((((arr_5 [i_1] [i_1]) ? ((1 ? var_13 : var_14)) : (((arr_5 [i_1] [i_1]) << (((arr_5 [i_1] [i_1]) - 3097360442)))))) >= (((var_6 & (arr_4 [i_1] [i_1]))))));
        arr_6 [i_1] = ((((18446744073709551615 == (562949953404928 && 4032))) ? ((((18446744073709551599 ? 65526 : -1)) * (((45 == (arr_3 [i_1])))))) : (var_2 ^ -51)));
        arr_7 [0] [i_1] = (((((((((-105 - (arr_4 [i_1] [i_1])))) <= (((arr_3 [i_1]) % (arr_4 [i_1] [i_1]))))))) * (((((arr_4 [i_1] [i_1]) == (arr_4 [i_1] [i_1]))) ? (arr_3 [i_1]) : ((((var_7 >= (arr_5 [i_1] [i_1])))))))));
        arr_8 [i_1] [i_1] = ((((((((var_8 == (arr_5 [i_1] [i_1])))) ^ var_2))) && (-51 - var_2)));
    }
    var_22 ^= ((((((((var_15 ? var_13 : 0))) == var_11))) == ((((var_15 <= 1) >= (var_13 > var_1))))));
    var_23 = ((((((var_3 && var_8) ? (var_4 * var_5) : (var_7 * var_11)))) || var_9));
    #pragma endscop
}
