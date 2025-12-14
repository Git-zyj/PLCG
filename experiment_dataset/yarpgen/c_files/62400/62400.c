/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!(((var_6 & ((var_6 ? var_8 : var_4))))));
    var_11 ^= var_8;
    var_12 |= (((var_7 / var_9) || (((((var_5 ? var_2 : var_7)) + ((max(var_2, var_5))))))));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_13 = (min(var_13, (((((-12122 ? 1 : -89))) ? (arr_1 [i_0]) : ((((((arr_1 [i_0]) / (arr_2 [i_0])))) ? (((233 ? 1 : 233))) : ((-16404 ? 23 : 16529264679814236456))))))));
        var_14 = (max(var_14, (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (max((((arr_3 [i_1]) ? var_8 : (arr_3 [i_1]))), ((max((arr_3 [i_1]), var_6)))));
        arr_7 [i_1] = (((((16401 ? 233 : ((35 ? -20322 : 20322))))) ? var_7 : (((arr_3 [i_1]) & (((arr_3 [i_1]) ? var_6 : (arr_4 [i_1])))))));
        var_15 |= max(443480344, -5);

        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            arr_12 [i_1] = ((((((((arr_9 [i_1] [i_1]) ? var_0 : var_0))) ? (arr_8 [i_1]) : ((~(arr_11 [23] [i_2] [i_1]))))) < (((((arr_8 [i_1]) || (arr_11 [i_2 + 3] [23] [i_2 + 3])))))));
            var_16 = (max(var_16, var_8));
            arr_13 [i_1] [i_1] [i_1] = ((var_4 / ((~(((arr_4 [i_1]) ? var_4 : (arr_10 [i_1])))))));
        }
    }
    #pragma endscop
}
