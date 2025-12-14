/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max(var_9, -18446744073709551615))) ? (-31 | var_5) : 251));
    var_14 = (max(var_14, ((((((((max(var_3, var_5))) || var_3))) <= (!var_2))))));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((((~(arr_0 [i_0]))) & -24032));
        var_15 |= var_0;
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_16 = ((~(((!((max(2528458853, -31))))))));

        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            var_17 = (min(var_17, ((((((var_2 ? (((arr_7 [i_1] [i_1]) ? (arr_5 [i_1] [i_2] [i_2 - 1]) : var_1)) : var_10))) ? ((-(((arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? var_2 : -31)))) : (((min(22, var_2)))))))));
            var_18 = (((arr_8 [i_2 + 2] [i_2] [i_1]) >= var_1));
            var_19 = (min(var_19, 1));
            arr_9 [i_1] = (((((((((~(-127 - 1)))) <= (max((arr_3 [i_2]), var_6)))))) ^ (((((4 ? (arr_3 [i_1]) : 23))) ? (((250 ? var_10 : var_0))) : var_12))));
            var_20 = ((((((((arr_8 [i_1] [i_2] [i_1]) & (arr_6 [i_1]))) <= var_0))) + -24612));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_13 [i_1 + 1] [i_3] |= (((1663176688 | var_8) ? ((-(arr_11 [i_1 - 1]))) : (((arr_8 [i_3] [i_1 + 1] [i_3]) ? (arr_8 [i_3] [i_1 - 1] [i_3]) : (arr_11 [i_1 - 1])))));
            var_21 = (max(var_21, ((((var_6 / (arr_3 [i_1])))))));
            var_22 = (arr_4 [i_1]);
        }
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            arr_17 [i_1] [i_1 + 1] [i_1] = ((var_7 + ((99 ? -115 : 30))));
            arr_18 [i_1] [i_1] [i_4] = 251;
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            var_23 = (((arr_14 [i_1 + 1] [i_1 + 1] [i_1 - 1]) >= (arr_15 [i_1] [i_1])));
            arr_22 [i_1] = (68 > var_9);
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_24 = (~232);
        var_25 = ((!(arr_8 [i_6] [i_6] [i_6])));
    }
    #pragma endscop
}
