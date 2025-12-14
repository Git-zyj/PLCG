/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) << (((max(2289, (arr_0 [i_0 + 1]))) - 2272))));
        var_20 = 105;
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (((max(var_19, var_14))) ? (((~((-(arr_0 [i_1 + 1])))))) : (arr_1 [20]));
        var_21 = ((((((((2310 ? 2261 : 1835383861))) ? -48999 : ((-(arr_0 [i_1])))))) + (~6361638139739524650)));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            var_22 = (((var_0 ? var_2 : (arr_3 [i_1 + 1] [i_2]))));
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_23 = ((0 ? (((arr_1 [i_3]) ? 174757851 : (arr_8 [20] [20] [22] [i_5]))) : (arr_8 [i_1 - 2] [i_1 - 3] [i_1 - 2] [i_1 + 1])));
                            arr_14 [i_3] [i_1] [i_1] [i_3 + 3] [i_1] [i_1] [i_3] = (((((arr_1 [i_1 - 2]) + 9223372036854775807)) >> (((arr_13 [i_1] [i_1] [i_1 + 1] [i_3 - 2] [i_3 + 3] [i_3 - 1] [i_5]) - 4249380454321169279))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        {
                            arr_22 [i_7] [i_7] [i_6] [i_7] [i_8] = ((!(((6 ? 255 : (arr_0 [i_1]))))));
                            var_24 = (((arr_18 [i_1 + 1] [i_7 - 1]) ? (arr_18 [i_1 - 2] [i_7 + 1]) : var_8));
                            var_25 = (((arr_20 [i_7] [i_1 + 1] [i_7 + 1]) != (arr_21 [i_1] [i_1 + 1] [i_6] [i_7] [i_7 + 1])));
                            arr_23 [i_7] [i_2] [i_2] [i_2] [2] [i_8] [i_8] = (arr_4 [i_8] [i_1]);
                            var_26 ^= ((~(arr_12 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_7 + 1])));
                        }
                    }
                }
            }
            arr_24 [i_1] [i_1] = (((arr_17 [i_1 - 1] [i_1 + 1] [12]) ? (arr_17 [i_1 - 1] [i_1 - 3] [6]) : (arr_17 [i_1 + 1] [i_1 - 3] [12])));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 0;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    {
                        arr_32 [i_9] [i_9] = (((arr_15 [i_10 + 1]) == (arr_1 [i_9])));

                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            var_27 = (min(var_27, 207069205));
                            arr_35 [i_1] [i_9] [i_10] [i_10] [18] [i_9] = -26;
                        }
                        for (int i_13 = 4; i_13 < 22;i_13 += 1)
                        {
                            var_28 &= ((-(arr_34 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_13])));
                            var_29 = (~0);
                            var_30 = -96;
                        }
                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            arr_40 [i_1] [i_9] [22] [i_11] = (((arr_25 [i_1 + 1]) ? (arr_20 [i_9] [i_10 + 1] [i_10 + 1]) : (arr_20 [i_9] [i_10 + 1] [i_10 + 1])));
                            arr_41 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_9] = (((arr_36 [i_1] [19] [8] [i_1 - 1] [19] [i_1] [i_10 + 1]) > (arr_36 [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1] [i_9] [i_10 + 1])));
                            arr_42 [i_9] = ((var_5 <= (arr_10 [i_1 - 1] [i_9] [i_9])));
                        }
                        var_31 = (min(var_31, ((((arr_1 [i_1 - 1]) >= ((~(arr_38 [i_1] [i_10]))))))));
                        var_32 = (((0 ? (arr_26 [i_9]) : (arr_7 [i_9]))) | ((((arr_36 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [13]) && (arr_9 [i_1] [i_9])))));
                    }
                }
            }
            arr_43 [i_1] [i_9] = ((!(arr_19 [i_1 - 1] [i_9] [i_1 - 1] [i_1 - 1] [i_1 - 3])));
        }
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 24;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 24;i_16 += 1)
            {
                {
                    var_33 = (max(var_33, ((min(((max((arr_3 [i_1 - 1] [i_1 - 3]), (arr_3 [i_1 - 2] [i_1 - 3])))), (max((!1436243800265759347), (arr_38 [i_1 + 1] [i_1 - 2]))))))));
                    arr_50 [i_1] [10] [i_15] [12] &= ((!((max((((arr_0 [i_1 - 3]) ? -1830233684 : (arr_31 [i_1] [1] [i_15] [i_1]))), ((((arr_37 [i_16]) ? var_1 : 223))))))));
                    arr_51 [i_16] = ((1 + (((max(-1835383836, (arr_13 [i_16] [i_15] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1]))) >> 1))));
                    arr_52 [i_16] [i_16] = ((!((((arr_7 [i_1 + 1]) & (arr_13 [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 3] [i_1 - 3] [i_16] [i_16]))))));
                }
            }
        }
    }
    var_34 += (~-var_19);
    var_35 += (min((((max(var_19, var_2)) >= -32)), ((((min(var_14, 1))) || (var_18 % var_12)))));
    var_36 = var_11;
    #pragma endscop
}
