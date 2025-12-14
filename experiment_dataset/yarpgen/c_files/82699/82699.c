/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((min((max(0, var_17)), 0)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_21 = ((-128 <= (((-4453 || 13057571843535406162) ? ((-5545176620432895371 ? 2622161370842283491 : (arr_1 [i_0]))) : (arr_0 [i_0])))));
        var_22 = 1;
    }
    var_23 = (((max(var_19, var_3)) ^ 1));
    var_24 = ((((!(var_11 % var_5))) ? (((30620 ? var_12 : 11341))) : (((!1) ? ((var_3 ? var_6 : 0)) : var_8))));
    #pragma endscop
}
