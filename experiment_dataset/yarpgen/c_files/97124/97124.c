/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = max((max(var_10, ((max(var_9, var_9))))), (((var_10 ? ((var_6 ? var_9 : var_2)) : var_9))));
    var_14 &= ((!(((var_5 ? var_7 : ((var_4 ? var_5 : var_4)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = ((!((((arr_0 [18]) ? 1 : (arr_2 [7]))))));
        arr_4 [i_0] [i_0] = (!(((185 ? 74 : var_3))));
        var_16 = (((arr_2 [i_0]) ? -31026 : var_7));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = 339484122;
        arr_9 [i_1] = (((!-18919) ^ ((~(~-7083457541804978969)))));
        arr_10 [i_1] = (max(((-1584987578 ? 1 : (arr_0 [i_1]))), (((arr_0 [i_1]) ? var_7 : (arr_0 [i_1])))));
    }
    #pragma endscop
}
