/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (max((((17514556233117055375 ? (arr_1 [i_0]) : (arr_1 [i_0])))), (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])))));
        var_15 ^= 3142596985;
    }
    var_16 = var_2;
    var_17 = var_8;
    #pragma endscop
}
