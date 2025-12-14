/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (var_1 != var_0);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = (min(var_16, ((((arr_0 [i_0]) ? (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0]))) : (arr_2 [i_0]))))));
        var_17 = (max(var_17, (17467751529700861038 < 1)));
        arr_3 [i_0] [i_0] = (!18445751115297998925);
        var_18 = (18445751115297998948 | 1);
        var_19 = (((1 % (-9223372036854775807 - 1))));
    }
    #pragma endscop
}
