/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((!((min(var_18, 11609)))));
        arr_3 [i_0] [i_0] = var_11;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_19 = ((var_15 ? (~-407977703) : 201));
        var_20 ^= var_13;
    }
    var_21 = (255 | 2147483647);
    var_22 = ((max(((var_11 ? 38 : var_2)), var_9)));
    #pragma endscop
}
