/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((((min(65535, 29150))) * (29154 * 0))), -10187));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_21 -= (max(131, -29135));
        var_22 |= ((((38 ? 65535 : 1)) ^ ((((4070867863 || ((min(709893689, 255)))))))));
        var_23 = arr_1 [i_0] [i_0];
    }
    #pragma endscop
}
