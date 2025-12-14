/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = max(4851, var_9);
    var_13 = (((((max(1, var_10))) ? (~1) : ((65535 ? var_1 : var_10)))));
    var_14 = ((!((!(var_0 - var_4)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = (var_9 != var_6);
        var_16 = 18446744073709551588;
    }
    for (int i_1 = 4; i_1 < 14;i_1 += 1)
    {
        var_17 = (min(var_11, (((var_10 ? 1 : 67108800)))));
        arr_6 [0] |= (((~(arr_1 [i_1 + 1]))));
    }
    #pragma endscop
}
