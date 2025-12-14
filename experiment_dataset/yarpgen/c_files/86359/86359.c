/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (min(var_13, (arr_1 [i_0])));
        arr_3 [i_0] [i_0] = (min((arr_2 [i_0]), (((65535 ? var_8 : -1)))));
        var_14 = (min(var_14, (max((((((15 ? 1833574710 : (arr_0 [1]))) & ((min((arr_0 [8]), 1114494537)))))), 2280520175053059591))));
    }
    var_15 -= (!var_3);
    #pragma endscop
}
