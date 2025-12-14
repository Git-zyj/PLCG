/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = ((min((((arr_2 [i_0]) ? (arr_7 [i_0] [i_0 + 4] [i_0]) : var_7)), ((max((arr_5 [i_0] [i_0]), (arr_0 [8])))))));
                    var_20 ^= ((var_12 ? (((arr_6 [i_2 + 2] [i_0 + 3] [7] [7]) ? (arr_7 [i_1] [i_2 + 1] [i_1]) : (arr_7 [14] [i_0] [i_0]))) : 31457280));
                    var_21 ^= (!var_13);
                }
            }
        }
    }
    var_22 = ((((((max(8456950914230976082, 1)) >> (var_10 + 803706688)))) ? ((var_12 ? ((var_3 ? var_17 : var_16)) : var_4)) : var_17));
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_23 = (min(((max((arr_13 [i_3 - 1]), (arr_13 [i_3 + 1])))), (max(var_8, (arr_13 [i_3 - 3])))));
                var_24 |= -9223372036854775793;
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {
        arr_18 [i_5 + 2] [i_5] |= 1;
        arr_19 [i_5] [i_5] = (arr_1 [i_5 + 1]);
        var_25 |= ((arr_9 [i_5 + 3]) ? (arr_12 [i_5 + 2] [i_5 + 1] [i_5]) : (arr_9 [i_5 + 2]));
        var_26 = (((-(arr_13 [1]))));
    }
    for (int i_6 = 1; i_6 < 14;i_6 += 1)
    {
        var_27 |= 1;
        var_28 = (!1418569648);
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        arr_25 [i_7] |= (((arr_12 [i_7] [i_7] [i_7]) ^ ((~(arr_12 [i_7] [i_7] [i_7])))));

        for (int i_8 = 1; i_8 < 12;i_8 += 1)
        {
            arr_28 [i_8] = (arr_3 [i_7] [i_8 - 1]);

            /* vectorizable */
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                {
                    var_29 = (((17034925228099051806 ^ var_1) ? (arr_8 [i_8]) : (((-567933496 ? (arr_31 [8] [8] [i_7]) : -5826912473143187191)))));

                    for (int i_11 = 1; i_11 < 10;i_11 += 1)
                    {
                        var_30 += (arr_38 [i_9]);
                        var_31 = (arr_29 [i_8] [i_8] [6]);
                    }
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        var_32 = (max(var_32, (((!(arr_10 [i_7]))))));
                        var_33 = var_13;
                    }
                    for (int i_13 = 3; i_13 < 13;i_13 += 1)
                    {
                        arr_47 [i_8] [i_7] [i_7] [i_10] [i_8] [i_8] [i_13] = (((((~0) + 2147483647)) << (((((arr_24 [i_8]) ^ (arr_21 [i_10]))) - 2071820948))));
                        var_34 = var_7;
                    }
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        var_35 = (max(var_35, (((var_6 ? (arr_39 [i_8 + 1] [i_8 - 1] [i_7]) : var_2)))));
                        arr_51 [i_7] [i_7] [i_8 - 1] [1] [i_9] [i_10] [i_8] = ((!((((arr_30 [i_8] [3] [3]) ? (arr_7 [i_8] [i_8] [i_14]) : var_16)))));
                    }
                }
                for (int i_15 = 0; i_15 < 14;i_15 += 1) /* same iter space */
                {
                    var_36 = (((~var_9) ? (arr_5 [i_8] [i_8]) : ((var_5 ? (arr_31 [i_7] [10] [i_15]) : var_8))));

                    for (int i_16 = 1; i_16 < 13;i_16 += 1)
                    {
                        arr_56 [i_7] [i_8] = -686887327;
                        var_37 = (var_14 < 9223372036854775788);
                        var_38 = (min(var_38, (((-(arr_36 [i_9] [i_8] [i_9] [i_16 - 1] [i_16] [i_8 + 2]))))));
                        var_39 += (((arr_41 [i_8 + 1] [i_8] [i_15] [i_16 + 1] [i_16 + 1]) ? (arr_33 [i_7] [i_8] [i_7] [6] [i_16 + 1] [i_9]) : (arr_11 [i_8 + 2] [i_8 + 1])));
                        var_40 = var_15;
                    }
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        var_41 *= 18434273337294038473;
                        var_42 ^= ((-(arr_3 [i_7] [i_8])));
                        var_43 = (min(var_43, (((!(var_14 == var_4))))));
                        var_44 = (arr_55 [i_8 + 2] [i_8] [i_8] [i_8 - 1] [i_8 + 1]);
                        arr_60 [i_7] [i_7] [i_8] [i_9] [i_9] [i_15] [i_17] = (((((var_7 ? (arr_37 [i_7] [i_9] [i_8] [i_17]) : (arr_50 [i_7] [i_17] [i_9] [i_15] [i_7] [i_8])))) ? (arr_6 [i_7] [i_7] [i_9] [i_15]) : var_18));
                    }
                    for (int i_18 = 0; i_18 < 14;i_18 += 1)
                    {
                        arr_63 [i_7] [7] [i_8] [i_9] [i_9] = (((var_13 ? 0 : 16777215)));
                        arr_64 [i_8] = arr_9 [i_8];
                        arr_65 [i_9] [i_9] [i_9] &= ((+((554677575 ? (-2147483647 - 1) : var_8))));
                    }
                }
                /* LoopNest 2 */
                for (int i_19 = 3; i_19 < 11;i_19 += 1)
                {
                    for (int i_20 = 2; i_20 < 13;i_20 += 1)
                    {
                        {
                            arr_70 [i_8] [i_19] [6] [i_8] [i_8] = (arr_50 [i_8 + 2] [i_19] [i_19 + 2] [i_20 - 2] [i_20 - 2] [i_8]);
                            var_45 *= (((arr_66 [i_7] [i_7] [i_9] [9] [i_20]) % (arr_3 [i_7] [i_8 + 2])));
                        }
                    }
                }
                var_46 = (min(var_46, var_11));
                var_47 -= ((-550890968 ^ (arr_21 [i_9])));
                var_48 = (~0);
            }
        }
        var_49 ^= 1;

        for (int i_21 = 1; i_21 < 1;i_21 += 1)
        {
            var_50 *= ((min((arr_58 [0] [i_21] [i_21 - 1] [0] [i_21 - 1]), (arr_58 [6] [6] [i_21 - 1] [i_21] [i_21 - 1]))));
            var_51 = (((((((((arr_36 [8] [i_21] [i_21] [i_7] [i_21] [i_7]) ? var_12 : 2147483633))) <= (((arr_8 [12]) ? -26455 : var_14))))) == ((max((arr_40 [i_7] [i_21 - 1] [i_7]), (arr_55 [i_21 - 1] [i_7] [i_21 - 1] [i_21 - 1] [i_7]))))));
        }
    }
    #pragma endscop
}
