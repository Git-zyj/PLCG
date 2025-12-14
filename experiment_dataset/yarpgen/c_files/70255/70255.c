/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((~var_6), var_7));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (var_6 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]));
        var_14 = (min(var_14, ((((arr_2 [i_0] [i_0]) & var_6)))));
        var_15 |= var_5;
        var_16 = ((var_5 ? (var_3 || var_7) : var_11));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_17 = var_8;
        var_18 = 65535;
        var_19 = (min(var_19, (((var_8 || (20692 / -431789509616762510))))));
        var_20 -= 65535;
    }
    #pragma endscop
}
