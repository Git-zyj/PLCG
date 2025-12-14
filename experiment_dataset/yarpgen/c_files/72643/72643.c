/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (max(((((min(var_11, (-2147483647 - 1))) ^ var_19))), (min(((-108 ? 1901034402 : -1)), ((1 ? var_7 : 1901034388))))));
    var_21 -= ((((var_18 - (var_0 + var_11))) ^ (min(((var_8 ? var_10 : var_6)), var_16))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 = (min(var_22, ((max(var_4, (((arr_1 [i_0]) + -1072016613)))))));
        arr_2 [i_0] = (((((max(2284601047, 767318691)) < (((var_19 ? var_9 : var_0))))) ? (((((((arr_1 [i_0]) ? 253 : (arr_1 [i_0]))) == var_10)))) : (min((arr_0 [i_0]), 26776))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_23 = (max(var_23, (arr_0 [i_1])));
        var_24 |= ((!((min(8858614688055532000, ((max(65521, var_10))))))));
    }
    #pragma endscop
}
