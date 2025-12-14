/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (min((((arr_0 [i_0 - 1]) - (arr_1 [i_0 - 2]))), (((~(((arr_0 [i_0]) ? var_16 : (arr_0 [i_0]))))))));
        var_18 += (arr_0 [i_0]);
        arr_3 [i_0] = (((((-((((arr_0 [i_0]) && (arr_0 [i_0]))))))) < (min(2734211474109874666, 65531))));
        var_19 = (min(var_19, (arr_1 [18])));
        var_20 += (max((((arr_0 [i_0 + 2]) >> (((((arr_1 [i_0]) >> (var_0 - 71))) - 30)))), ((max(64, 21927)))));
    }
    for (int i_1 = 4; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (arr_5 [i_1] [i_1]);
        var_21 = (max((max(var_0, (arr_5 [i_1] [6]))), ((max((var_3 || var_7), ((!(arr_5 [i_1] [i_1 - 1]))))))));
        var_22 = ((((-1 ? 0 : 65531)) & 31362));
        arr_7 [i_1] [i_1] = (((1740810213488682239 != -2613346854285804163) >> ((((var_10 % var_2) <= ((var_2 | (arr_5 [i_1] [i_1]))))))));
    }
    var_23 = (min(-164, var_6));
    var_24 = (max(var_24, (((224 ? 16705933860220869376 : 32502)))));
    #pragma endscop
}
