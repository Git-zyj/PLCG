/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 = (((arr_0 [i_0] [i_0]) & ((((arr_1 [i_0] [i_0]) < var_9)))));
        var_21 = (((arr_1 [i_0] [i_0]) ? 14288 : (arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_22 |= 16389081568079942539;
        var_23 = (max((arr_5 [i_1]), (((!(-14280 & var_17))))));
        arr_6 [i_1] = (arr_3 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        var_24 = ((-(arr_9 [i_2 - 1] [i_2 - 1])));
        var_25 = (max(var_25, (((arr_3 [i_2 + 1]) * var_6))));
    }
    var_26 = var_4;
    var_27 *= var_10;
    var_28 = -866181252;
    #pragma endscop
}
