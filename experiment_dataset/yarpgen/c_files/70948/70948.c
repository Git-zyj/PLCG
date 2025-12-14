/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -2092312928704762846;

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_20 |= 1;
        arr_3 [i_0] = 539943910;
    }
    var_21 = 2092312928704762832;
    #pragma endscop
}
