/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 11814461022567944511;
    var_19 *= ((!(((var_6 ? var_0 : -0)))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_20 = ((!((((arr_0 [i_0]) ? (((max(var_1, (arr_3 [i_0 - 1]))))) : -var_16)))));
        var_21 |= var_14;
        var_22 = (((arr_0 [i_0]) ? (((min((65535 >= 5313966329869522192), (!var_1))))) : ((((min((arr_3 [1]), (arr_3 [i_0])))) ? var_0 : (arr_0 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_23 &= (((((arr_5 [i_1 + 2]) % var_17)) / ((((arr_5 [i_1 + 1]) << (((arr_6 [i_1 + 1]) - 6927816566285439160)))))));
        var_24 = (min(var_24, var_6));
    }
    var_25 = (-42526 ? var_16 : (((((var_6 ? 84 : var_15))))));
    #pragma endscop
}
