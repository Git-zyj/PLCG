/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!4879);

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_21 -= (2536608859 < 2147483647);
        arr_4 [i_0 - 1] = var_5;
        var_22 = (max(var_22, ((((134217728 / var_13) | ((((var_3 + 2147483647) >> (var_16 - 4123340026195018941)))))))));
    }
    var_23 -= (!1);
    var_24 = (((((-var_11 + ((1758358436 ? var_4 : var_6))))) ? ((min((255 / 1955027157), ((2536608864 ? var_1 : var_14))))) : (max(65535, var_9))));
    #pragma endscop
}
