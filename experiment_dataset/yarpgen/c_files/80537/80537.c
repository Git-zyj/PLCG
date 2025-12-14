/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((((var_10 <= var_1) > (max(var_10, var_1))))), var_8));
    var_13 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = var_3;
        arr_3 [i_0] [i_0] = var_9;
        var_15 = var_6;
        var_16 = (var_11 * var_6);
    }
    var_17 = var_3;
    var_18 = (((var_8 && var_0) || var_3));
    #pragma endscop
}
