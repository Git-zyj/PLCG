/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 = (!182);
        arr_2 [i_0] = (min((((!(!var_5)))), (((((max(124, (arr_1 [2]))))) + var_5))));
        var_18 = arr_0 [i_0];
    }
    var_19 -= ((max(var_11, var_13)));
    var_20 = var_13;
    #pragma endscop
}
