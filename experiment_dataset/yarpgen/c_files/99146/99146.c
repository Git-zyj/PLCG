/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_9));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = (65535 ^ var_6);
        var_16 = 5200786917024987780;
    }
    var_17 = (min(var_17, (((!((((2 & var_2) ? var_1 : (4074469173 & var_9)))))))));
    #pragma endscop
}
