/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_14 = (min(var_14, -10055));
        arr_2 [i_0] = var_8;
    }
    var_15 += var_8;
    var_16 = (max(17877019112921010215, 16914342662938146723));
    var_17 = ((var_0 ? ((max(var_3, -10056))) : (max(((max(1, var_0))), (~76)))));
    #pragma endscop
}
