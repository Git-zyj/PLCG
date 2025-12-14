/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((((max((-2147483647 - 1), var_2))) ? ((1 ? 4294967295 : 12412351093921902991)) : -8004782267764330641))) ? (((min((arr_0 [i_0]), (arr_0 [i_0]))))) : (min((arr_1 [i_0] [i_0]), ((max(var_0, -264406109)))))));
        var_15 -= ((-(min(0, -0))));
        arr_3 [i_0] = ((((min((arr_0 [i_0]), (-9223372036854775807 - 1)))) || ((((-9223372036854775807 - 1) ? (((arr_0 [i_0]) % var_4)) : var_8)))));
    }
    var_16 |= (~var_0);
    var_17 += ((((min(((var_0 ? var_4 : var_8)), -var_13))) ? (((var_4 ? ((min(47556, -61))) : var_0))) : -7408421628289295961));
    var_18 &= (max(((-var_12 ? -8640335014212719087 : var_13)), var_0));
    #pragma endscop
}
