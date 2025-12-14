/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((var_6 ^ ((var_4 * ((var_1 ? 0 : 13368353969775705958))))));
        var_11 = (((((((min(-6423101402616048422, 2629113218749626677))) ? (0 - 502521098974562858) : ((min(6423101402616048421, var_7)))))) ? var_4 : ((var_2 - (max(1, 161))))));
        arr_3 [12] &= 14319;
        var_12 = ((~(max(var_8, 2074064157))));
        var_13 = (max(var_1, ((var_6 ? var_1 : var_6))));
    }
    var_14 = (((((14934 ? 4294967295 : 10)) ^ var_6)) ^ (((((-176171284 ? var_5 : 14290)) ^ ((4 ? var_4 : var_9))))));
    var_15 = var_5;
    var_16 = ((((((var_0 + var_8) ? -1 : var_7))) ? ((var_6 + (~var_7))) : ((max(var_3, (24051 >= 188))))));
    #pragma endscop
}
