/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((0 & (((var_10 + 9223372036854775807) >> (((~var_8) - 239317245515548308))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_21 = (max(var_21, (((var_1 ? 9 : (arr_0 [i_0 + 2]))))));
        arr_2 [6] = var_4;
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_22 = (arr_4 [i_1] [i_1]);
        var_23 = ((((1 >> 1) && var_7)));
    }
    var_24 = (!-var_12);
    #pragma endscop
}
