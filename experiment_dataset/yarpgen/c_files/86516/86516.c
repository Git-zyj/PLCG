/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    var_11 = (min(((((((var_8 ? 1 : 8))) ? ((max(var_4, 1))) : (!var_2)))), var_5));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = (min((arr_1 [i_0]), (arr_1 [i_0])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            var_13 = ((arr_3 [i_0] [i_0]) > (arr_3 [i_0] [i_1]));
            var_14 = (max(var_14, (((((((((arr_3 [i_0] [i_1]) + 2147483647)) >> 0))) ? (arr_1 [i_0]) : (!3666304729))))));
            var_15 = (min(var_15, -32758));
            var_16 ^= (!(1 / 514595828));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_2] [i_0] &= (arr_6 [i_0] [i_0]);
            var_17 = (min(32767, 514595855));
            arr_8 [i_0] [i_2] [i_2] = ((1 << ((((((arr_0 [1] [1]) ? (arr_3 [24] [i_2]) : (arr_3 [i_0] [16])))) - 4294967226))));
        }
        var_18 = var_7;
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        var_19 &= (0 == (arr_3 [i_3] [i_3 - 2]));
        var_20 = var_5;
        var_21 = (!38);
        var_22 = ((!(arr_6 [i_3] [i_3])));
    }
    var_23 = (1422587617 - 38);
    #pragma endscop
}
