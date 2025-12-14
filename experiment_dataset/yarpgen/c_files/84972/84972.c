/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_7 ? var_15 : var_4))) ? (1 + 22065) : ((((min(var_0, 42))) ? var_1 : (~var_3)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = ((var_14 ? var_2 : var_7));
        var_18 -= (255 - 1);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_19 = (max(var_19, (arr_2 [i_1])));
        arr_5 [i_1] = (arr_2 [i_1]);
        arr_6 [i_1] [i_1] = ((var_11 ? var_3 : (arr_0 [i_1])));
        arr_7 [10] = (((407318585809588770 > var_10) ? (((1 ? 1597121521 : 1))) : -7789208194216945279));
    }
    var_20 = var_8;
    #pragma endscop
}
