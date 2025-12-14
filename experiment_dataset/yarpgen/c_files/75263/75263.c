/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 &= (arr_1 [i_0]);
        arr_2 [i_0] |= (((((((max((arr_0 [i_0]), var_13))) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? ((max((arr_0 [i_0]), (max((arr_1 [i_0]), 50))))) : (arr_0 [i_0])));
        var_15 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 12;i_2 += 1) /* same iter space */
        {
            arr_8 [i_1] [i_2] [i_2 - 1] = (~(arr_4 [i_1]));
            arr_9 [i_1] [i_2] = 222;
            var_16 = (((arr_7 [i_2 - 1] [i_2 + 1]) || (arr_5 [i_2 + 1] [i_1])));
            var_17 ^= (((arr_4 [i_1]) <= (((((arr_7 [i_1] [i_2 + 1]) || (arr_4 [i_1])))))));
        }
        for (int i_3 = 1; i_3 < 12;i_3 += 1) /* same iter space */
        {
            var_18 ^= ((213 ? 222 : 17082223750042638011));
            arr_13 [i_1] [i_1] = (((arr_5 [i_1] [i_1]) ? (((min((arr_1 [1]), (arr_3 [i_1]))) << ((((226 ? var_10 : var_4)) - 3369732807173752190)))) : (((~((max((arr_0 [i_1]), var_1))))))));
            arr_14 [i_1] = var_1;
            arr_15 [i_1] = ((-(arr_7 [i_3 + 2] [i_3 - 1])));
        }
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            var_19 = 746921186;
            var_20 ^= ((((max((arr_7 [i_4 + 2] [i_4 + 1]), ((5820 ? -472 : var_9))))) ? ((59715 ? (!27) : -5670)) : (((arr_12 [12] [12] [i_4 + 2]) ? (arr_6 [i_1] [i_1]) : (arr_12 [i_1] [i_4] [i_4 + 2])))));
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        var_21 = (max((arr_23 [i_4] [i_4 + 3] [i_4]), ((min((max(var_2, (arr_12 [i_1] [i_4] [5]))), var_2)))));
                        arr_24 [i_1] [i_1] [i_4] [i_1] [i_1] = (min((max((min((arr_19 [i_4] [i_4] [i_4]), (arr_6 [13] [i_5]))), ((((arr_10 [i_1]) <= (-32767 - 1)))))), (arr_18 [i_4 + 3] [i_4] [i_4 + 1] [i_4 + 1])));
                        var_22 = (((((+(((arr_12 [10] [10] [11]) * (arr_18 [i_1] [i_4] [i_5] [i_6])))))) ? 2600 : (((arr_19 [i_4] [i_4 + 2] [i_4]) / ((min(var_2, 16)))))));
                        arr_25 [i_4] [i_4] [i_5 + 1] [i_6] = min(((16 ? 746921181 : 1918458219)), 5820);
                    }
                }
            }
            var_23 += (min((arr_22 [i_1] [10] [10] [i_1]), (arr_11 [i_1])));
        }
        var_24 = (max((((arr_12 [i_1] [i_1] [8]) ? (arr_12 [i_1] [i_1] [i_1]) : (arr_12 [i_1] [i_1] [6]))), ((-(((arr_21 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_16 [i_1]) : var_5))))));

        for (int i_7 = 3; i_7 < 11;i_7 += 1)
        {
            var_25 -= (min(var_3, (((-29469 <= (arr_5 [i_1] [i_1]))))));
            var_26 = (min(var_26, ((((((arr_1 [16]) ? 34 : var_6))) ? (arr_1 [i_7]) : (arr_22 [i_7 + 1] [10] [10] [i_7 + 2])))));
            var_27 = (arr_26 [i_7] [i_7]);
            var_28 -= (arr_5 [i_1] [i_7 - 3]);
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_29 &= (((arr_27 [10] [i_8] [i_8]) * (arr_27 [2] [i_1] [i_1])));
            var_30 *= ((16 ? ((~(arr_16 [i_1]))) : 57087));
            arr_32 [i_8] [i_8] = ((16 ? ((((arr_7 [4] [i_8]) ? (arr_23 [i_8] [i_8] [i_8]) : 8522))) : (((arr_5 [1] [i_1]) * 770885835))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            arr_42 [i_8] [i_8] [9] [i_8] [i_11] [i_8] [i_10] = ((!(arr_6 [i_11] [i_11])));
                            var_31 = ((41 || (arr_26 [i_1] [i_8])));
                            var_32 = (arr_11 [i_1]);
                            arr_43 [4] [i_8] [i_8] [4] [i_11] [6] |= 18446744073709551615;
                            var_33 = (((arr_26 [i_1] [i_8]) ? (arr_7 [i_10] [i_8]) : (arr_5 [i_10] [i_11])));
                        }
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            var_34 -= (((arr_40 [i_1] [10] [i_9] [i_9] [i_10] [1]) / (arr_40 [i_1] [i_8] [i_8] [i_9] [i_10] [i_12])));
                            var_35 = (min(var_35, ((((((5820 ? 57094 : var_0))) ? ((((arr_0 [i_1]) ? (arr_31 [i_1] [i_10] [i_9]) : (arr_6 [4] [i_12])))) : (((arr_27 [8] [i_8] [i_9]) ? (arr_27 [4] [i_10] [i_12]) : (arr_3 [i_1]))))))));
                            var_36 |= (((arr_10 [i_12]) <= (arr_10 [i_1])));
                        }
                        arr_46 [i_1] [i_8] [i_9] [i_10] = (arr_11 [i_10]);
                    }
                }
            }
            arr_47 [i_8] [i_1] [i_1] = ((arr_3 [i_8]) ? (arr_0 [i_1]) : ((((arr_29 [i_1] [i_8]) * (arr_33 [i_1] [i_8] [i_1] [i_1])))));
        }
        var_37 = var_9;
    }
    for (int i_13 = 0; i_13 < 20;i_13 += 1)
    {
        arr_50 [i_13] = max((((((arr_49 [i_13]) & (arr_48 [i_13]))) ^ (((((arr_48 [i_13]) + 2147483647)) >> (((arr_48 [i_13]) + 61)))))), (arr_49 [i_13]));
        var_38 = ((((((min((arr_49 [i_13]), (arr_49 [i_13])))) ? ((((!(arr_48 [i_13]))))) : var_6)) * var_0));
        var_39 -= (((((~(arr_48 [i_13])))) || ((((arr_48 [i_13]) ? (arr_48 [i_13]) : (arr_48 [i_13]))))));
    }
    var_40 = ((((max((max(var_5, var_11)), var_2))) * (min(var_7, (min(var_9, var_9))))));
    var_41 |= (8522 * 4280668548);
    #pragma endscop
}
