/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_10 = var_5;
        arr_2 [i_0] = 1333040747;
        var_11 ^= var_0;
        var_12 = 2252689327585800485;
        var_13 = (max(var_13, 26));
    }
    var_14 = var_8;
    var_15 = 17367;
    var_16 = (!0);
    var_17 *= (~var_1);
    #pragma endscop
}
