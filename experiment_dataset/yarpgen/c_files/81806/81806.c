/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((max((var_1 / var_3), (var_10 <= 1))))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_16 += -1350196171276400046;
        var_17 = (~var_0);
        var_18 = (min(var_18, (((~(~1))))));
        arr_3 [i_0] = (((((1073725440 << ((((1881901935 ? var_8 : var_13)) - 864562515))))) ? -84 : ((var_14 ? var_8 : var_7))));
    }
    #pragma endscop
}
