/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            var_13 = (arr_3 [i_1 + 1]);

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_14 = var_6;
                            arr_12 [i_0] [i_0] [i_0] [i_1] [5] [i_1] [i_4] = (arr_1 [i_1 + 1]);
                            arr_13 [i_1] [i_1] [i_2] [i_2] [i_1] = ((((var_12 ? 10374728138090410743 : 55964)) >> (((arr_11 [i_3] [i_1 - 1]) + 1570097796))));
                            var_15 = var_0;
                        }
                    }
                }
                var_16 -= ((((((arr_11 [i_2] [i_1]) - 9595))) ? (arr_3 [5]) : -44));
                var_17 = ((var_6 ? ((((arr_2 [i_1] [i_1] [7]) % (arr_0 [i_0] [i_0])))) : (arr_5 [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1])));
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 13;i_6 += 1)
                {
                    {
                        arr_20 [i_0] [i_1] [i_5] [i_5] [9] = (((arr_14 [i_6 + 2] [i_6 - 2] [i_1 + 1] [i_1 + 1]) ? (arr_14 [i_6 + 1] [i_6 - 1] [i_1 + 1] [i_1 + 1]) : var_11));

                        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_1] [i_0] = (~9572);
                            arr_25 [i_0] [i_1 - 1] [i_5] [i_6 + 2] [i_1] [i_5] = (((((var_3 ? 0 : var_3))) ? var_0 : (((arr_0 [i_1 - 1] [5]) ? var_7 : (arr_6 [i_0] [i_7])))));
                            arr_26 [i_1] [i_1] [0] [5] [i_7] = (~-44);
                        }
                        for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                        {
                            arr_31 [i_1] [i_6] [i_5] [11] [i_1 + 1] [i_0] [i_1] = var_1;
                            var_18 = (min(var_18, (((((17129033607496084019 ? 3143645712 : 0)) % (~-126))))));
                            var_19 = (15097211356464706917 & 0);
                        }
                        for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                        {
                            arr_36 [i_1] [1] = 65;
                            var_20 *= (arr_9 [i_0] [i_0] [12] [i_0]);
                            arr_37 [i_9] [i_6] [i_1] [12] [i_0] = (arr_3 [i_0]);
                        }
                    }
                }
            }
            arr_38 [i_1] = (51 - -2147483648);
        }
        for (int i_10 = 1; i_10 < 12;i_10 += 1)
        {
            var_21 = (((arr_22 [i_0] [i_10 - 1]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
            var_22 -= 9383092204730087960;
        }
        for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
        {
            var_23 ^= (-126 || var_8);
            arr_43 [i_11] = ((15325189712537075885 ? 12582912 : (arr_1 [i_11])));
        }
        for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
        {
            arr_46 [i_0] [i_0] [i_0] &= 0;
            arr_47 [i_0] = (arr_34 [i_12] [i_12] [i_0] [i_0]);
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    {
                        var_24 = (min(var_24, -126));
                        var_25 = ((var_12 % (((arr_22 [i_0] [i_0]) >> (((arr_22 [i_12] [i_0]) - 3055899890))))));
                        arr_54 [7] [i_13] [i_13] [7] = var_9;
                        arr_55 [i_0] [i_0] [i_12] [i_13] [i_13] [i_13] = ((18446744073709551589 ? var_9 : -65));
                    }
                }
            }
        }
        arr_56 [i_0] = (arr_39 [i_0]);
    }
    var_26 = (var_5 && -1982839959);
    #pragma endscop
}
