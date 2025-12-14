/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 = (max(var_16, var_5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_17 -= (697813039 == 3597154256);
                        var_18 = (((arr_0 [i_1] [i_2 + 2]) ? var_6 : -2225616321977378589));
                    }
                }
            }

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_19 = (max(var_19, ((((arr_11 [i_4] [i_1] [6] [i_1]) + 697813039)))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 6;i_6 += 1)
                    {
                        {
                            var_20 = ((-(arr_13 [i_6 + 2] [i_0] [i_0] [i_4] [i_0] [i_4])));
                            var_21 = (var_4 && var_9);
                        }
                    }
                }
            }
            for (int i_7 = 2; i_7 < 7;i_7 += 1)
            {
                var_22 = 697813039;
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 7;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_23 = 697813039;
                            arr_26 [i_0] [i_0] [i_1] [i_1] [i_7] [5] [i_9] = (170706344 <= 63);
                            arr_27 [i_0] [0] [i_7] [i_7 - 1] [3] [3] [i_7] = (((arr_2 [i_0] [i_7 + 1]) != var_9));
                            var_24 = (arr_2 [i_7 + 1] [i_7 - 2]);
                        }
                    }
                }

                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    arr_30 [i_0] [i_0] [i_0] [i_7] [5] = ((!(~-64)));
                    arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = -697813039;
                    arr_32 [i_0] [i_7 + 1] [i_1] [i_0] = (arr_5 [i_0]);
                    var_25 += 3597154256;
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                {
                    var_26 = ((~(~-64)));
                    arr_36 [i_0] [i_1] [i_0] = -var_5;
                    var_27 &= ((3586 ? (arr_21 [i_7] [i_7 + 3] [i_7 + 2] [i_7 + 1]) : var_0));
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                {
                    arr_40 [i_1] [i_1] [i_7] [i_0] [3] [2] = ((0 / (arr_20 [i_0] [i_7 - 2] [i_7 + 3] [i_7 + 2])));
                    var_28 = ((((0 > (arr_16 [1] [i_0] [i_0] [i_7 + 2] [i_12])))));
                    arr_41 [i_0] [i_0] [i_1] [i_0] [i_12] = -72;
                    var_29 += (((arr_19 [i_0] [i_0] [i_7 + 2] [i_12]) ? var_5 : (arr_19 [i_0] [i_1] [i_7 - 1] [i_7])));
                }
            }
            var_30 += (8543 > 246);
        }
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 9;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    {
                        arr_51 [i_0] [i_0] [i_14] [i_0] = 697813039;

                        for (int i_16 = 0; i_16 < 0;i_16 += 1) /* same iter space */
                        {
                            var_31 = var_10;
                            var_32 -= 63;
                            var_33 ^= ((var_3 ? (arr_12 [i_0] [i_14 - 1] [i_16 + 1] [i_16]) : (((1 >> (-21088 + 21090))))));
                            var_34 = (min(var_34, (((3597154257 << ((((0 ? 4862920278073848265 : 38064214)) - 38064193)))))));
                            var_35 = (arr_13 [i_14] [i_0] [i_14] [7] [i_14 + 1] [i_14 - 1]);
                        }
                        for (int i_17 = 0; i_17 < 0;i_17 += 1) /* same iter space */
                        {
                            arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] = (~1);
                            var_36 = var_8;
                        }
                        for (int i_18 = 0; i_18 < 10;i_18 += 1)
                        {
                            var_37 ^= (((~21087) ? var_9 : (arr_29 [i_0] [i_14 - 1] [i_14 - 1] [i_14] [i_14 + 1] [i_15])));
                            var_38 = var_8;
                            var_39 = var_7;
                        }
                        var_40 = var_11;
                        var_41 = 1;
                    }
                }
            }
        }
    }
    var_42 = (max(var_42, ((min(1636132776, (((~-1932358069) ? (min(0, 363068627)) : var_2)))))));
    var_43 = (var_8 * var_6);
    #pragma endscop
}
