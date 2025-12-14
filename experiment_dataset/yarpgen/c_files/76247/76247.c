/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((1 & 6902572905455039138) & ((var_3 + (253 & var_15)))));
    var_17 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = (min(var_18, 65535));
        var_19 += (arr_1 [3]);

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_0] [4] [4] = 1;
            var_20 = ((-6902572905455039134 ? (arr_1 [i_0]) : var_6));
        }

        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            arr_11 [i_2] [i_2] = (!var_10);
            var_21 &= (((arr_5 [i_2 + 2]) == var_11));
            var_22 = (arr_1 [i_2]);
            var_23 += ((((!(arr_10 [i_0] [i_0] [10])))) - -238);
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_14 [i_3] [i_3] [1] = ((var_2 / (arr_12 [i_0] [i_3] [i_3])));
            var_24 = (max(var_24, (((1 ? (arr_4 [i_3] [i_0]) : (arr_10 [i_0] [i_0] [i_0]))))));
        }
    }
    var_25 = ((var_14 > ((((18446744073709551615 ? var_6 : var_8)) & (min(1, 9223372036854775807))))));
    #pragma endscop
}
