/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((+(((var_16 || var_9) - -54))));
    var_18 = (min(((((-9223372036854775807 - 1) ? 1 : 0))), (min(13, var_6))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [1] = -var_7;
        arr_4 [i_0] = (arr_2 [19]);
        arr_5 [i_0] = ((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [14]));
        arr_6 [i_0] [i_0] = ((var_11 < ((var_5 ? (arr_2 [16]) : (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = min((min(1, -31)), (((((((arr_7 [i_1]) ? (arr_7 [i_1]) : (arr_7 [i_1])))) == (arr_8 [i_1])))));
        arr_10 [i_1] = (min(((((min(var_10, var_16))) ? (((max(96, 1)))) : ((var_11 ? (arr_8 [i_1]) : var_10)))), (((((((arr_8 [i_1]) && var_3))) >= (!var_2))))));
        arr_11 [i_1] [i_1] = (var_13 ^ var_2);
        arr_12 [i_1] = (((arr_7 [i_1]) ? (((arr_7 [i_1]) ? (arr_7 [i_1]) : (arr_8 [i_1]))) : (arr_8 [i_1])));
        var_19 = (min(var_19, (((-(((((var_15 ? 65534 : -24))) ? 0 : ((max(-5, (-127 - 1)))))))))));
    }
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        arr_15 [i_2] [i_2] = (1894144698 | 1186808508);
        var_20 = (min(((((((var_13 ? (arr_0 [16]) : var_15)) + 9223372036854775807)) >> ((((4035266047 ? (arr_2 [i_2]) : (arr_13 [i_2 + 1]))) - 56)))), ((((~var_8) >= (arr_2 [i_2]))))));
        arr_16 [i_2] = (min(var_10, ((((1 ? (arr_0 [i_2]) : var_1)) & ((max(var_5, var_14)))))));
    }
    #pragma endscop
}
