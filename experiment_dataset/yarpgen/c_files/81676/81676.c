/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -61;
    var_13 = ((~((var_4 ? (var_2 ^ 4571) : (~-4576)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = (min(var_14, ((((var_2 % 237) ? ((-var_10 % (1 & -1793233711))) : (!-1883912752))))));
        var_15 += (min((!-5174216716445515883), ((!(arr_2 [i_0])))));
    }
    var_16 = ((var_4 ? ((((5174216716445515883 ? var_8 : var_10)) ^ ((max(var_2, var_10))))) : var_5));
    #pragma endscop
}
