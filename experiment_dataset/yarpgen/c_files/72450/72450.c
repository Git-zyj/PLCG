/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 |= (!109);
        arr_2 [i_0] [i_0] = (((((146 ? var_5 : var_4))) ? 1073741823 : var_8));
        arr_3 [i_0] = 2046010541;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_12 = (-(~var_8));
            arr_10 [i_1] [i_1] = (2147483647 & ((1 ? 1629706004 : var_5)));
            var_13 = (((137472959 ? var_9 : 18446744072635809792)));
        }
        arr_11 [i_1] = var_4;
    }
    var_14 = (min(((((max(-3818, var_9))) ? (min(0, var_3)) : ((max(5, 729538637))))), (-2147483647 - 1)));
    var_15 = (min(((max(var_5, (min(-3800, 3817))))), var_7));
    var_16 = ((((min(1749573983, -var_1))) ? (min(23, (max(var_2, 18446744073709551615)))) : ((min(-1027117248, (~var_6))))));
    #pragma endscop
}
