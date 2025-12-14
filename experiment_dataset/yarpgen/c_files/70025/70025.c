/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((((max(var_13, var_15)))))));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_17 = 179;
        var_18 = (!(1 > 4294967286));
    }
    for (int i_1 = 4; i_1 < 21;i_1 += 1)
    {
        var_19 *= ((((!((max(var_11, var_8)))))));
        var_20 ^= (min(1, 4294934528));
    }
    #pragma endscop
}
