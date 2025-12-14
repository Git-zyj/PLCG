/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 703089879;
        var_15 |= -703089875;
    }
    var_16 = ((var_3 ? ((((((var_12 ? 703089874 : var_9))) && (((var_2 ? var_1 : var_9)))))) : var_5));
    #pragma endscop
}
