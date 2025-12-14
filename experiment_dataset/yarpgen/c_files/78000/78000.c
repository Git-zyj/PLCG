/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_11;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 = max((max((511 + var_2), var_0)), ((((var_4 && 15433336211922688553) ? (((arr_0 [11] [11]) - var_12)) : (~var_14)))));
        var_21 += (min(var_16, (((8103040459986368330 ? 1 : 3968)))));
        var_22 = ((1 ? 1 : 1));
    }
    #pragma endscop
}
