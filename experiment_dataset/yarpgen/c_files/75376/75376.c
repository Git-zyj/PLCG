/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_18 = (arr_0 [i_0 - 1]);
        var_19 = var_9;
        var_20 = (((arr_1 [i_0 - 1]) % var_6));
        var_21 = (min(var_21, ((((((-289735625 ? 27404 : -1696791327))) % 58830)))));
    }
    var_22 = (min(var_22, ((max(var_16, ((min(-var_3, var_12))))))));
    #pragma endscop
}
