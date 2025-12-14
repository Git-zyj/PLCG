/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_11 *= ((((((var_8 == var_3) * (((arr_1 [i_0]) ? var_10 : 3371486376))))) ? (((var_3 + 2147483647) << (((max((arr_1 [i_0 - 3]), 3371486376)) - 3371486376)))) : ((2147483647 - (arr_0 [i_0 - 1] [8])))));
        var_12 *= (((((((arr_0 [i_0 + 1] [i_0 + 1]) || ((max(1, (arr_0 [i_0] [i_0 - 1])))))))) & ((var_8 >> (((arr_1 [i_0 - 1]) - 1264256250))))));
        var_13 = (max(var_13, ((((var_5 != (arr_1 [i_0])))))));
    }
    var_14 = ((1 ? (max(1546840931241628051, 32341)) : var_5));
    #pragma endscop
}
