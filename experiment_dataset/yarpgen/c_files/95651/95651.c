/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((!(((var_19 ? var_4 : var_2))))))) * ((((min(0, var_6))) ? var_19 : ((var_18 ? 18446744004990074880 : var_6))))));
    var_21 = -var_2;
    var_22 = var_13;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_23 = (((((~((min(0, 68)))))) ? (((max(-32750, 0)))) : (arr_3 [6] [i_0])));
        var_24 = 68719476732;
    }
    #pragma endscop
}
