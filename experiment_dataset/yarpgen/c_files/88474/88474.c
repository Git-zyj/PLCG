/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = arr_1 [i_0] [i_0];
                    var_20 = (max(var_20, (25953 == 9956675299473012771)));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_9 [i_0] = (min(-9073, 9060));
                        var_21 = (arr_5 [i_0 + 2]);

                        for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                        {
                            var_22 = (var_5 % (((arr_10 [i_0 + 4] [i_0 + 4] [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0 + 1]) ? (arr_1 [i_0] [i_0]) : (arr_4 [i_0] [i_3] [i_0]))));
                            var_23 = (max(var_23, (((max((arr_1 [i_1] [i_1]), (arr_2 [i_1] [i_1])))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            var_24 = (!var_13);
                            var_25 ^= var_8;
                            arr_14 [i_2] [i_2] [i_2] [i_2] [i_0] [3] = ((arr_8 [i_0 + 3] [i_0 + 2] [i_0] [i_0]) ? (arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 3] [i_0]) : (arr_8 [i_0 + 4] [9] [i_0] [i_0]));
                            var_26 = var_8;
                            var_27 ^= var_3;
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [4] [4] [10] [4] [i_6] [i_0] = arr_0 [i_0] [i_3];
                            var_28 &= var_8;
                            var_29 = var_17;
                        }
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_22 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = -var_14;
                        var_30 = 7980141334961569521;

                        for (int i_8 = 1; i_8 < 11;i_8 += 1)
                        {
                            var_31 = (min((9047 % var_17), ((~(min((arr_0 [i_0] [i_7]), var_12))))));
                            var_32 &= (((((((min((arr_16 [i_8 - 1] [i_1] [0] [i_1] [i_0 + 3]), (arr_23 [i_0] [i_1] [i_2] [i_7] [i_1])))) < var_10))) != (((((!(arr_3 [i_1])))) & (arr_12 [i_8] [i_7] [i_1] [i_1] [0])))));
                            var_33 = (max((-9094 + 18446744073709551615), ((((arr_24 [i_0] [i_0 + 3] [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0]) || 9067)))));
                        }
                    }
                    for (int i_9 = 3; i_9 < 12;i_9 += 1)
                    {
                        var_34 = ((((-4960119990511322207 < (((max(var_1, var_7)))))) ? (arr_24 [i_0] [6] [i_0] [i_0] [i_9] [9] [i_0]) : var_18));
                        var_35 += (6491402802436574452 / -9068);
                        arr_27 [i_9] [i_1] [i_1] [i_1] [i_0] &= (var_1 == var_10);
                        var_36 *= (arr_8 [i_1] [i_2] [i_1] [i_1]);
                    }
                    for (int i_10 = 2; i_10 < 12;i_10 += 1)
                    {
                        arr_30 [i_10] [i_2] [i_0] [i_1] [i_0] = ((((!(arr_21 [i_0] [i_1] [i_2] [i_0])))));
                        var_37 = (arr_21 [i_0] [8] [i_2] [i_0]);

                        /* vectorizable */
                        for (int i_11 = 1; i_11 < 13;i_11 += 1)
                        {
                            var_38 &= var_15;
                            var_39 = (((((7918 == (arr_11 [i_0] [i_0]))))) % -7508155561377279960);
                            var_40 = ((13984 ? (arr_4 [i_0] [i_0 + 4] [i_0]) : (arr_23 [i_0 + 3] [i_0] [10] [i_0 + 4] [i_0 + 3])));
                        }
                        arr_33 [i_0] [i_2] [i_1] [i_0] = (max((((((min(var_5, var_2))) / (var_7 * var_7)))), (((arr_5 [i_10]) / ((-7918 ? -21960 : 5260292919733627617))))));
                        var_41 = (max(var_41, -5026));
                    }
                    var_42 &= var_18;
                }
            }
        }
        var_43 = -7918;
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 3; i_14 < 11;i_14 += 1)
                {
                    {
                        arr_44 [i_12] [i_0] = (min(-var_17, 8411640638117584803));
                        var_44 = (((arr_3 [i_0]) ? ((max(((max(var_17, var_1))), (~-5028)))) : (min((var_17 && var_1), (min(7297121821063264317, (arr_24 [i_0] [i_0 + 4] [12] [12] [i_0] [12] [i_0])))))));
                        arr_45 [i_0] [9] = min((min(-32137, (min((arr_4 [i_0] [i_12] [i_0]), 9073)))), ((((arr_13 [i_0] [i_0 + 4] [i_13] [i_0] [i_13]) != (arr_41 [i_14 - 2] [i_0])))));
                        arr_46 [i_0] [i_0] [i_12] [i_12] [i_13] [i_14] = (max((~13), ((max(var_15, -7524723647212018456)))));
                        var_45 ^= 7926;
                    }
                }
            }
        }
        var_46 = (min((var_13 - var_0), (((-(arr_7 [i_0] [i_0 + 4] [i_0] [i_0 + 1] [i_0 + 4]))))));
        var_47 = (min(19184, -22786));
    }
    for (int i_15 = 1; i_15 < 10;i_15 += 1) /* same iter space */
    {
        arr_51 [4] [i_15] = (min((min((arr_42 [i_15] [i_15] [i_15 + 1] [i_15 + 3]), (arr_42 [i_15 - 1] [i_15 + 4] [i_15] [i_15 + 2]))), (arr_42 [i_15 - 1] [i_15] [i_15 - 1] [i_15 + 1])));
        arr_52 [i_15] [i_15] = var_5;
    }
    var_48 = -9002912222987140734;
    var_49 = (max(var_0, var_3));
    var_50 = max((min(var_6, -var_10)), (((var_1 ? ((max(var_8, -28221))) : var_8))));
    #pragma endscop
}
