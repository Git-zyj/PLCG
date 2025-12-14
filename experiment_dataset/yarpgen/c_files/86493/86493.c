/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (max(var_15, (15020295456607179639 >> 1)));
        var_16 = (max((min((arr_1 [i_0]), 58430)), ((((((((arr_1 [i_0]) >= 17213)))) > (max(17224762126711177723, 917504)))))));
        var_17 ^= (max(((17224762126711177721 ? 1221981946998373892 : 0)), (((((((arr_0 [i_0]) ? var_3 : -21713))) && (!var_5))))));
    }
    var_18 = ((((min(var_6, var_4))) || var_4));
    #pragma endscop
}
