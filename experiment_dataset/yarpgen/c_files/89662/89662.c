/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 4005460364324794942;
    var_12 = (min(var_12, var_1));

    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (~1);

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_13 = (((!0) ? (arr_4 [i_0 + 1] [i_1] [i_0 + 1]) : 10));
            var_14 = (4 != 18446744073709551615);
            var_15 = (arr_0 [i_0 + 2] [i_0 + 2]);
            arr_5 [i_0] [i_0] [i_0] = ((var_4 ? (((((((var_0 && (arr_1 [i_0]))))) == (var_6 / var_6)))) : var_0));
            var_16 *= var_2;
        }
    }
    for (int i_2 = 1; i_2 < 11;i_2 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_17 = var_0;
            var_18 = (min(var_18, var_8));
            arr_12 [i_2] = (!(arr_0 [i_2] [i_2 + 2]));
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            var_19 = 0;
            var_20 *= 2480221700;
            var_21 += (max(((min((((((arr_6 [4]) + 9223372036854775807)) << (var_10 - 3988366254))), var_5))), (18446744073709551615 | 1)));
            arr_16 [i_2] [i_2] = (!var_9);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_22 = (arr_10 [i_2]);
            arr_20 [i_2 + 2] [i_2] = ((var_9 << (((arr_4 [i_2 + 1] [i_5] [i_5]) - 690580518320817987))));
            var_23 = (max(var_23, (((((arr_11 [i_2 + 2] [8]) == var_5)) ? (arr_0 [i_2 - 1] [i_5]) : 0))));
            arr_21 [i_2] [i_5] [i_2] = 1;
        }
        var_24 = var_7;
    }
    for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
    {
        var_25 = (min(1, 247));

        /* vectorizable */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            var_26 = (max(var_26, var_1));

            for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
            {
                var_27 = (min(var_27, (arr_6 [6])));
                arr_31 [i_6] [i_7] [i_6] = var_0;
            }
            for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_10 = 4; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 11;i_11 += 1)
                    {
                        {
                            arr_40 [i_6] [i_6] [i_10] [i_10] [i_11 - 2] [i_10] = ((var_1 ? 57368 : (arr_10 [i_6])));
                            arr_41 [1] [i_9] [2] [i_6] [i_11] [i_6] = (1 + var_6);
                            var_28 -= 1;
                            var_29 = (~-19);
                            arr_42 [8] [i_7] [i_7] [i_7] [i_6] [i_7] [i_7] = var_3;
                        }
                    }
                }
                var_30 = (max(var_30, (arr_18 [i_6 - 1] [i_6 - 1])));
                arr_43 [i_6] [i_6] = (!-2198339102);
            }
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 11;i_14 += 1)
                    {
                        {
                            arr_52 [2] [i_12] &= (arr_29 [6] [4] [i_12]);
                            var_31 = var_3;
                            arr_53 [i_6] [i_7] = (((arr_49 [i_6] [i_6 - 1] [i_6 + 1]) + (arr_49 [i_6] [i_6 - 1] [i_6 + 1])));
                            var_32 = var_4;
                        }
                    }
                }
                arr_54 [i_6] [i_6] [i_6] [2] = 1;
                var_33 = ((-32104 ? 1 : 70));

                for (int i_15 = 0; i_15 < 13;i_15 += 1)
                {
                    arr_57 [i_7] [i_6] [i_7] [i_7] = (var_6 > var_5);
                    arr_58 [i_6] [i_12] [i_6] [i_7] [i_6] = ((arr_48 [i_6] [i_6] [i_6] [i_6 + 2]) != 2147483647);
                    arr_59 [i_6 + 1] [2] [2] [i_15] &= (((arr_24 [2] [2]) * (arr_32 [12] [i_6 + 1] [12])));
                }
            }
        }
        var_34 += (-2147483647 - 1);
    }
    for (int i_16 = 1; i_16 < 11;i_16 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 13;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                {
                    var_35 += (arr_7 [i_16]);
                    var_36 = (max(var_36, (var_2 + 32103)));
                }
            }
        }
        var_37 &= 18446744073709551607;
        var_38 = (arr_29 [i_16 - 1] [12] [i_16]);
    }
    #pragma endscop
}
