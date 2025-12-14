/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 -= (1 || var_16);
        var_21 = (((19 ? 248 : 2432880403)));
        arr_3 [i_0] = 24;
        var_22 = (64807 - 64807);
    }
    var_23 -= (11992313088360386203 == 2432880415);
    #pragma endscop
}
