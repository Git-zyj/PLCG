/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((max(4224113405, 4224113389))) ? ((65535 ? 4224113389 : var_2)) : (var_4 + 10217))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_12 = ((min((((arr_2 [i_0]) ? var_4 : var_6)), ((min((arr_0 [i_0] [i_0]), var_6))))));
                arr_6 [i_0] &= ((max(1, (max(var_2, 70853877)))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {

                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] = 4224113389;
                        var_13 = ((var_9 ? -21614 : (arr_9 [i_1] [i_1] [i_1 - 1])));
                        arr_14 [i_0] [i_1] [i_1] [i_3] = (arr_2 [i_1 - 1]);
                    }
                    for (int i_4 = 1; i_4 < 7;i_4 += 1)
                    {
                        var_14 += 128;

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_22 [i_0] [i_0] [i_1] [i_0] [i_0] = -6972543299670021967;
                            var_15 = (min(var_15, (((32512 ? (arr_2 [i_1]) : 8334072140913425665)))));
                            var_16 = 1;
                        }
                        for (int i_6 = 4; i_6 < 7;i_6 += 1)
                        {
                            arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] = ((44080 ? 27293 : 21614));
                            arr_26 [i_1] = 16744448;
                        }
                        var_17 += (23613 || var_2);
                        var_18 = (min(var_18, (((var_1 ? -27297 : 14747)))));
                        arr_27 [i_4] [i_1] [i_1] [i_1] [i_0] = -10218;
                    }
                    arr_28 [i_1] [i_1] [i_2] = (((arr_11 [i_1 + 2] [i_0] [i_1] [i_0] [i_0]) ? 21839 : 4294901760));
                    var_19 = 255;
                }
                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    var_20 *= (min(((((var_3 ? 4224113416 : -1461708904)) & 70853876)), (arr_10 [i_0] [i_1 + 2] [i_7 - 1] [i_0] [i_1 + 2] [i_1 + 2])));
                    var_21 = 4999866612982855143;
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                arr_39 [i_0] [i_8] [i_1] [i_7] [i_1] [i_0] [i_0] = (min((min(-913163067, 70853871)), ((max(240, (arr_33 [i_0] [i_1] [i_8 + 2] [i_8]))))));
                                arr_40 [i_0] [i_0] [i_0] [i_8 - 1] [10] &= 44080;
                                arr_41 [i_1] [i_9] [i_0] [i_7] [i_0] [i_1] = (max((arr_20 [i_7 + 1] [i_1] [i_1] [i_1] [i_1]), (((4224113405 || (arr_20 [i_7 - 1] [i_1] [i_1] [i_7] [i_1]))))));
                                arr_42 [i_0] [i_1] [i_1] [i_7] [i_1] [i_1] [i_9] = (max(250, 2181431069507584));
                                var_22 ^= ((((max((arr_21 [i_8 + 1] [i_8 + 2] [i_0]), 8))) ? (arr_21 [i_8 + 2] [i_8 + 2] [i_0]) : ((((arr_21 [i_8 + 2] [i_8 + 2] [i_0]) == (arr_11 [i_1 - 1] [i_7 - 1] [i_0] [i_7] [i_7]))))));
                            }
                        }
                    }
                    var_23 = max(((4294901769 ? (arr_38 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_1 - 1]) : 126705829213468958)), (((arr_29 [i_1 + 2] [i_7 + 1] [i_7 + 1] [i_7 - 1]) % var_1)));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        arr_45 [i_10] = (536838144 ? (((536838170 ? 30 : 58))) : 9099321384315223740);
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                {
                    var_24 = (max(var_24, (((var_8 ? 1436 : 0)))));
                    arr_51 [i_10] [i_10] [i_10] |= (var_3 >= 18446744073709551612);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 2; i_13 < 14;i_13 += 1)
    {
        arr_55 [i_13] = (((2410 ? (arr_53 [i_13]) : -28)));
        arr_56 [i_13] = 9099321384315223733;
    }
    #pragma endscop
}
