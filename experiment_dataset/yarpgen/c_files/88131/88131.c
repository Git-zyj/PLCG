/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = (min(var_13, ((((~4169933858) - (((max(var_9, (arr_3 [16] [i_0 + 3] [16]))))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        arr_11 [8] [i_1] [i_2] [i_3] [i_0] = (((arr_8 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1]) - var_10));
                        var_14 = ((!var_11) ? var_3 : (arr_6 [i_0 + 2] [i_1 - 3]));
                        var_15 *= ((~(arr_4 [i_3])));
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        var_16 *= ((-(arr_9 [i_4] [i_1 - 3])));
                        var_17 = (min(var_17, (~var_8)));
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0 + 3] [i_0] [i_0] [11] [i_0] = ((!(arr_2 [i_1 - 2] [i_1 - 2])));
                        var_18 ^= var_9;
                        var_19 = (arr_4 [i_0]);

                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            var_20 *= (arr_13 [i_5] [i_5]);
                            arr_20 [i_0] [i_0 - 1] [i_0] = ((!(arr_5 [i_0 + 3] [i_0 - 1])));
                            var_21 = ((var_2 != (arr_10 [i_1] [i_1 + 4] [i_1] [i_1 - 1] [i_1])));
                            var_22 |= var_12;
                        }
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            arr_25 [i_0] [6] [i_2] [i_5] [i_5] |= (arr_13 [i_5] [i_2]);
                            var_23 += (arr_1 [i_0 + 2]);
                        }
                        for (int i_8 = 3; i_8 < 16;i_8 += 1)
                        {
                            var_24 ^= ((-(((var_8 == (arr_19 [2] [i_2]))))));
                            var_25 -= ((-var_6 ? -2059133758307232637 : ((((!(arr_2 [14] [i_5])))))));
                        }
                    }
                    var_26 = (arr_27 [i_1] [i_2] [i_1] [i_1] [i_0]);
                    arr_30 [i_0] [i_0] = ((!((((arr_13 [i_0] [i_0]) ? (arr_19 [4] [i_1]) : var_7)))));
                    var_27 = -15287;
                }
            }
        }
    }

    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        var_28 &= (((((arr_1 [i_9]) ? (arr_23 [i_9] [i_9] [i_9] [0] [i_9] [6]) : (max(var_12, 0)))) == ((((((min(17, 15269))) > (arr_12 [4] [i_9] [i_9] [i_9] [i_9])))))));
        var_29 = (((((((arr_18 [i_9]) < (arr_0 [i_9]))))) <= ((min(var_9, var_7)))));
        var_30 = (((((((arr_23 [3] [i_9] [i_9] [i_9] [3] [i_9]) ? var_6 : var_4)))) ? ((((((min((arr_23 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]), (arr_27 [i_9] [i_9] [i_9] [i_9] [i_9]))))) + (var_3 + var_1)))) : -0));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_31 = ((-1 ? 13931 : 17));
        arr_37 [i_10] [i_10] = ((!(((-(max(-3026885597682241136, -22)))))));
    }
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        var_32 ^= ((-var_6 * (((var_2 > (arr_6 [i_11] [5]))))));
        var_33 = ((-((((arr_13 [i_11] [i_11]) != (arr_13 [i_11] [i_11]))))));

        /* vectorizable */
        for (int i_12 = 2; i_12 < 9;i_12 += 1)
        {
            var_34 = ((var_0 ? (arr_22 [i_11] [i_11] [i_11] [1] [i_11]) : var_10));
            var_35 = (max(var_35, ((var_7 ? 3026885597682241136 : (arr_0 [i_12])))));
        }
        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            arr_47 [i_11] = var_5;
            var_36 = (var_2 == var_7);
            arr_48 [i_11] = ((((min((arr_46 [i_11]), ((0 ? var_5 : 13931))))) | (min(var_0, (arr_45 [i_13])))));
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            var_37 = arr_18 [i_16];
                            var_38 = (max(var_38, ((((~13915) / (((((arr_26 [i_14] [i_14] [i_11] [i_14]) % (arr_22 [i_13] [i_13] [i_13] [i_13] [i_13]))) | (((var_6 ? (arr_12 [12] [15] [15] [i_11] [i_11]) : -5685))))))))));
                        }
                    }
                }
            }
        }
    }
    for (int i_17 = 0; i_17 < 12;i_17 += 1)
    {
        var_39 = var_7;
        var_40 = ((((((-15270 ? -1 : var_1)))) ? (min(((min(51601, 17))), -6021)) : 32767));
        var_41 = (max(var_41, var_3));

        for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
        {
            var_42 = (max(var_42, (((((var_6 ? (arr_51 [i_17] [i_17] [i_17] [i_18] [i_18]) : var_1)) != (min(var_8, (arr_51 [i_17] [i_17] [3] [i_18] [i_18]))))))));

            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                var_43 = (min(((((arr_54 [i_19] [i_18] [i_19] [i_17] [i_17] [i_18]) != (arr_54 [i_17] [i_17] [i_17] [i_18] [i_18] [i_19])))), (min((arr_54 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]), (arr_54 [i_17] [i_17] [i_17] [i_18] [i_17] [i_19])))));
                var_44 += (arr_19 [i_17] [i_17]);
            }
            var_45 = -1;
        }
        for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
        {
            var_46 ^= ((!(((var_12 ? ((max(var_0, (arr_14 [i_17] [4] [i_17] [i_17] [i_20])))) : (7 == var_1))))));
            var_47 = ((!(((28186 ? -7244093254921296676 : 109)))));
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 12;i_21 += 1)
            {
                for (int i_22 = 1; i_22 < 1;i_22 += 1)
                {
                    {
                        var_48 = (max(var_48, (61 * 54525)));
                        var_49 = var_1;
                        var_50 = (((arr_4 [i_22]) == (13904 + 51631)));
                        var_51 = (min(var_51, var_10));
                    }
                }
            }
            var_52 = (max(var_52, var_12));
        }
    }
    var_53 = (var_10 == var_8);
    var_54 = (max(var_54, var_0));
    #pragma endscop
}
