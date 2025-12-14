/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = ((-7940875685091803642 ? (arr_0 [i_0]) : (arr_0 [i_0])));
        arr_4 [i_0] &= (var_15 <= 17);
    }

    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_17 ^= (arr_6 [21]);
        arr_7 [i_1] = ((-(((min(3810439238085184996, var_6))))));
        var_18 = ((-((-(arr_0 [i_1 + 1])))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((((var_15 ? 2024533472 : (((1116892707587883008 ? -53 : 24788)))))) ? var_12 : (((min(var_6, 1)))));
        arr_11 [i_2] [i_2] = (arr_0 [i_2]);
        var_19 = var_9;
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        var_20 += ((var_4 ? ((~(max((arr_5 [i_3]), var_9)))) : (~2270433822)));
        arr_14 [i_3] [i_3] = (arr_1 [i_3]);
    }
    var_21 = ((((((((2418160523 ? var_11 : var_9))) ? 60 : var_14))) ? ((((((var_5 ? 15311879900177214759 : var_11))) ? (!1476825160) : (!var_12)))) : var_14));
    var_22 = ((~var_7) - var_16);
    #pragma endscop
}
