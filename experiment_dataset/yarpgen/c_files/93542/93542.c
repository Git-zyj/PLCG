/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (((min(1, (max(var_4, var_9))))) <= var_8);
    var_14 = (min(((((max(var_4, var_7))) ? (max(var_3, var_1)) : var_9)), (((68719443968 ? 1 : var_3)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (arr_0 [i_0]);
        arr_2 [i_0] = (-1930505135712079525 % 58141);
        arr_3 [i_0] = var_4;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] = (arr_4 [i_1]);
        var_16 = (arr_5 [i_1]);
        var_17 = (((arr_5 [1]) + (arr_5 [i_1])));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_18 = ((((arr_9 [i_2] [i_2]) ? var_5 : (arr_9 [i_2] [i_2]))));
        var_19 = (((arr_9 [i_2] [i_2]) + (((max(549755813824, var_3)) - 1))));
        arr_10 [i_2] = 60261;
    }
    #pragma endscop
}
