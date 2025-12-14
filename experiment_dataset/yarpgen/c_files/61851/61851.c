/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_10 -= (-9045321633220176692 < 18446744073709551615);
        var_11 = (arr_2 [i_0] [i_0]);
        arr_3 [i_0] = (((arr_2 [0] [i_0]) * 19));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_12 = (max(var_12, (((28 ? 91 : 789415101)))));
        var_13 = (arr_4 [i_1] [i_1]);
        var_14 += ((91 ? 18446744073709551581 : 24063));
    }
    var_15 = var_8;
    var_16 = 2;
    var_17 *= var_2;
    #pragma endscop
}
