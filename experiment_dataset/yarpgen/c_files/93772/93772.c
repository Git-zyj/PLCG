/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (max((arr_1 [i_0]), (((var_0 && (arr_1 [i_0]))))));
        var_19 = (((((0 ^ (arr_2 [i_0])))) ? (min(1, var_10)) : (max((~3776831187913702509), (max(-1735517121, 14669912885795849107))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((!(((var_3 ? var_4 : var_13)))));
        var_20 += (((arr_1 [i_1]) ? var_2 : (arr_0 [i_1])));
    }
    var_21 = (min(((max(((min(var_11, var_2))), var_16))), (max(var_13, (14669912885795849114 + -91)))));
    #pragma endscop
}
