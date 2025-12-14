/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((min(((63 ? (max(var_2, 4294967283)) : var_8)), var_1)))));
    var_11 = (max(var_11, ((((((((max(var_9, 505726273))) ? 1 : var_8))) < var_9)))));
    var_12 = ((1 == (max(var_9, 2948276995))));

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_13 = 1;
        var_14 = (max(var_14, ((max((arr_1 [i_0 - 3]), (((arr_1 [i_0]) ^ 0)))))));
    }
    #pragma endscop
}
