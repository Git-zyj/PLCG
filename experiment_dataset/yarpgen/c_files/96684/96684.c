/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_11 = (arr_0 [i_0]);
        var_12 = (min(var_12, (33554431 && 3034055345197033097)));
        var_13 = arr_2 [i_0];
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_14 = (arr_4 [i_1]);
        var_15 = var_7;
        var_16 |= (arr_4 [6]);
        var_17 = (((1048575 ? 2062326646 : 9007199246352384)) * 451076115);
    }
    #pragma endscop
}
