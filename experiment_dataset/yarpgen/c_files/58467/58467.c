/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_8;
    var_11 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            {
                var_12 = (((2097151 && var_4) || 653038446));
                arr_5 [i_0] = (((-653038449 & var_2) * ((3072 >> (79 - 52)))));
                var_13 = (((var_3 & var_3) | 1));
            }
        }
    }

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_14 = var_4;

        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            var_15 = (((var_4 + var_5) - var_4));

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                var_16 = 13698750259665852422;
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_17 = ((var_7 << (79 - 62)));
                            var_18 = ((((var_5 ^ (-2147483645 > var_8))) != (11801 ^ 16940)));
                            var_19 = 653038446;
                            arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = var_3;
                            var_20 = (((var_6 + 2147483647) >> (-3932799976218100276 & 53)));
                        }
                    }
                }
                var_21 = (((2147483647 * 1) != 18));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                var_22 = 212;
                arr_22 [i_2] [i_2] [i_2] [i_2] = (653038448 * var_8);
            }
            for (int i_8 = 4; i_8 < 19;i_8 += 1)
            {
                var_23 = (min(var_23, var_2));
                var_24 = (((10682433324944942015 + -8754605927770492232) - 12564817394943173005));
                arr_26 [i_2] [i_3 + 4] [i_2] [i_3] = (((1569236722673379505 | var_5) >= (-7478470379671193635 > 14089)));
                var_25 = (var_6 - var_5);
            }
            var_26 = var_0;
        }
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            var_27 = 13698750259665852420;
            var_28 = var_3;
            var_29 = 4260477352;
        }
        var_30 = (-653038449 ^ -7478470379671193635);
        var_31 -= var_5;
        var_32 = (((var_6 & var_4) < 3932799976218100252));
    }
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        var_33 = (1 / var_8);
        var_34 = var_8;

        /* vectorizable */
        for (int i_11 = 3; i_11 < 12;i_11 += 1)
        {
            var_35 = (18446744073709551615 / var_4);
            arr_35 [i_11] = -5721757552400339750;
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
        {
            var_36 = var_6;
            var_37 = var_0;
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
        {
            var_38 = -469267244256479235;
            var_39 = (min(var_39, -18));
        }
    }
    #pragma endscop
}
