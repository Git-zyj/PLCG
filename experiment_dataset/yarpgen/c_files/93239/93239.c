/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 += var_0;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = 4292870144;
        var_15 -= 4292870169;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        arr_5 [i_1] = 7820738697863727734;
        arr_6 [i_1] [i_1] = (arr_3 [i_1 - 1] [2]);
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        var_16 = var_4;
        arr_11 [14] [i_2] = 4190912234;
    }
    #pragma endscop
}
