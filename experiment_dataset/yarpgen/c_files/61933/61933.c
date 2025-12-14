/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_9 < ((max((!var_7), -2775))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 18446744073709551615;
        var_16 = (!var_13);
        var_17 = (arr_1 [i_0]);
    }

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = 7256421284313336335;
        var_18 = ((((119 ? var_2 : -390361131))));
    }
    #pragma endscop
}
