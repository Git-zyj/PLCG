/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_1 <= var_6);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [4] [i_0] = ((~(!var_6)));
        var_15 = ((!(-27776 && var_1)));
    }
    var_16 = var_10;
    #pragma endscop
}
