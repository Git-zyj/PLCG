/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_12;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = (((((max((arr_3 [i_0]), 71040562308427329)))) ? (((arr_3 [i_0]) ? 13844774977958593989 : (arr_2 [1]))) : var_0));
        arr_5 [i_0] = (max(((((64 ? var_1 : 71040562308427325)) <= var_1)), (arr_0 [i_0])));
        var_14 ^= 23908;
        var_15 = (!(arr_0 [i_0]));
    }
    var_16 |= (min((max(59, 41627)), var_0));
    var_17 = var_1;
    var_18 = (max(var_18, ((max(var_0, var_4)))));
    #pragma endscop
}
