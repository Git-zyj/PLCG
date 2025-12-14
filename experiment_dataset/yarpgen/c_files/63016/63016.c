/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((+(((!(((9223372036854775807 ? (-9223372036854775807 - 1) : var_8))))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    {
                        var_11 = 576263381;

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_12 = (arr_3 [i_3 - 2] [i_4]);
                            arr_11 [i_0] [i_1] [i_1] [8] [i_1] [i_2] [i_4] = (var_5 ? (var_6 == 89) : -9);
                        }
                        var_13 = (var_4 & 19165);
                        var_14 = ((min(((131 ? 576263381 : 19947)), (0 | var_0))));
                    }
                }
            }
            var_15 ^= (((((arr_2 [i_0]) ? (max(-1946171307034849445, var_2)) : (((-8260 ? (arr_5 [i_0] [i_1] [i_1] [i_1]) : var_5))))) % (arr_8 [i_0] [6] [i_0] [i_1])));
            var_16 &= ((max(var_5, 43142)));
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                arr_17 [i_0] [i_0] [i_0] = (+-8907440540024035623);
                arr_18 [i_0] = -3718703915;

                for (int i_7 = 3; i_7 < 21;i_7 += 1)
                {
                    arr_23 [i_0] [i_0] = (arr_9 [i_6] [i_6] [i_6] [i_7 - 3] [i_7] [i_7 - 3] [i_7]);
                    arr_24 [i_0] [i_0] [i_0] [i_0] [8] [i_7] = var_9;
                    var_17 = (((~var_7) ? (arr_5 [i_7] [i_7 - 3] [i_6] [i_6]) : ((-(arr_5 [i_7] [i_7 - 2] [i_7] [i_0])))));
                    arr_25 [i_0] [i_0] [18] [i_6] [i_7] &= var_4;
                }
                for (int i_8 = 4; i_8 < 21;i_8 += 1) /* same iter space */
                {
                    arr_30 [i_0] [i_5] [17] [13] = (-9223372036854775807 - 1);

                    for (int i_9 = 1; i_9 < 21;i_9 += 1)
                    {
                        var_18 = (min(var_18, ((((((arr_32 [i_0] [i_0] [i_0] [i_5] [i_9] [i_0] [i_5]) + ((-(arr_10 [i_0] [i_5] [i_6] [i_8] [i_9]))))) ^ ((((arr_5 [i_9] [i_6] [i_5] [i_0]) || (~-9)))))))));
                        var_19 += (((0 || 96) >= 1));
                        arr_34 [i_0] = -1334362165;
                    }
                }
                for (int i_10 = 4; i_10 < 21;i_10 += 1) /* same iter space */
                {
                    arr_39 [0] [0] [20] [i_10] = 0;

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_20 = (max((var_4 / 8), ((117 >> (arr_21 [i_10 - 4])))));
                        var_21 = var_7;
                    }
                    for (int i_12 = 4; i_12 < 21;i_12 += 1) /* same iter space */
                    {
                        arr_44 [i_12] [i_10] [i_0] [i_0] [i_0] [i_5] [i_0] = (max(((max((arr_5 [i_12 - 4] [i_10 + 1] [i_10 + 1] [i_0]), (arr_5 [i_12 - 1] [i_10 - 4] [i_10 - 4] [i_10])))), (((arr_5 [i_12 - 3] [i_10 - 1] [i_12] [i_10]) & (arr_5 [i_12 - 4] [i_10 - 4] [i_6] [i_10])))));
                        arr_45 [i_0] [i_0] [i_10 - 2] [i_0] = (max(65535, (~var_8)));
                        arr_46 [i_0] [i_10 - 1] = max((~1), (((arr_6 [i_0]) ? var_4 : (min(var_6, var_0)))));
                    }
                    /* vectorizable */
                    for (int i_13 = 4; i_13 < 21;i_13 += 1) /* same iter space */
                    {
                        var_22 = (arr_26 [i_0] [i_0] [i_0] [i_0] [0] [i_0]);
                        arr_51 [i_0] [i_0] [i_0] = (~var_8);
                    }
                    arr_52 [i_0] [i_0] [i_6] [i_10] [i_6] [i_6] = (arr_16 [i_0] [20] [i_0]);
                }
            }
            for (int i_14 = 2; i_14 < 21;i_14 += 1)
            {
                arr_56 [i_14] [i_14] [i_14] = (max((0 * 1334362164), 50));
                var_23 = (max((~36575), (((arr_53 [i_14 - 1] [i_14 + 1] [i_14 + 1]) ? -4 : (arr_53 [i_14 - 2] [i_14 - 2] [i_14 - 1])))));
                arr_57 [i_14] [i_5] [20] [i_0] = ((((var_4 == (~var_7)))));
            }
            arr_58 [i_0] [i_5] = (~((var_4 - (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]))));
            var_24 = ((min((arr_27 [i_0] [i_5] [i_0] [i_0] [i_0]), var_6)));
        }
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {

            for (int i_16 = 0; i_16 < 22;i_16 += 1)
            {
                arr_64 [i_0] [i_0] [i_0] [i_0] = (~(((arr_41 [i_0] [i_15] [i_15] [i_16] [i_16]) ? (arr_5 [15] [i_0] [17] [i_16]) : (arr_41 [i_0] [i_0] [i_15] [i_15] [i_16]))));
                arr_65 [i_0] = -9567;
                arr_66 [10] [i_15] [i_15] [i_15] = ((~(max(((((arr_1 [i_16]) <= 9223372036854775807))), var_8))));
            }
            /* vectorizable */
            for (int i_17 = 0; i_17 < 22;i_17 += 1)
            {
                var_25 = (max(var_25, (((31011 ? (arr_37 [i_0] [i_15] [i_15] [i_17]) : var_1)))));
                var_26 &= ((99 - (arr_33 [i_0] [i_0] [i_15] [i_15] [i_17])));
            }
            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                arr_72 [i_15] [i_15] [i_15] [i_18] &= 182;
                arr_73 [i_18] [i_15] [i_0] = ((!((((((var_0 + 2147483647) << (((-9 + 39) - 30)))) - 53)))));
                var_27 = ((var_1 ? (arr_2 [i_15]) : (arr_2 [i_0])));
                var_28 = ((-(((arr_59 [i_0]) * (arr_59 [i_0])))));
            }
            var_29 = (~var_4);
        }
        var_30 = (min(var_5, var_7));
        arr_74 [i_0] [i_0] = (max((((!(arr_2 [i_0])))), (~var_4)));
    }
    for (int i_19 = 0; i_19 < 12;i_19 += 1)
    {
        var_31 += (((((arr_31 [i_19] [i_19]) ? var_6 : var_2)) < (arr_36 [i_19] [i_19] [i_19] [i_19] [i_19])));
        var_32 = ((!((min(199, -72)))));
    }
    var_33 = (((-(var_6 + var_3))));
    #pragma endscop
}
