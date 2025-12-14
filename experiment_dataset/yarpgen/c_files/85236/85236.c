/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (((max(((var_8 ? var_6 : 155)), 181)) >> (((5007 & -3326271389898926913) - 4209))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 &= (max(var_1, (((-13 + 2147483647) >> (((arr_2 [i_0]) + 18018))))));
        var_14 = -var_9;
        var_15 = (((max(101, 10107))));
        var_16 = (max(var_16, ((((arr_3 [i_0]) >> (((~var_9) - 1)))))));
    }
    var_17 = 92;
    #pragma endscop
}
