/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!(!101)));
    var_12 |= var_8;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 = ((var_3 && (var_8 - 542194223061492059)));
        arr_3 [i_0] = var_9;
        arr_4 [i_0] [i_0] = (((var_5 || var_4) ? ((-7056785775543232039 ? (!17904549850648059557) : ((1932581538 ? 114 : var_5)))) : ((114 ? 0 : 34))));
    }
    #pragma endscop
}
