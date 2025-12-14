/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((var_1 * var_7), (max(var_10, (980 || -27804)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = (((arr_0 [i_0] [i_0]) >= -1426491127));
        var_13 = ((106 ? -3982 : -1426491125));
        arr_4 [i_0] = (576460735123554304 | 4167952649);
        var_14 = -1426491108;
    }
    var_15 = (-1 ^ 4167952629);
    var_16 -= ((max((min(var_1, 4294967295)), ((min(16338, 27886))))) % ((var_9 ? var_4 : ((min(1125349584, var_5))))));
    var_17 = (var_1 | var_8);
    #pragma endscop
}
