/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= ((((((var_0 ? 17425997196401624549 : var_0)))) ? (((var_8 + 2147483647) << ((((((46578 ? var_9 : var_4)) + 79)) - 25)))) : ((var_5 ? var_8 : var_9))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((56 ? -121 : 2296835809958952960)));
        arr_4 [i_0] [i_0] |= ((7669482865136047797 ? 71 : 244));
        var_11 = (302191440 && 109);
        var_12 ^= (~var_9);
    }
    #pragma endscop
}
