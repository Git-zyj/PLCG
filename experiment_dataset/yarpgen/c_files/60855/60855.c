/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (-(arr_0 [i_0]));
        var_13 = ((~(((~20) + ((min(var_12, var_2)))))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_14 &= ((((~0) ^ (var_6 ^ 1))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_15 = ((arr_10 [i_0] [i_0] [i_0] [i_0]) ? var_11 : 0);
                var_16 = var_4;
            }
            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_17 = (((!-559096477) ? (((arr_13 [i_0] [i_0] [i_3 - 2] [i_5] [i_5 - 1] [i_5]) | (arr_13 [i_4] [i_4] [i_4] [i_5] [i_5 - 1] [i_4]))) : -var_4));
                            var_18 = var_5;
                            var_19 |= 1;
                            var_20 = 1;
                        }
                    }
                }
                var_21 |= 254;
            }
            arr_20 [i_0] [i_1] = (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
            arr_21 [i_0] [i_0] [i_0] = ((((((arr_5 [i_0] [i_1] [i_0]) >> (!1)))) ? ((1 ? 0 : 675561071)) : -2063331832723015814));
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_22 += (max(((min((arr_7 [i_0]), 255))), (max((arr_14 [i_0] [i_6] [i_6] [i_6]), var_5))));
            var_23 = (arr_16 [i_0] [i_0] [i_0]);
        }
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        var_24 = ((arr_16 [i_7] [i_7] [i_7]) & 1);

        /* vectorizable */
        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
        {
            arr_31 [i_7] [i_7] = 14;
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    {
                        arr_38 [i_8] [i_8] = (arr_37 [i_7] [i_8] [i_8] [i_10] [i_7] [i_7]);
                        var_25 = ((12523978517665769209 > (arr_6 [i_10] [i_9])));
                        var_26 = ((!(((1 ? 28288 : 8815320819602230937)))));
                        arr_39 [i_7] = 252;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
        {
            var_27 = (~1);
            arr_42 [i_7] = (arr_33 [i_7] [i_11]);
        }
    }
    var_28 = (max(((((((var_0 ? var_8 : var_1))) ? var_8 : (max(9223372036854775807, var_0))))), var_4));
    var_29 = 209;
    var_30 = ((1 != (var_7 / var_6)));
    var_31 = var_1;
    #pragma endscop
}
