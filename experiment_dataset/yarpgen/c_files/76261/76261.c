/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 = ((((-9111587520295928915 ? 1 : -2714875031896530703))));
        var_15 = -12783;
    }
    var_16 += ((var_3 < (((12783 || var_2) ^ var_11))));
    var_17 = 393296869;
    var_18 = var_1;
    #pragma endscop
}
