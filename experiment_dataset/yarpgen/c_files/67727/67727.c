/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-((var_11 ? 7496870980979252500 : 16))));
    var_17 = (max(((var_11 ? (var_6 <= var_15) : (var_9 / var_5))), (((13 != 11730068948314271579) ? var_15 : -838419532))));
    var_18 = (min(var_18, -125));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = (max(((var_10 ? var_2 : 4279894824849433634)), ((max(var_12, -1784620599)))));
        arr_4 [i_0] = (((arr_0 [i_0]) ? (min((arr_2 [i_0]), (arr_0 [i_0]))) : var_14));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        arr_8 [20] [i_1] = 34157;
        var_20 = 4294967283;
        arr_9 [i_1] [i_1] = ((!(var_0 | var_0)));
        var_21 ^= (arr_7 [i_1]);
        var_22 = (max((max(var_10, (max(5, (arr_6 [i_1 - 1]))))), 64477));
    }
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        arr_13 [i_2] = ((((13 ? (arr_11 [i_2 + 1]) : (arr_11 [i_2 - 1]))) == (((arr_11 [i_2 - 1]) ^ (arr_11 [i_2 + 1])))));
        var_23 += (0 / 101630450);
        arr_14 [i_2 + 1] [i_2] = 251;
    }
    #pragma endscop
}
