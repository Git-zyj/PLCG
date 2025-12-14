/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_6;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = ((((arr_2 [3]) ? ((((arr_1 [14]) ? (arr_1 [i_0]) : 123))) : ((-13078994479010299 ? var_3 : (arr_1 [i_0]))))) * (((29 ? var_3 : 57981))));
        var_13 ^= (arr_1 [1]);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_14 = (max(var_14, ((((!(!0))) ? ((-(var_7 - 271478004641078101))) : ((((min(var_0, var_3))) ? ((((arr_4 [i_1]) ? -4044 : 1))) : var_5))))));
        var_15 = (min(var_15, (((~(((arr_4 [i_1]) / (arr_4 [i_1]))))))));
    }
    #pragma endscop
}
