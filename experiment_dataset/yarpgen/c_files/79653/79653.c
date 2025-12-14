/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_10 = var_2;
        var_11 = 19;
        var_12 = 4294967290;
        var_13 = 127;
    }
    var_14 = ((((((-9 && 23277) >= 123))) << ((min((96 && 3), var_3)))));
    var_15 = 87;
    var_16 -= 2301188493035747039;
    #pragma endscop
}
