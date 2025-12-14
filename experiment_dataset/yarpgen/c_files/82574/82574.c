/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (-32763 % 42);
    var_17 = (min((min(65514, (23 ^ var_2))), ((((min(65513, 32767))) ? var_11 : (var_10 ^ var_2)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_18 = ((var_2 ? (arr_2 [i_1]) : (min((arr_6 [i_0] [i_1] [12]), var_2))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 4; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_19 -= -var_4;
                            arr_15 [0] [14] [i_4] [i_3] [i_4] = ((!(arr_3 [i_3 - 2])));
                            var_20 = (min(var_20, ((((arr_14 [i_1] [i_1]) ? var_6 : (var_8 || 3899295664))))));
                            var_21 = ((35888059530608640 == (arr_12 [i_1] [i_1] [i_2] [i_2] [i_2])));
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_22 = (max(var_22, -var_7));
                        var_23 = (-32767 - 1);
                    }

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_24 += ((var_15 ? (1320984387 <= var_12) : (~21)));
                        var_25 = (min(var_25, var_6));
                        arr_25 [13] [i_1] [i_2] [i_5] [i_1] [i_7] [i_7] = ((28113 ? (arr_22 [i_2] [i_2]) : var_9));
                    }
                }
                for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                {
                    arr_28 [1] [i_1] [11] [i_8] [i_8] = 1;
                    arr_29 [i_1] = var_3;
                }
                arr_30 [i_0] [14] [i_2] [i_1] = (!19636);
                var_26 = (arr_5 [i_2]);
            }
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                arr_34 [i_0] [i_9] = ((((max(42, 12889))) <= (arr_23 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0])));
                var_27 = ((~(arr_4 [i_0] [i_0])));
                arr_35 [i_9] [1] [i_9] = -1135253622;

                /* vectorizable */
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    var_28 ^= ((var_7 ? (arr_33 [i_0] [15] [i_0] [i_0]) : (arr_33 [14] [i_1] [i_9] [14])));
                    arr_40 [i_0] [i_0] [i_9] [i_10] = ((-(arr_19 [i_1])));
                    arr_41 [i_0] [i_0] [i_9] [i_9] = var_5;
                    var_29 = (((1761851415 <= 4169) * ((var_0 ? var_14 : var_10))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 18;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    {
                        var_30 ^= (((((var_10 ? (1320984387 + 24) : ((-429549995 ? 3899295664 : 429549999))))) ? (((var_7 - var_3) + var_2)) : ((var_11 ? (((max(var_11, var_12)))) : (((arr_0 [i_11] [8]) - var_15))))));

                        for (int i_14 = 0; i_14 < 19;i_14 += 1)
                        {
                            var_31 = ((1 || (var_15 < 3722412486)));
                            var_32 = (arr_3 [i_0]);
                        }
                        for (int i_15 = 0; i_15 < 19;i_15 += 1)
                        {
                            var_33 = (44 >= 5942);
                            arr_55 [i_0] = ((~(var_4 == var_12)));
                            var_34 = (((((min(var_8, var_4)))) ? (var_0 + var_4) : ((((!((min((arr_33 [i_0] [i_11] [0] [i_13]), var_1)))))))));
                        }
                        arr_56 [i_0] [i_13] = ((((max(var_12, (arr_21 [8] [8] [i_12 + 1] [10] [i_12])))) | (((!(arr_53 [i_0] [i_0] [i_12] [i_13] [i_12 + 1] [i_0]))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_16 = 1; i_16 < 19;i_16 += 1)
    {
        arr_60 [i_16 + 3] = (1 & (((arr_59 [14]) + 17925492906829110650)));
        var_35 = (min(var_35, (((-var_14 == (arr_58 [i_16 - 1]))))));
    }
    var_36 = (((((max(var_11, 4294967270))) ? 9956 : ((379285510 ? 2169258443 : var_8)))));
    #pragma endscop
}
