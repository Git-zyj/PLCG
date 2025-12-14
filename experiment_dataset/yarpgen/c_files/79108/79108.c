/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -15486;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = (min(var_11, ((((arr_1 [i_0] [i_0]) ? (!6329773440503164105) : 12116970633206387493)))));
        var_12 = (min(var_12, (!var_0)));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_13 = (arr_3 [i_1]);
        var_14 = (-var_9 == (arr_4 [i_1 + 1] [i_1 + 1]));
        var_15 = var_0;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_16 = ((((((arr_6 [i_2]) | var_8))) ? (!var_2) : var_0));
        var_17 = (max(var_17, (430860921 == var_0)));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_18 = (max(var_18, ((max((((arr_7 [i_3] [i_3]) | var_5)), (((arr_7 [i_3] [i_3]) % var_5)))))));
        var_19 = (arr_3 [22]);
        arr_9 [i_3] &= (((~(arr_3 [4]))));
    }
    var_20 = (max(var_20, (max(((((var_4 ? var_5 : 149755685)) + -var_0)), var_0))));
    var_21 = (min(var_21, ((((((-var_3 ? ((max(var_9, var_0))) : var_7))) ? var_4 : var_3)))));
    #pragma endscop
}
