/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_11));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = (arr_2 [i_0] [i_0]);
        var_17 = var_9;
        var_18 = (max(var_1, 18101342494578709742));
    }
    var_19 = (((((((max(935285447, var_1))) ? (~549722256) : var_13))) ? var_6 : var_1));
    var_20 = var_6;
    #pragma endscop
}
