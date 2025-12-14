/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((((((var_10 || var_12) / var_9))) ? (min(var_4, (var_10 | var_9))) : var_8));

    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_19 |= var_1;
        var_20 = ((min((min(var_15, var_16)), var_15)));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_21 = (min((31 >> 22), 4294967265));
            arr_6 [i_1] = ((~6941) | ((min((arr_5 [15] [i_0]), (arr_5 [i_0] [i_0 + 1])))));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_22 = (8589934591 ^ (((max(22, 224)))));

            for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
            {
                arr_12 [i_0] [i_0] [i_3] = (arr_10 [i_0] [i_0] [i_0] [i_0]);
                var_23 = var_12;
                var_24 = (((max((min(var_5, 18446744073709551615)), 32767))) ? (204 >> var_4) : (20722 / 8589934591));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_25 += var_1;
                            var_26 = (min(var_26, ((min(((min(var_16, var_8))), -238)))));
                            var_27 = (max(7863281897087062042, -31327));
                        }
                    }
                }
            }
            for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        {
                            var_28 = (min(var_28, ((max((min(((((arr_22 [i_0 - 1] [i_0 - 1] [i_6] [5] [5]) ? 43694 : 8))), ((4294967265 ? var_7 : var_12)))), (((!(arr_22 [i_0] [i_2] [9] [7] [7])))))))));
                            var_29 = ((15463221400764877249 ? var_12 : -var_4));
                            var_30 = (((18446744073709551615 / (arr_18 [i_0 + 1] [i_0]))));
                        }
                    }
                }

                for (int i_9 = 3; i_9 < 19;i_9 += 1)
                {
                    var_31 = 255;
                    var_32 *= (min((max((((0 ? 159 : 255))), var_15)), ((((arr_7 [i_0 - 1] [i_9 + 1]) >= 8589934591)))));
                    var_33 = ((((max(var_16, (255 * var_1)))) ? var_13 : (min((arr_5 [i_9] [i_0]), 1))));
                }
                /* vectorizable */
                for (int i_10 = 1; i_10 < 22;i_10 += 1)
                {
                    var_34 = ((var_11 ? (1 / 159) : (var_10 != 3170)));
                    var_35 |= (6 * var_12);
                }
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    var_36 = -var_6;
                    var_37 = (min(var_37, (((~(arr_3 [i_6] [i_11]))))));
                    var_38 = (max(var_5, (((arr_22 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]) ? (49 >= 7247) : -44))));
                }
            }
        }
    }
    for (int i_12 = 1; i_12 < 22;i_12 += 1) /* same iter space */
    {
        var_39 -= (((var_0 > 0) < var_0));
        var_40 -= var_10;
        /* LoopNest 3 */
        for (int i_13 = 3; i_13 < 20;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 23;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    {
                        var_41 = (((var_3 + 2147483647) >> (((~var_14) + 53))));
                        var_42 = (min(var_42, 1680112591));

                        for (int i_16 = 1; i_16 < 20;i_16 += 1) /* same iter space */
                        {
                            var_43 = (((83 ? 2147483647 : 188)));
                            var_44 = (min((min(((17 ? var_4 : (arr_40 [19] [i_12]))), (arr_40 [i_13] [i_12]))), ((var_13 ? -22289 : (arr_4 [i_16 + 3] [i_12 - 1])))));
                            arr_48 [1] [i_13 - 1] [i_15] [i_13 - 1] [i_14] [i_13] |= ((var_8 ? var_8 : (arr_39 [i_12 - 1] [i_15])));
                        }
                        for (int i_17 = 1; i_17 < 20;i_17 += 1) /* same iter space */
                        {
                            var_45 = (max(var_45, var_15));
                            var_46 = ((((-(min(var_16, var_9)))) > ((((min(var_2, var_12)) & (~var_12))))));
                            arr_51 [i_15] [i_13 + 3] [i_14] [i_15] [i_12] [6] [i_17] = (16226473039947446594 * 0);
                        }
                    }
                }
            }
        }
        arr_52 [i_12] = (arr_49 [i_12 - 1]);
        var_47 = (max(127, (((((192 ? 191689926 : 4294967281))) ? (255 != var_6) : 44180))));
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 1;i_18 += 1)
    {
        var_48 &= ((((-1680112591 ? 5 : 20)) >= var_5));
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 12;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 12;i_20 += 1)
            {
                {
                    var_49 += (~var_17);
                    var_50 = ((arr_41 [i_18] [i_19]) ? 2690724739942109270 : var_8);
                    arr_60 [i_18] = (arr_27 [12] [i_18] [i_19] [i_20]);
                }
            }
        }
    }
    var_51 ^= (min((max(-var_9, (~16109321126567192101))), (~8176)));
    #pragma endscop
}
