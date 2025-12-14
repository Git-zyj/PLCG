/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = var_2;
        var_10 = 64508;
    }
    var_11 = var_3;
    var_12 = var_6;
    var_13 ^= (var_0 || var_2);
    var_14 = var_4;
    #pragma endscop
}
