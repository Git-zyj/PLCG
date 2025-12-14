/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 -= 15883292095473046879;
                arr_4 [17] [i_1] = 771194373;

                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            var_17 *= var_6;
                            var_18 = (max(var_18, ((((-771194374 + 2147483647) >> (771194373 - 771194361))))));
                            var_19 -= (0 | (((arr_1 [i_0 - 4] [i_0]) ^ (arr_8 [i_0] [i_0] [i_0] [i_0 - 3] [i_0]))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_17 [i_3] [i_2] [i_2] [i_0] = (arr_1 [i_1] [i_5]);
                            var_20 ^= (((arr_3 [i_0 - 1]) ? var_1 : (((var_5 * (-1756 <= var_5))))));
                            var_21 -= (((arr_16 [i_2 - 1] [i_2] [i_1] [i_0 + 1] [i_0] [i_0] [i_0]) ^ (arr_0 [i_3])));
                        }
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            var_22 = (min(var_22, ((min(var_5, ((((arr_19 [i_6] [i_6] [i_6 - 1] [i_2] [i_0 - 4]) != var_15))))))));
                            arr_20 [i_0] [i_1] [i_3] &= ((-(min(((min(-771194373, 7))), (((arr_11 [i_0 - 1] [i_0 - 1] [i_2] [i_3]) + -4086079679130495709))))));
                        }
                        var_23 = (max(var_23, (((((min((arr_15 [16]), 0))) ? ((var_2 ? var_15 : -var_3)) : (((0 ? 771194373 : var_9))))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_24 |= (arr_6 [i_0] [i_1] [i_2 - 1] [2]);
                        var_25 -= (((((var_0 >> (16885006247463141227 - 16885006247463141215)))) < (~4294967279)));
                        var_26 = (((arr_8 [i_0] [i_0 + 1] [i_0 - 1] [i_2 + 1] [i_2 + 2]) >= (1756 <= 0)));
                        var_27 = (((!var_3) ? var_2 : var_1));
                    }
                    var_28 = arr_19 [i_0 - 4] [i_0 - 4] [i_1] [i_2 + 1] [i_2];
                }
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    arr_25 [i_0] [i_0] [i_8] [i_0] = ((max(var_0, (arr_15 [i_0 + 1]))));
                    var_29 = (((arr_10 [i_0] [i_1] [i_8]) != -510634746310507340));
                    var_30 = (arr_0 [i_0]);
                }
                for (int i_9 = 1; i_9 < 20;i_9 += 1) /* same iter space */
                {
                    var_31 = (max(var_31, (106 <= var_4)));
                    arr_29 [i_0] [i_1] [i_9] [i_0] |= 60;
                    var_32 -= var_1;

                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {

                        for (int i_11 = 4; i_11 < 20;i_11 += 1)
                        {
                            var_33 = (max(var_33, (arr_26 [i_1] [i_10])));
                            arr_35 [i_0] [i_1] [i_9] [i_10] [i_1] = (var_9 - var_2);
                            var_34 = var_2;
                        }
                        arr_36 [i_0] [i_10] [i_9] = (arr_0 [i_9]);
                        var_35 = (((var_11 ? (var_0 ^ var_6) : (min(76, var_15)))));
                    }
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        var_36 = (max(7, 10228626632290612475));
                        arr_41 [i_1] [i_9] = (max((max((arr_32 [i_0] [i_1] [i_1] [i_0]), (arr_21 [i_0 - 4] [i_12] [i_9]))), (((14 < (arr_11 [i_1] [i_1] [i_1] [i_12]))))));
                        var_37 = (arr_6 [i_12] [i_9 - 1] [i_1] [i_12]);
                    }
                    /* vectorizable */
                    for (int i_13 = 1; i_13 < 22;i_13 += 1)
                    {
                        arr_44 [i_1] [i_1] = (arr_18 [i_0] [8] [8] [i_13] [8] [i_1] [i_0]);
                        var_38 += (arr_7 [i_13 + 1]);
                        arr_45 [i_0] [i_0] = (~1027580917);
                    }
                }
                for (int i_14 = 1; i_14 < 20;i_14 += 1) /* same iter space */
                {
                    arr_49 [i_14] [i_14] = (var_8 > (arr_12 [i_0] [i_14] [i_0 - 1] [i_14] [i_0]));
                    arr_50 [i_14] = arr_31 [i_1] [i_14 + 2] [i_14 - 1] [i_1];
                    var_39 = 3440220159;
                }
                var_40 ^= 12304604016453880613;
            }
        }
    }
    var_41 = var_10;
    /* LoopNest 2 */
    for (int i_15 = 1; i_15 < 20;i_15 += 1)
    {
        for (int i_16 = 2; i_16 < 21;i_16 += 1)
        {
            {
                var_42 = ((+((((arr_11 [i_15 + 1] [14] [i_16 - 2] [i_16]) && (arr_14 [i_16] [i_16] [i_15 + 1] [i_16] [i_15]))))));
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 22;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 0;i_18 += 1)
                    {
                        {
                            arr_61 [i_18] [i_17] [i_17] [i_16 - 1] [i_15] = var_13;
                            arr_62 [i_15] [i_18] [i_18] [i_18] = 6825;
                        }
                    }
                }
                arr_63 [i_15] [i_16] = ((((arr_40 [i_15 + 1] [i_15] [i_16 + 1]) / (arr_30 [i_15] [i_15] [i_15 + 1] [i_15] [i_15 - 1]))));
                arr_64 [i_16] = 510634746310507340;
                var_43 = -var_15;
            }
        }
    }
    var_44 = var_15;
    #pragma endscop
}
