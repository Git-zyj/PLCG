/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_8 ? ((((!((min(var_2, var_10))))))) : (max((min(var_1, var_3)), ((min(49, var_9)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((arr_1 [i_0] [i_0]) ? ((((!(arr_1 [i_0] [i_0]))))) : (~var_5)))) ? ((252 ? var_6 : var_7)) : var_10));
        arr_3 [i_0] = (((max(var_11, -var_9))) ? (((arr_0 [i_0]) ? var_7 : -9223371761976868864)) : (arr_1 [i_0] [i_0]));
        arr_4 [20] &= (min((arr_1 [16] [i_0]), -2995554010246747422));
        var_13 = 18446744073709551605;
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (arr_0 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                {
                    var_14 &= (max(-7293316067027329423, (arr_6 [i_3])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_15 *= var_7;
                                var_16 = (min((arr_5 [i_1]), (arr_10 [i_1] [i_1])));
                            }
                        }
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            arr_19 [i_1] [i_6] = (arr_0 [i_1]);
            arr_20 [i_1] = (((arr_1 [10] [i_1]) ? var_10 : (((arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_6]) ? (arr_17 [i_1] [i_1] [i_1]) : (arr_7 [i_6])))));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            arr_31 [i_1] [i_1] [i_1] [i_1] [i_1] [i_9] = (((arr_29 [i_9] [i_9] [i_8 + 1] [i_9] [i_8]) | 255));
                            var_17 = (min(var_17, (arr_17 [i_1] [i_1] [i_1])));
                            var_18 = (arr_21 [i_1 - 1] [i_1 - 1] [i_8 + 2] [i_1 - 1]);
                            arr_32 [i_1] [i_6] [i_9] [i_1] [i_9] = var_2;
                        }
                    }
                }
            }
            arr_33 [i_1] [i_1] = (arr_17 [i_1] [i_1] [i_1]);
        }
        for (int i_10 = 0; i_10 < 0;i_10 += 1)
        {
            arr_36 [i_10] [i_10] = min((min(((min((arr_16 [i_10] [i_10]), 0))), (arr_26 [i_1] [i_1] [i_1] [i_1] [i_10]))), ((((((~(arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) ? ((max(1, var_8))) : ((-861375906 ? var_10 : var_4))))));
            arr_37 [i_10] [i_10] [i_10] = (((arr_27 [i_10] [i_10] [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1 - 2]) && var_10));
            var_19 = (arr_7 [i_1]);
            var_20 = (max(1, ((-(arr_26 [i_1] [i_1 + 1] [i_1 - 1] [i_10 + 1] [i_1 + 1])))));
        }
        arr_38 [i_1] = arr_9 [i_1] [i_1] [i_1];
        var_21 = (min((((((-(arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]))) < (arr_6 [i_1 + 1])))), ((var_9 | (arr_9 [i_1] [i_1] [i_1 - 3])))));
    }
    for (int i_11 = 1; i_11 < 9;i_11 += 1)
    {
        var_22 += var_3;
        arr_43 [i_11] = (max((((arr_0 [i_11]) ? var_8 : 18446744073709551605)), ((min((-9223372036854775807 - 1), 0)))));

        for (int i_12 = 3; i_12 < 8;i_12 += 1) /* same iter space */
        {
            arr_46 [i_11] = var_4;
            var_23 = min((max(var_7, ((min((arr_6 [i_11]), var_10))))), (((-((min(0, var_4)))))));
        }
        for (int i_13 = 3; i_13 < 8;i_13 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_14 = 1; i_14 < 7;i_14 += 1)
            {
                arr_53 [i_11] [i_11] [i_11] = arr_44 [i_13 + 1] [i_11];
                var_24 *= (((arr_10 [i_11 - 1] [i_11 - 1]) ? var_7 : var_11));
                var_25 ^= -6531812437902413676;
                var_26 = (min(var_26, ((((~243) ? (arr_42 [i_11 - 1]) : var_7)))));
                arr_54 [i_11] [i_11] [i_11] [i_11] = ((~((var_4 ? var_4 : -1))));
            }
            arr_55 [i_13] [i_11] [i_13] = ((arr_11 [i_11] [i_13] [i_13]) ? (((!(arr_18 [i_11 - 1])))) : ((-(arr_44 [i_11 - 1] [i_11]))));
        }
        arr_56 [i_11] = ((((((((var_2 ? (arr_7 [i_11]) : (arr_12 [i_11])))) ? (arr_51 [i_11 - 1] [i_11] [i_11] [i_11]) : (!8938)))) ? (arr_44 [i_11] [i_11]) : 4770088523669374053));
        arr_57 [i_11] = min((max((max((arr_41 [i_11]), 2147483647)), ((min(var_4, 997577216))))), (((219 < (arr_1 [i_11] [i_11])))));
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 12;i_15 += 1)
    {
        for (int i_16 = 1; i_16 < 11;i_16 += 1)
        {
            {
                arr_63 [i_15] [i_15] [i_16] = ((!((max(((var_5 ? (arr_15 [i_15] [i_15] [i_15] [i_16] [i_16] [i_16]) : -663392227)), ((-(arr_5 [i_15]))))))));
                var_27 -= (((((var_4 ? (arr_11 [i_16] [i_16 + 1] [i_16]) : (arr_11 [i_16] [i_16 - 1] [i_16])))) ? ((((arr_11 [i_15] [i_16 + 1] [i_15]) ? (arr_11 [i_16 + 1] [i_16 + 1] [i_15]) : (arr_11 [i_16] [i_16 - 1] [i_16])))) : ((992 ? 3722168527424160079 : (arr_11 [i_16] [i_16 + 1] [i_15])))));
            }
        }
    }
    var_28 = (~var_2);
    #pragma endscop
}
