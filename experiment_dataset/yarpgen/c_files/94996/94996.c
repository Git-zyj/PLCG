/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = (var_3 + (~var_12));
        var_21 &= 11818823418316532592;
        var_22 = ((-(arr_0 [i_0] [i_0])));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            var_23 = (arr_3 [i_0] [i_1 - 1]);
            var_24 += (((var_8 ? var_14 : 11818823418316532586)));
        }
    }
    var_25 = (min(11818823418316532592, (((11818823418316532586 ? 3235679698 : var_7)))));
    var_26 = var_6;
    #pragma endscop
}
