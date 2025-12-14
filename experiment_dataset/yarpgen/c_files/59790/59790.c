/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 = (max(var_12, var_4));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 = (max(((-1479532301202981716 ? (-1920448863 / -16872) : ((1758 ? -1479532301202981716 : var_9)))), (((((min((arr_0 [i_0]), 1758))) ? (!5281087552794377338) : (~-1759))))));
        var_14 = ((((((max(-1759, (arr_2 [i_0]))) & -1766))) & (var_2 & var_8)));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_15 -= (-5947 != 1758);
        var_16 = (((((-1758 ? -932976219449195600 : var_3))) ? ((min(8191, (arr_5 [i_1])))) : (~11350001364894557722)));
        var_17 = (((arr_4 [i_1]) & ((max((arr_5 [i_1]), -4837)))));
    }
    #pragma endscop
}
