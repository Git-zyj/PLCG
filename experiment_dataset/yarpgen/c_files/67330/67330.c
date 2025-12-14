/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((((((var_2 | var_4) + 2147483647)) << var_10)), (min(163, (var_2 != var_11)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [13] [i_0] = (arr_0 [i_0] [i_0]);
        var_13 = 9223372036854775807;
        arr_3 [i_0] = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1 - 2] = (((arr_4 [13]) ? ((((!(-2147483647 - 1))))) : var_9));
        arr_7 [i_1] = (((arr_5 [i_1 - 1]) ? ((((-2147483647 - 1) ? var_4 : 96))) : ((var_10 ? (arr_4 [i_1 + 1]) : (arr_5 [i_1 - 1])))));
        var_14 = (arr_4 [i_1 - 2]);

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_15 = (arr_10 [15] [i_2] [i_2]);
            arr_11 [i_1] [i_2] = (arr_5 [i_1]);
            arr_12 [i_2] [11] [i_2] = (((arr_5 [i_1 + 1]) ? var_7 : (arr_5 [i_1 - 2])));
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            arr_17 [i_1 - 2] [i_3] [i_1] = var_7;
            arr_18 [i_1 - 2] = var_0;
            var_16 = (((arr_10 [i_1 - 2] [i_1] [i_1 + 1]) | (arr_10 [i_1 - 2] [i_1 + 1] [i_1])));
        }
    }
    #pragma endscop
}
