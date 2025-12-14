/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] |= ((~((((max(var_0, (arr_1 [i_0 + 1])))) ? (arr_0 [i_0 + 1]) : ((65535 / (arr_1 [i_0])))))));
        var_17 = (min(var_5, ((-var_14 | (var_6 + var_1)))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 7;i_1 += 1)
    {
        arr_5 [9] = (~4);
        arr_6 [i_1 + 1] = (var_0 || var_7);
        arr_7 [i_1] = (((var_0 && var_10) ? ((var_1 ? 4 : (arr_3 [i_1] [i_1 + 2]))) : 0));
    }
    var_18 = (max(var_18, (!var_5)));
    var_19 = ((-(!var_9)));
    #pragma endscop
}
