/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = (var_14 * (min((max(var_2, var_16)), (max(var_2, var_19)))));
        arr_2 [i_0] = (max(5697311224446122291, 11286694193022059030));
        var_21 += (~(((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))));
    }
    var_22 = max(var_6, (max((~4611686018427387904), var_16)));
    var_23 = (var_9 ? -var_0 : ((max(14716532783796343610, 2532238592276002704))));
    #pragma endscop
}
