/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= ((((!var_10) && var_4)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            var_17 += ((((((var_2 + 2147483647) >> (var_12 - 4165059866))))) ? ((var_1 ? var_5 : var_8)) : var_7);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_3] [i_0] &= (arr_3 [i_2]);
                            arr_15 [i_0] [i_0] [i_1] [i_2] [1] [i_3] [i_4] = ((((((var_10 * var_3) ? var_13 : ((((var_3 > (arr_8 [i_0] [i_1 - 3] [11] [i_1])))))))) ? (((7 ? 1 : 0))) : ((13 ? 36027697507336192 : -36027697507336193))));
                            arr_16 [i_0] [i_0] [i_1] [i_0] [i_4] = (var_8 % var_6);
                        }
                    }
                }
            }
            arr_17 [i_0] [i_1] [i_1] = (((((((var_6 ? var_14 : var_1))) != ((var_5 ? var_7 : var_5)))) ? (min(-36027697507336193, -36027697507336193)) : ((((max(var_12, (arr_3 [i_1 - 3]))) + var_11)))));

            for (int i_5 = 2; i_5 < 14;i_5 += 1)
            {

                /* vectorizable */
                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {
                    var_18 = ((-12 & (arr_20 [i_1] [i_1] [i_5])));
                    var_19 = (((arr_19 [i_1] [i_5] [i_1] [i_0]) ? ((var_6 ? var_5 : var_4)) : var_13));
                }
                var_20 = (((((arr_7 [i_5 - 2] [i_1] [i_5 - 2]) | var_3)) >= 18519));
                arr_24 [i_0] [i_1] [i_1] [i_0] = (((((~-93) >> (((var_10 * var_12) - 3967544767)))) == var_14));
                arr_25 [i_1] [i_1 + 2] [i_1] = (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
            for (int i_7 = 4; i_7 < 12;i_7 += 1)
            {
                arr_28 [i_1] = (((((!var_2) ? ((-36027697507336193 ? 36027697507336187 : 0)) : (arr_12 [i_7] [i_7] [i_7] [i_1] [i_7])))) ? var_2 : var_7);

                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    arr_31 [i_0] [i_7] [i_0] [i_0] [i_0] [i_8] &= (((((var_11 ? var_13 : (arr_29 [i_0] [i_1] [i_7] [i_8] [i_0]))))) ? (((((arr_9 [i_0] [i_0] [i_1] [2] [i_1]) - var_3)) / ((var_11 ? (arr_27 [i_1]) : var_7)))) : var_6);

                    /* vectorizable */
                    for (int i_9 = 4; i_9 < 14;i_9 += 1)
                    {
                        var_21 = (((arr_0 [i_1 - 1]) ? var_4 : (arr_9 [i_0] [i_0] [i_7] [i_8] [i_9])));
                        var_22 = (max(var_22, (((((((arr_8 [i_0] [i_7 - 4] [i_7 - 4] [i_0]) ? var_8 : var_13))) ? (!var_15) : (var_12 != var_2))))));
                        var_23 = (((arr_30 [i_0] [i_0] [i_0] [i_7] [i_0] [12]) ? var_8 : (var_9 ^ var_1)));
                        arr_34 [i_1] [i_1] [i_1 - 1] [13] [0] [0] = (((var_7 | var_13) ? ((var_13 ? var_5 : (arr_19 [i_0] [i_8] [i_9] [i_8]))) : (((var_11 ? var_8 : (arr_13 [i_0] [i_1 - 2] [i_1 - 2] [1]))))));
                    }
                }
                var_24 += (((((((((arr_5 [i_0] [i_0]) ? var_0 : var_2))) ? (!var_1) : var_13))) ? ((var_6 ? (arr_19 [i_7 - 4] [i_7 - 4] [i_7 - 1] [i_7 - 2]) : (arr_19 [i_7] [i_7 - 2] [i_7] [i_7]))) : ((13 * (arr_13 [0] [i_7 + 3] [13] [11])))));
                arr_35 [i_1] = (((arr_7 [i_1 + 1] [i_1] [i_7]) ? ((((36027697507336192 ? 0 : -36027697507336177)) * (arr_1 [i_7 - 1]))) : (((65519 / -1) * (min(var_14, (arr_26 [i_0] [i_0] [i_0] [i_0])))))));
            }
        }
        var_25 = (((((~36027697507336186) <= 0)) ? 29410 : ((18014398475927552 ? 1 : ((-1 ? 28 : var_13))))));
        var_26 = var_2;
        var_27 = (((((((((-93 + 2147483647) >> (36027697507336201 - 36027697507336182)))) ? var_5 : (((var_12 ? (arr_3 [2]) : var_4)))))) ? (((~var_14) ? ((var_7 ? var_11 : var_14)) : ((var_10 ? var_3 : var_13)))) : var_2));
        arr_36 [i_0] = (arr_18 [i_0] [i_0] [i_0] [i_0]);
    }
    var_28 = (max(var_28, (((-(((((var_11 ? var_1 : var_4))) ? var_9 : (var_8 || var_15))))))));
    #pragma endscop
}
