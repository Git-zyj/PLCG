/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 = (max(var_11, (!-5)));
        arr_2 [13] = ((var_5 ? (arr_0 [i_0]) : 1));
        var_12 = (min(var_12, (arr_0 [i_0])));
        var_13 = (min(var_13, (((((0 + ((((arr_0 [i_0]) ? var_7 : var_10))))) < (((var_4 ? (arr_1 [i_0]) : (arr_1 [i_0])))))))));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_14 = (max(var_14, var_1));
        arr_6 [i_1] [i_1] = (((arr_5 [i_1 - 1] [i_1 + 1]) || (((var_3 ? (arr_5 [i_1 - 1] [i_1 - 2]) : (arr_4 [i_1 + 2] [i_1 + 2]))))));
        arr_7 [i_1] [17] = ((arr_5 [i_1] [i_1 - 1]) >> ((((max(var_9, (max(var_4, (arr_4 [i_1] [13])))))) - 113)));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_15 = (arr_9 [i_2] [i_2]);
        var_16 = (((max(((var_1 ? 169 : 3840)), ((min((arr_8 [1]), var_7))))) + ((-(arr_4 [i_2] [i_2])))));
        arr_10 [i_2] [i_2] = ((var_0 | (((arr_5 [i_2] [i_2]) ? (arr_5 [i_2] [i_2]) : var_8))));
    }
    var_17 = (min(var_17, var_6));
    var_18 = (((~var_0) + 55267));
    #pragma endscop
}
