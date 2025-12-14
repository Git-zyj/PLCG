/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_15 = (max(var_15, (arr_1 [i_0 + 1] [i_0 + 2])));
        arr_2 [i_0] |= 1609525791;
        var_16 = (((-6103127985626888593 ? 1609525778 : var_11)));
        arr_3 [10] = (((arr_1 [i_0 - 3] [i_0 - 3]) ? (arr_1 [i_0 + 2] [i_0 - 1]) : var_14));
    }
    var_17 = ((var_12 ? (((~var_12) / var_8)) : (((-(~1812306407))))));
    var_18 = (max(var_18, var_3));
    #pragma endscop
}
