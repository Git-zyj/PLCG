/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((3072 ? -70775658 : 3176134051360726278))) ? -70775634 : 65535));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_11 = (arr_0 [i_0]);
        var_12 *= (((-(min((arr_2 [i_0] [6]), (arr_3 [i_0]))))));
    }
    #pragma endscop
}
