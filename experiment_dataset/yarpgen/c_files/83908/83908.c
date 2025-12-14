/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 |= ((max(var_5, 506722418)));
        var_20 |= (((max((arr_2 [i_0]), var_11)) % var_10));
        var_21 = (min(var_21, (((var_8 * -var_3) ? (((arr_2 [i_0]) / ((((arr_0 [i_0]) <= 57))))) : var_11))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_22 = 3037930953;
        arr_7 [i_1] |= (max(-var_11, var_5));
    }
    var_23 = 119;
    #pragma endscop
}
