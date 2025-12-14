/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = (min(var_17, (min(var_13, (((-var_13 > (6943140649987055784 & 4))))))));
        var_18 ^= (((((((247 < (arr_0 [i_0] [i_0])))) * ((-1532033848 ? (arr_1 [i_0]) : (arr_1 [i_0]))))) << (((((((arr_1 [i_0]) | (arr_0 [i_0] [i_0]))) | (((arr_0 [i_0] [i_0]) ^ var_2)))) + 20510))));
    }
    var_19 &= ((-var_2 ? var_15 : (~var_13)));
    var_20 = (min((min((min(var_4, var_1)), (~var_4))), ((((min(var_3, var_0)) / (((var_0 ? var_5 : var_5))))))));
    #pragma endscop
}
