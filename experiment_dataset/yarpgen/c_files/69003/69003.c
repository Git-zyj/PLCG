/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_17 = 235;
        var_18 = (max(var_18, var_7));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 = (min(var_19, (1 == 1)));
            var_20 = (min(var_20, (arr_5 [i_0] [2])));
        }
        arr_6 [i_0] = ((~(arr_5 [6] [4])));
        var_21 -= (((~(arr_1 [5] [i_0]))));
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        arr_9 [i_2 - 1] = var_2;
        arr_10 [i_2] = ((-(((((-(arr_7 [i_2])))) * 67108863))));
        arr_11 [i_2 + 2] = (arr_8 [i_2] [i_2]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_16 [i_3] = var_0;
        var_22 = (((var_16 < 0) % var_2));
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 14;i_4 += 1)
    {
        arr_21 [i_4] = 1;
        var_23 = (max(var_23, (var_14 - var_7)));
        arr_22 [i_4] = 0;
        arr_23 [i_4] = (((((arr_13 [i_4]) ? (arr_14 [20]) : 1)) - (arr_20 [i_4 - 2])));
    }

    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        arr_27 [i_5] = (((arr_25 [i_5] [i_5]) < ((var_4 ? var_11 : (((arr_24 [i_5]) >> (var_1 - 375831965)))))));

        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            var_24 = (min(var_24, (arr_28 [i_6])));
            var_25 = ((~(((!((max(var_16, var_12))))))));

            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {

                for (int i_8 = 1; i_8 < 23;i_8 += 1)
                {
                    var_26 = (((min(14308, var_14)) - ((((!(arr_28 [i_5])))))));
                    var_27 *= ((((((((9223372036854775807 ? 9 : 137))) ? ((((arr_26 [13]) < (arr_26 [4])))) : var_7))) ? (((var_1 + var_10) + 1)) : (arr_30 [i_5] [i_5])));
                }
                arr_34 [i_7] [i_7] [i_6] [i_5] = ((((min(var_12, 51014253))) ? (min((arr_28 [i_5]), (arr_26 [i_5]))) : ((((arr_25 [i_5] [i_5 + 4]) / var_9)))));
                var_28 ^= -1205885760563469381;
                var_29 = (max((3679019778 > -66), (((arr_29 [i_5] [i_5 + 2]) != var_13))));
            }
        }
        var_30 = (((arr_25 [i_5] [i_5]) ? ((var_2 ? (arr_25 [i_5 - 1] [i_5 + 3]) : (arr_33 [i_5 + 1] [i_5 + 1] [i_5] [i_5]))) : (arr_32 [i_5] [i_5] [i_5] [i_5])));
    }
    for (int i_9 = 1; i_9 < 1;i_9 += 1)
    {
        arr_38 [1] = ((((-((231 ? 166 : 169759589)))) | (((~(((1 || (arr_7 [i_9])))))))));

        /* vectorizable */
        for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
        {
            arr_43 [i_9] [i_10] = (~var_11);
            var_31 = (max(var_31, (22 == var_7)));
        }
        for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
        {

            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                var_32 = ((-((var_12 ? 31379 : var_3))));

                /* vectorizable */
                for (int i_13 = 2; i_13 < 11;i_13 += 1)
                {
                    arr_52 [i_9] [i_9] [i_9] [7] [i_9] [i_9] &= ((~(arr_36 [i_9 - 1])));
                    var_33 = (min(var_33, 1413));
                    var_34 *= (26888 | 0);
                }
                var_35 = 87;
            }
            var_36 = (min(var_36, (((((min(var_4, (min((arr_39 [i_9 - 1] [i_9 - 1]), (arr_36 [i_11])))))) ? (arr_40 [i_9] [i_11]) : (max((~var_16), (arr_45 [i_9] [i_9 - 1] [i_9 - 1]))))))));

            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                var_37 = (max(var_37, 166));
                var_38 = (min((((arr_29 [i_9 - 1] [i_9 - 1]) & (((arr_31 [1] [3] [i_11] [i_9]) + 402879387)))), (1205885760563469385 < 6834800601558185358)));
                arr_56 [i_9] = 247;
            }
            for (int i_15 = 2; i_15 < 12;i_15 += 1)
            {
                var_39 |= (max((~16343), (((((arr_13 [7]) > (arr_37 [i_11] [3]))) ? (((arr_35 [i_9 - 1]) ? 26 : 0)) : ((var_0 ? 65535 : (arr_42 [i_15] [i_11])))))));
                arr_60 [i_9] [i_11] [i_9] = ((var_6 * 0) & ((+((18446744073709551600 ? (arr_24 [i_9]) : (arr_46 [4] [i_9] [i_11] [i_9]))))));
            }
            for (int i_16 = 0; i_16 < 15;i_16 += 1)
            {
                var_40 = var_9;
                var_41 = (max(var_41, ((((((16 ? 1 : 1)))) ? ((((min((arr_50 [i_9] [i_11] [i_11] [i_9]), var_16))) ? (~var_5) : -var_0)) : (!-23)))));
                arr_65 [i_9 - 1] [i_16] = (((((-(3548317284721999445 / 65509)))) ? 3747015251 : (((~(114 || 1))))));
            }
        }
        var_42 = (arr_14 [i_9 - 1]);
        var_43 = (max((max(0, 17326725376658834852)), (((40811 <= (((arr_41 [i_9] [i_9] [9]) ? var_12 : -17)))))));
    }
    #pragma endscop
}
