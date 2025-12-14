/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_2 + (min(var_1, var_9)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        arr_2 [i_0] = 13783204374964316496;
        var_18 = ((~(arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 *= ((var_2 + (min((arr_0 [i_1]), var_3))));
        var_20 = (((max((max((arr_0 [i_1]), 13860664025755905851)), (arr_4 [i_1]))) / ((~(min(1, (arr_4 [5])))))));
        arr_5 [i_1] = (min((arr_1 [i_1] [i_1]), -1));
        arr_6 [i_1] = var_0;
    }
    var_21 = (((((((var_12 ? var_9 : var_2)) < ((var_16 ? 2097151 : var_0)))))) % (max(((min(-1, 1))), (~3950916613))));
    #pragma endscop
}
