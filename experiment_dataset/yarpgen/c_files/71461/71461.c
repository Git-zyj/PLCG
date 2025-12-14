/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_3 ? var_13 : ((var_11 ? 1787805337 : var_3))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 += (((((((max(-779605080, (arr_1 [4])))) ? var_3 : 779605080))) & var_14));
        var_18 ^= (((((var_4 ? (((779605094 ? (arr_1 [i_0]) : 3390877788690588595))) : (~var_12)))) ? 779605118 : (((((-779605107 ? (arr_2 [i_0]) : (arr_0 [i_0] [i_0])))) ? (!1) : (arr_1 [i_0])))));
    }
    var_19 ^= var_6;
    var_20 = (max(var_20, ((((779605118 ? ((var_3 ? var_1 : 1)) : (var_2 && var_3)))))));
    #pragma endscop
}
