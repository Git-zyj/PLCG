/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_16 = (max(var_16, var_1));
        arr_2 [i_0 - 1] = ((~var_12) == -1709400037);

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            var_17 = (~1709400037);
            var_18 = (((var_11 ? var_13 : var_1)));
            var_19 = (min(((max((min(-1, 1709400037)), var_10))), var_5));
        }
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_20 = ((var_12 | ((var_13 ? var_12 : -1))));
        var_21 = (max((var_8 | var_8), (max((((-1 ? var_0 : -1))), var_14))));
        arr_8 [1] |= ((((min(var_2, 1709400055))) ? var_9 : 742468718));
        var_22 = (!var_0);
    }
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        var_23 |= (((var_5 < 1496) ? var_7 : (max(1709400037, 1709400040))));
        arr_11 [i_3] = -1;
    }
    #pragma endscop
}
