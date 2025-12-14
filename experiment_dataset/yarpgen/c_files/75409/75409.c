/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((~((~((var_7 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0 - 1] [i_0])))))));
        arr_3 [i_0] [6] = ((((((!1795858929) && ((max(-1795858938, -1795858921)))))) <= ((65535 ? 2147483635 : (arr_1 [i_0 + 1] [i_0 + 1])))));
        var_10 += var_1;
        var_11 = var_2;
        var_12 += ((!(arr_0 [i_0])));
    }
    var_13 = var_1;
    var_14 = var_8;
    #pragma endscop
}
