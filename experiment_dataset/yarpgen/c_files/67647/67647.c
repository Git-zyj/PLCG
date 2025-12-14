/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max(28248, -8623877061632958564);
    var_18 = (var_12 & var_14);
    var_19 -= var_16;
    var_20 = (~-21891);

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_21 ^= var_10;
        arr_3 [i_0] = (max((((var_6 > ((var_16 ? 13271820 : var_14))))), (max(var_0, ((-25615 ? 4281695476 : var_11))))));
        var_22 = ((((min(var_13, (8687145576866894572 / var_9)))) ? 4779716935435890428 : (min(var_4, var_15))));
        var_23 = var_8;
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] = ((((((var_13 ^ 558316613787066299) << (var_2 - 5045571144935943748)))) ? (var_12 + -1) : var_1));
        var_24 |= ((((min((max(var_0, var_9)), var_12))) ? ((min(3293249277944039140, (min(7410614835732898651, var_2))))) : -var_9));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_25 *= (-1 > 9223372036854775807);
        arr_11 [15] = ((((max(var_4, ((max(var_1, var_8)))))) ? (~4294967295) : -var_16));
        arr_12 [i_2] = var_3;
    }
    #pragma endscop
}
