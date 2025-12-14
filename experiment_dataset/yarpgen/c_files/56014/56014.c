/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_5, (((-10685 ? 8 : -8493)))));
    var_14 = (((((var_7 ^ var_4) == 1)) && var_9));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] [i_0 + 1] = (1 && 933);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((var_4 ? -111 : ((var_11 + (arr_5 [i_1])))));
        arr_8 [i_1] = var_11;
    }
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        arr_11 [i_2 - 1] = (arr_4 [12]);
        arr_12 [i_2 - 1] = ((((arr_9 [i_2 - 2]) && (arr_10 [i_2] [i_2]))));
    }
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        var_15 = (var_11 - -93);
        arr_16 [i_3] = ((((((var_9 * (arr_13 [i_3 - 1])))) != var_0)));
    }
    #pragma endscop
}
