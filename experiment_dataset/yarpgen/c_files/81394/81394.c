/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [23] = (!39);
        var_13 *= (((((53 ? (arr_1 [i_0] [i_0]) : 0))) ? (!59) : ((~(arr_0 [i_0])))));
        var_14 = 51;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_15 = ((~((-121609801753230650 ? 0 : 66))));
            arr_5 [i_1] = -121609801753230650;
            arr_6 [i_0] [i_1] = var_1;
        }
        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {
            var_16 = 190;
            arr_9 [i_0] [i_0] [i_0] = (arr_0 [11]);
            var_17 = ((var_9 ? (var_5 % var_9) : 1));
            arr_10 [i_0] [i_0] [i_0] = (((178 ? 0 : 188)));
        }
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_18 = (max(var_18, 133));

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            arr_16 [i_3] [i_4] [i_3] = ((((min(161, -1466438581))) | (min(1860, ((95 ? 67 : 194))))));
            var_19 = (~84);
            arr_17 [i_3] = var_9;
            var_20 = var_10;
        }
    }
    for (int i_5 = 1; i_5 < 24;i_5 += 1)
    {
        var_21 = (((0 ? var_6 : (var_10 - var_5))));
        var_22 = (max(var_22, (((var_2 & ((-((6158247703618178064 ? var_12 : var_7)))))))));
        arr_22 [i_5] = (min((max(((67 ? var_12 : var_5)), 80)), (84 | var_0)));
    }
    var_23 ^= (min((!var_9), (~var_7)));
    var_24 = (((((~(~var_12)))) ? ((min(var_3, 1))) : (min((~var_6), 134217664))));
    var_25 = 192;
    #pragma endscop
}
