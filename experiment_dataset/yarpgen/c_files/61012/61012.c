/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_12 = ((((((arr_2 [i_0 - 1] [i_0]) + var_3))) + (((arr_3 [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_1 [i_0])))));
        var_13 = (arr_0 [i_0 - 1]);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_14 = (min(var_14, (((((((((arr_4 [0]) - (arr_5 [i_1]))) - (var_10 + var_4)))) ? var_9 : ((1073741823 ? 115 : (arr_6 [i_1]))))))));
        var_15 = (arr_6 [i_1]);
    }
    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {
        var_16 = (((arr_5 [i_2 - 3]) + ((var_4 | (arr_7 [i_2])))));
        arr_10 [i_2 - 1] = 549755813856;
        arr_11 [7] = (((arr_4 [i_2]) ? (min((arr_9 [i_2] [i_2]), ((((arr_5 [i_2 - 2]) << (((arr_7 [1]) - 3146))))))) : (arr_9 [i_2 - 2] [i_2 - 2])));
    }
    var_17 = var_6;
    #pragma endscop
}
