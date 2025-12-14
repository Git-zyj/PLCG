/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-126546670514806635 & (var_7 | var_6)));
    var_17 = var_8;

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (-4 != var_11);
        var_18 -= (~45);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_19 = (arr_1 [i_1] [i_1]);
        var_20 = (!(((var_1 ? (arr_4 [i_1]) : 46526))));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                arr_14 [i_1] [i_2] [19] [19] = (arr_10 [i_3] [i_3 + 1] [i_3 - 2]);
                var_21 = (((arr_4 [i_1]) ? (var_4 * var_7) : 153));
            }
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                var_22 = arr_4 [i_1];
                arr_17 [i_2] [i_1] [i_1] = 0;
                arr_18 [i_1] [i_2] [i_1] = ((((arr_6 [i_1] [i_2] [i_1]) / var_6)));
            }
            var_23 = (arr_8 [i_1] [i_1]);
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_22 [i_5] [i_5] = ((((((arr_12 [i_5] [i_5] [i_5]) ? (arr_12 [i_5] [i_5] [i_5]) : (arr_12 [i_5] [i_5] [i_5])))) ? ((((arr_12 [i_5] [i_5] [i_5]) ? var_1 : var_8))) : (max((arr_12 [i_5] [i_5] [i_5]), (arr_1 [i_5] [i_5])))));
        var_24 = (((arr_10 [i_5] [i_5] [i_5]) ? 45 : (((arr_10 [i_5] [i_5] [i_5]) * (arr_10 [i_5] [i_5] [i_5])))));
        arr_23 [i_5] = ((63012 ? var_8 : ((~(111 ^ var_13)))));
    }
    #pragma endscop
}
