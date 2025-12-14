/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((max(var_5, 9223372036854775802)), (((var_16 | (min(510, var_12)))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_21 = var_12;
        var_22 = (max((((arr_0 [i_0]) ? 7809236211617239020 : 1)), (((min(var_12, 0))))));
        var_23 = ((((((((var_3 ? var_18 : 1))) ? (var_13 <= -217970182) : (1 && var_4)))) ? (((((1 ? 512 : var_7))) ? (max(var_13, var_11)) : ((((arr_1 [1] [i_0]) & 501))))) : ((max(-479978370, -1921384712)))));
    }
    var_24 = (max(var_24, ((((((var_1 ? var_13 : var_4))) ? var_3 : -var_15)))));
    var_25 = (max(var_25, var_14));
    #pragma endscop
}
