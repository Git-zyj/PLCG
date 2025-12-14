/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = var_16;
        var_21 = (min((max(42672, var_3)), var_11));
    }
    var_22 = 4294967295;
    #pragma endscop
}
