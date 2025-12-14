/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (((min(((((arr_0 [i_0]) ? 8506 : 1784452525))), ((var_8 ? var_19 : 9048655358453718714)))) ^ (~8485)));
        arr_2 [7] [0] = (arr_0 [1]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_21 = (+-88);
        var_22 = (~var_7);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_23 = (min(var_23, (~-1599302626)));
        var_24 = 51990;
    }
    var_25 = ((var_13 ? var_18 : (((((var_12 ? 1 : var_19)) <= -2)))));
    #pragma endscop
}
