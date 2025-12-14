/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_7;
    var_15 = ((-72 ? ((63 ? (var_11 > 127) : ((var_10 ? 1 : var_6)))) : ((var_1 ? (-11 + var_6) : 776171245))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 |= 8082973782378660326;
        arr_2 [i_0] = 2147483637;
    }
    var_17 += -127;
    #pragma endscop
}
