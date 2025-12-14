/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_14 = (arr_0 [i_0]);
        arr_2 [i_0] = var_12;

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_15 = (min(2608173651490060177, ((min(51825, (arr_3 [i_0 - 1] [6]))))));
                var_16 = arr_0 [i_0];
                var_17 = var_12;
            }

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 8;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_18 &= (((-var_7 << (var_8 - 18446744073709551610))));
                            var_19 = (var_1 ? (((114 ? 2017068325 : var_6))) : (arr_10 [i_0]));
                            var_20 += (arr_0 [i_5]);
                            arr_14 [1] [i_0] [i_3] [1] [1] [i_1] = (((min((-2017068322 + 2828654074), (arr_12 [i_0] [i_1] [i_0 - 1] [i_3] [i_5])))) ? var_7 : (((arr_6 [i_0 - 3] [i_0]) ? var_11 : (arr_11 [i_1]))));
                        }
                    }
                }
                arr_15 [6] [i_0] [i_1] [i_3] = ((!((var_9 < (((var_10 << (var_1 - 12950364503393638922))))))));
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 9;i_7 += 1)
                {
                    {
                        var_21 -= (min((9223372036854775792 / -2017068325), (arr_0 [i_6])));
                        var_22 = ((~((((var_5 - var_1) >= var_6)))));

                        for (int i_8 = 1; i_8 < 7;i_8 += 1)
                        {
                            var_23 = (((min(var_8, (arr_24 [i_8 + 2] [i_8] [i_7 - 2] [i_0 - 3] [i_0]))) | (~-19916)));
                            var_24 = (((((min(16158176160807834109, 2288567912901717497)) * var_3)) != ((~(arr_5 [i_1])))));
                        }
                        var_25 = (arr_24 [10] [7] [i_6] [i_7] [i_1]);
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_9 = 3; i_9 < 10;i_9 += 1) /* same iter space */
        {
            var_26 = (((arr_5 [i_0 + 3]) ? (arr_20 [i_0 + 3] [i_0] [i_0 + 3]) : (arr_21 [i_9 - 2] [i_0 + 3] [1] [1] [7] [i_0])));
            var_27 = (((var_8 != (arr_24 [i_0] [i_0] [i_9] [i_0 - 1] [i_0]))));
        }
        /* vectorizable */
        for (int i_10 = 3; i_10 < 10;i_10 += 1) /* same iter space */
        {
            var_28 = (((arr_5 [i_10 + 1]) ? (arr_5 [i_10 - 3]) : (arr_5 [i_10 - 3])));
            arr_31 [i_0 - 1] [8] &= 110;
        }
        var_29 = (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_11 = 3; i_11 < 17;i_11 += 1)
    {
        var_30 = var_0;
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 19;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 17;i_14 += 1)
                {
                    {
                        var_31 = ((~(min(var_6, (arr_32 [i_14 - 2] [i_13 + 1])))));
                        var_32 = 55;
                    }
                }
            }
        }
        arr_44 [i_11 + 2] [i_11 + 3] = (((arr_39 [7]) > ((((arr_32 [i_11 + 2] [i_11 + 2]) ? (arr_32 [i_11 + 4] [11]) : (arr_32 [i_11 + 1] [i_11]))))));
        arr_45 [i_11] = ((((65535 != 29465) < (-2017068327 && 1049446072))));
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 18;i_15 += 1)
    {
        for (int i_16 = 1; i_16 < 14;i_16 += 1)
        {
            {
                arr_52 [i_15] = 12233316202584918242;
                var_33 = (((min((arr_48 [6] [i_15] [i_16 - 1]), (arr_36 [i_15] [i_15]))) ^ 3245521223));
                arr_53 [i_16] [16] &= ((+(((arr_40 [i_15] [i_16] [i_15] [i_15] [i_15] [0]) / (var_3 <= var_0)))));
                var_34 = ((((((var_10 || (arr_41 [i_15]))) && (arr_42 [i_15] [i_15] [i_16 + 1] [i_15]))) && 1));
            }
        }
    }
    var_35 = var_6;
    var_36 = var_3;
    #pragma endscop
}
