/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_6;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = ((var_8 ? var_3 : var_7));
        var_16 &= (((((0 ? 1 : -4190268094663032612))) ? (((((var_5 ? var_7 : var_0))) ? var_8 : var_8)) : (((((-3571099439170105744 ? -7237001165356977702 : 10975))) ? ((var_10 ? var_4 : var_13)) : (((1 ? -10976 : 0)))))));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_17 = (min(var_17, (((((var_10 ? var_6 : var_3))) ? var_12 : ((var_4 ? var_1 : var_12))))));
        arr_4 [i_1] = ((var_5 ? ((var_7 ? var_10 : var_8)) : (((var_2 ? ((var_4 ? var_2 : var_4)) : var_1)))));
        arr_5 [i_1] = var_8;
    }
    #pragma endscop
}
