/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_11 *= 65526;
        arr_2 [i_0] [i_0 + 3] = (max(953670491, 1));
        arr_3 [i_0 + 4] = -1;
    }
    var_12 = (min(var_12, ((min(var_3, ((max(var_9, (var_4 < var_6)))))))));
    var_13 = var_10;
    var_14 += ((var_7 & ((~((max(65535, 3)))))));
    #pragma endscop
}
