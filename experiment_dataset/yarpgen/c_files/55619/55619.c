/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((((~(var_11 >= var_4)))), (max((min(var_0, var_8)), var_7))));
    var_17 = var_5;
    var_18 = ((var_6 || ((var_10 || (((var_3 ? var_2 : 5)))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 ^= -120;
        var_20 = (min(var_20, ((((((min(5641128144991077745, var_6))) != (max(var_5, var_13)))) || -0))));
    }
    #pragma endscop
}
