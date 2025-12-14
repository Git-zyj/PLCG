/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = -7319496768248685712;
        arr_3 [i_0] = (min(1, 288089638663356416));
    }
    #pragma endscop
}
