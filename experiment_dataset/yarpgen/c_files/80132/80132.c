/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        var_20 += 1;
        arr_3 [i_0] = 1;
    }
    var_21 ^= 627408062;
    var_22 = ((67389924 ? ((((var_3 + 6) / 213))) : 2903494651));
    #pragma endscop
}
