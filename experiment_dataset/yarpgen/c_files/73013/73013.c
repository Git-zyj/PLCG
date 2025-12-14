/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = -1;
        var_14 = var_6;
        var_15 -= (1 << (1192272527570052994 - 1192272527570052979));
        var_16 -= ((var_5 - (arr_1 [i_0])));
    }
    var_17 = ((var_0 ? 4421 : (!255)));
    var_18 = var_3;
    var_19 = (-1 || 1);
    #pragma endscop
}
