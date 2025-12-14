/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_7 ? var_10 : ((var_2 ? var_4 : (var_12 <= 0)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_14 = (min((var_6 | var_0), ((min(var_4, (arr_1 [2]))))));
        var_15 = (max((arr_1 [i_0]), var_6));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_5 [4] = var_10;
        arr_6 [i_1] [i_1] = ((arr_1 [i_1]) > (arr_2 [i_1]));
    }
    var_16 = var_3;
    #pragma endscop
}
