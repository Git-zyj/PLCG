/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_10));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = (~-2059738439180321511);
        var_20 = -7577964420065637071;
        arr_2 [i_0] = 0;
    }
    var_21 = var_12;
    var_22 = var_2;
    #pragma endscop
}
