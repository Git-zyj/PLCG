/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_6 | var_5);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = (min(var_13, var_9));
        arr_2 [i_0] [i_0] = ((1410270517 <= ((var_6 + (var_2 + 1410270516)))));
    }
    var_14 = var_4;
    #pragma endscop
}
