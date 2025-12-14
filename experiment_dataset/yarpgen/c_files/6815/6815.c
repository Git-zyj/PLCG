/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 &= (min((arr_0 [8]), (((((25776 ? 2 : var_0))) ? (min(21963, (arr_0 [i_0]))) : 25776))));
        var_13 += (min(9223372036854775794, ((((((arr_1 [i_0]) ? 21963 : 54575))) ? (((arr_0 [i_0]) / 21963)) : (((min(42832, (arr_1 [i_0])))))))));
    }
    var_14 *= var_7;
    #pragma endscop
}
