/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((min(-11037, var_1)))));
    var_19 = (1 << 1);
    var_20 = 103;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_21 = (((152782036 >> (165 - 157))));
        var_22 = (max(var_22, 1));
    }
    var_23 = (min(var_23, -4154771421716716230));
    #pragma endscop
}
