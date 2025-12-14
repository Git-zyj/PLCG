/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = var_1;
        var_20 = (max(var_20, (((-(min(1195948120, 234881024)))))));
        var_21 = (max(1612432585, 2823672795));
    }
    var_22 -= ((var_13 ? -21135 : ((~(min(234881017, var_11))))));
    var_23 = (min(var_23, var_0));
    var_24 = var_14;
    #pragma endscop
}
