/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_13));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = (min(65535, (arr_1 [i_0])));
        arr_4 [i_0] = (arr_3 [i_0]);
    }
    var_16 = (min((((~1018) ? var_9 : var_3)), (!-1019)));
    var_17 = var_9;
    #pragma endscop
}
