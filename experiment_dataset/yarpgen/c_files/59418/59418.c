/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_17 = ((~(arr_0 [i_0 + 3] [i_0 - 1])));
        var_18 = var_9;
        var_19 = (min(var_19, var_10));
        var_20 = ((var_8 > ((29789 ? 1 : 65535))));
        var_21 = var_9;
    }
    var_22 = ((((((4341587350840083789 || var_7) ? 2173 : -9107047729490680438))) ? var_8 : (-2597676439809175949 + 2924280242)));
    #pragma endscop
}
