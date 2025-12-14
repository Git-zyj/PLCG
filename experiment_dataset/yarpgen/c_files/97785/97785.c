/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_2 ^ (max(var_12, ((-113 ? var_3 : var_9))))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_14 = (min((arr_0 [i_0]), (arr_0 [i_0])));
        arr_2 [i_0] = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 = (arr_0 [i_0]);
                    var_16 = ((var_0 ? 17 : (arr_4 [i_0] [i_1] [i_2])));

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
                        {
                            arr_13 [i_0] [i_1] [i_0] = -3580794658485090369;
                            var_17 = ((((((arr_1 [i_0]) ? 7388790120625525016 : (arr_8 [i_0] [i_0] [i_3 + 2] [1]))) % (((((arr_7 [i_0] [i_0 + 1] [i_0]) || (arr_5 [i_0] [i_3 + 4] [i_4]))))))));
                            var_18 = (min(((((258048 < var_2) >> (402653184 - 402653163)))), ((6905 ? (arr_0 [i_0]) : (min(var_0, (arr_9 [9] [i_0] [i_0] [i_1])))))));
                            arr_14 [i_0] [i_1] [i_0] [i_3 - 1] [i_3] [i_0] [i_4] = var_11;
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_1] [i_1] [i_1] [i_3] [i_1] [i_5] = (!-var_2);
                            var_19 = (((arr_9 [i_2 - 2] [i_0] [i_5 + 2] [i_3 + 2]) ? 2251799813685247 : (arr_12 [i_0 + 3] [i_5 + 1] [i_3 + 3] [i_3] [i_0 + 2])));
                        }
                        for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            var_20 = (max(-719675401, (arr_7 [6] [6] [i_0])));
                            var_21 = (arr_1 [i_0]);
                        }

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_22 = (arr_20 [i_0] [i_0 + 2] [7] [i_0] [i_0] [i_0]);
                            var_23 = (((arr_9 [9] [i_0] [i_0] [i_3 + 4]) ? (((arr_19 [i_0] [i_0] [i_0]) >> (var_3 - 5963280944108275111))) : (0 || var_3)));
                            arr_25 [i_0] [i_0] [i_2] [i_0] [i_7] = -var_12;
                        }
                    }
                    for (int i_8 = 1; i_8 < 12;i_8 += 1)
                    {
                        var_24 -= (max(-49, ((((arr_0 [i_2]) || (arr_0 [i_2]))))));
                        var_25 = (((arr_21 [i_0]) ^ ((-(arr_21 [i_0])))));
                        var_26 = ((((~13084725493128926815) ? 1 : (arr_15 [i_0] [10] [i_2] [i_2] [i_0]))));

                        for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
                        {
                            arr_31 [i_0] [i_1] [i_2] [i_0] [i_9] = (((((var_1 ? (arr_20 [8] [i_0] [i_0 + 1] [i_0 + 2] [i_0] [i_0 - 1]) : (arr_20 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 2])))) - (max((((1 || (arr_28 [8] [2] [i_2 - 2] [i_8] [8])))), (arr_5 [i_1] [2] [i_8 + 1])))));
                            var_27 = -2025207750;
                        }
                        for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                        {
                            var_28 = 17;
                            arr_36 [i_8] [i_0] [i_0] [1] = ((((max((arr_1 [i_0]), (arr_32 [i_0] [i_0] [i_0] [i_1] [i_8 - 1])))) % (min(1, (arr_35 [i_0] [i_2] [i_2] [i_0] [i_8])))));
                            arr_37 [i_10] [i_0] [i_2] [i_0] [i_0] = 2388049953443205629;
                        }
                    }
                }
            }
        }
    }
    var_29 = (((((max(365197046, var_5)))) ? (max(var_11, var_0)) : (((~1) * ((9223372036854775807 ? 2008014006 : var_11))))));

    /* vectorizable */
    for (int i_11 = 1; i_11 < 22;i_11 += 1)
    {
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 23;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    {

                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            arr_50 [i_11] [i_11] [i_12] [i_13] [i_11] [i_15] [i_15] = ((!(arr_39 [i_11 + 2])));
                            arr_51 [i_11 - 1] [i_11] [i_13 - 2] [i_11] [i_15] = (arr_38 [i_11 - 1]);
                        }
                        for (int i_16 = 2; i_16 < 23;i_16 += 1)
                        {
                            var_30 = (max(var_30, ((((arr_39 [i_11 + 1]) ? (arr_46 [i_11] [20] [i_14]) : (arr_49 [i_11 + 2] [i_13 - 3] [i_14]))))));
                            var_31 = ((var_4 % (var_0 % var_3)));
                        }

                        for (int i_17 = 1; i_17 < 21;i_17 += 1)
                        {
                            var_32 = ((arr_58 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_13 - 1] [i_13 - 3] [i_13 - 3] [i_17 + 2]) ? var_8 : ((1785162847870330978 ? (arr_44 [9]) : var_0)));
                            var_33 ^= (arr_39 [i_11 + 2]);
                            arr_60 [i_11] [i_11] [i_13] [i_13] [i_17] = (!1);
                            arr_61 [i_11] = (((arr_55 [i_14]) / (arr_44 [i_14])));
                        }
                        for (int i_18 = 0; i_18 < 24;i_18 += 1)
                        {
                            var_34 = var_5;
                            arr_64 [i_18] [i_11] [i_13 - 2] [i_11] [i_11] = 0;
                        }
                        for (int i_19 = 0; i_19 < 24;i_19 += 1)
                        {
                            var_35 = (((arr_47 [i_11 - 1] [i_11 + 1] [i_13 - 3] [i_13] [22] [i_13 + 1]) == (~90)));
                            arr_67 [i_14] [i_14] [i_11] [i_11] [i_12] [i_11] = ((7 <= (arr_42 [i_11] [i_11])));
                        }
                        arr_68 [i_11] [i_12] [i_11] = ((-(arr_62 [i_11])));
                        var_36 = (201 >> 0);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_20 = 0; i_20 < 24;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 24;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 24;i_22 += 1)
                {
                    {
                        var_37 = (40442 || 1);
                        var_38 = (((arr_45 [i_11 + 2]) <= 1));
                        var_39 = 0;
                    }
                }
            }
        }
    }
    #pragma endscop
}
