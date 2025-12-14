/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (max(27753, 13240638147884908648));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 *= -var_2;
        var_13 = (-2036456037 ? -2080996507 : 63508);
    }
    var_14 = var_1;
    #pragma endscop
}
