/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (((2147483629 ? 1023 : 2147483647)));
        var_10 ^= 0;
    }
    var_11 = (min(var_11, var_3));
    var_12 = ((var_4 + (var_3 <= var_0)));
    var_13 = (min(var_13, ((min(var_8, var_1)))));
    #pragma endscop
}
