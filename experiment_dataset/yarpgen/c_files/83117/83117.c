/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = (((var_2 | 32620) | 17329));
        var_18 = ((((max(32896, ((var_2 ? var_3 : var_6))))) ? var_3 : (32916 | var_6)));
    }
    var_19 = 17329;
    var_20 = (min(var_20, ((((((var_2 ? ((32620 >> (var_9 - 873))) : (var_9 >= 775376918879185380)))) >= 507110726086971432)))));
    #pragma endscop
}
