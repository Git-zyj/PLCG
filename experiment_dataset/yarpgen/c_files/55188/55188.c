/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min(var_15, var_7);
    var_21 = (max(var_21, var_15));
    var_22 = var_11;
    var_23 = var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = var_4;
            var_24 = (((arr_0 [i_0 + 1]) | var_15));
            var_25 -= (arr_0 [i_1]);
        }
        arr_7 [i_0] = ((var_4 ? (arr_3 [i_0]) : ((var_0 ? var_5 : var_6))));
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_13 [i_2] [i_2] [1] &= (arr_3 [0]);
            arr_14 [i_3] [i_3] [i_3] = ((-((25894 ? (arr_10 [i_2 + 1]) : var_15))));
            arr_15 [i_2 + 1] [i_3] = (arr_8 [i_2 + 1] [i_3]);
        }
        var_26 = (((arr_10 [i_2]) ? ((((((min(var_6, var_11))) && ((min(var_5, (arr_9 [i_2 + 1] [i_2])))))))) : (((-6934281321332987187 + 9223372036854775807) >> (-559039623 + 559039650)))));
    }
    for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] = (max((arr_12 [i_4 + 1]), (((arr_12 [i_4 + 1]) - (arr_12 [i_4 + 1])))));
        var_27 = ((~(((arr_10 [i_4 + 1]) ? (arr_9 [i_4 + 1] [i_4]) : (min(var_15, (arr_9 [i_4] [i_4])))))));
    }
    #pragma endscop
}
