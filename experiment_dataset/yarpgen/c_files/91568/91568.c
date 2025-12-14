/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (var_9 ^ var_7);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = (arr_0 [13]);
        var_13 = (((var_0 & 72) >> (((arr_1 [i_0] [i_0]) + 26))));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (((max(1900807219916718079, var_2)) | (arr_2 [i_1 - 1] [i_1])));
        var_14 += (min((arr_2 [i_1 + 1] [i_1 + 1]), (arr_2 [i_1 + 1] [i_1 + 1])));
        arr_6 [i_1] [9] = min((((min(var_10, (arr_1 [i_1] [i_1]))) | (arr_4 [i_1] [i_1]))), (arr_0 [i_1]));
        arr_7 [i_1] = (max(((((((-30441 ? (arr_1 [i_1] [i_1]) : (arr_1 [i_1] [i_1]))) + 2147483647)) << (var_3 - 47460))), (arr_0 [i_1 + 1])));
        var_15 = (min(var_15, (((((~((72 ? 4386877102911625604 : var_8)))) != (arr_1 [i_1 + 1] [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_16 = ((((((((arr_8 [i_2] [i_2]) ? (arr_8 [i_2] [i_2]) : var_1))) ? var_5 : (((arr_9 [i_2]) - var_1)))) + (((((17 >> (72 - 66))))))));
        var_17 = (((((((arr_8 [i_2] [i_2]) % ((var_6 ? -73 : var_7)))) + 9223372036854775807)) >> ((((2690673805233312140 ? (((arr_8 [i_2] [i_2]) ? (arr_8 [1] [i_2]) : (arr_8 [i_2] [4]))) : (((max(-30433, -72)))))) + 166383317869656668))));
        var_18 = 1099511627648;
    }
    #pragma endscop
}
