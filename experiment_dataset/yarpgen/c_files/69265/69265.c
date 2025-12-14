/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [4] = var_3;
        var_12 = -var_3;
    }
    var_13 = ((var_6 <= (var_4 < 1)));
    #pragma endscop
}
