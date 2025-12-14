/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((((~(max(var_10, -3514960499264309272)))) < var_1)))));
    var_14 = (((((var_4 + ((var_3 ? var_0 : 0))))) > var_5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [10] [i_0] |= ((~(arr_0 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_15 = (max(var_15, (~var_10)));
            var_16 &= (arr_4 [i_0]);
            arr_6 [i_1] = (arr_1 [i_0]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] [16] = (3514960499264309272 ^ (((arr_1 [17]) ? (arr_4 [i_0]) : (arr_9 [i_0] [i_3] [i_0] [i_3]))));
                        var_17 = ((!(arr_12 [i_0] [i_0] [i_0] [i_0])));
                    }
                }
            }
            var_18 = (var_10 / 16777215);
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
            {
                var_19 = (min(var_19, -16776));
                var_20 = -3514960499264309272;
                arr_19 [i_5] [i_4] [i_4] [i_0] = 31433;
                var_21 = (max(var_21, (((var_12 ? ((((((arr_15 [i_4] [i_5]) + 2147483647)) >> (var_10 - 17825676841888493224)))) : ((~(arr_14 [i_5] [i_0]))))))));
                arr_20 [i_0] [i_4] = var_9;
            }
            for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
            {
                var_22 = ((!(arr_8 [i_4] [i_4])));
                var_23 = (min(var_23, (-16776 | 1)));
            }
            var_24 -= var_8;
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            var_25 = (min(var_25, (((-(((arr_24 [i_7]) ? (arr_17 [i_0]) : var_1)))))));
            var_26 *= ((var_5 + (var_0 != 4294967295)));
            var_27 = ((((!(arr_7 [i_0]))) && var_8));
            var_28 &= (((((~(arr_9 [i_7] [i_0] [i_7] [i_0])))) || -var_9));
        }
        for (int i_8 = 1; i_8 < 17;i_8 += 1)
        {
            var_29 += 249;
            arr_30 [i_0] [2] [i_0] = -3514960499264309290;
        }
    }
    #pragma endscop
}
