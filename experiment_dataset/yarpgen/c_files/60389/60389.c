/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((1596374515 * (((arr_1 [i_0] [i_0]) / var_9))));
        var_12 ^= var_3;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_0] [14] [3] = (((arr_1 [i_0] [i_1]) <= var_5));
            var_13 = (min(var_13, (~var_5)));
        }
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            var_14 = ((-((32899 ? (max((-127 - 1), 2044)) : ((max((arr_3 [i_0]), var_8)))))));
            var_15 = 61989;
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            arr_11 [i_3] [i_0] [i_3 - 1] = var_2;
            arr_12 [i_0] [i_3] [4] = (arr_9 [i_3] [i_3] [i_3]);
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_16 *= ((max((!var_3), ((var_0 ^ (arr_0 [i_4]))))));
            var_17 = (max(var_17, var_11));
            arr_15 [2] [i_4] &= (max((arr_0 [i_0]), var_4));
            var_18 ^= (((((var_11 / (arr_5 [i_0])))) ? ((((arr_1 [i_0] [15]) << (((arr_3 [12]) + 1843657801))))) : var_8));
            var_19 += (((((1 ? var_6 : var_7)))) ? (((arr_7 [i_4]) ? ((28769 ? var_7 : 65535)) : (0 || var_3))) : (((!(arr_7 [i_4])))));
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_20 = arr_19 [i_6];
                var_21 = -118;
                arr_21 [i_0] = (var_8 | var_0);
            }
            for (int i_7 = 1; i_7 < 14;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 2; i_8 < 16;i_8 += 1)
                {
                    arr_27 [16] [12] [i_0] [i_0] = ((((((arr_13 [i_5] [5]) ? 3547 : var_2))) ? (!1) : var_1));
                    arr_28 [9] [7] [i_7 - 1] [14] [i_7] [6] = var_6;
                    arr_29 [i_0] [i_5] [i_8] = (arr_4 [i_0] [i_5]);
                }
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    arr_33 [i_7] [17] [i_7 - 1] [14] [i_9] [i_5] = (arr_24 [5] [i_7] [i_7 + 4] [i_7 + 1]);
                    arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_24 [i_0] [i_0] [i_0] [i_0]) ? (arr_24 [i_0] [i_5] [i_7 + 4] [8]) : (arr_24 [i_0] [i_0] [i_0] [i_0])));
                    arr_35 [3] [i_0] = var_10;
                    var_22 = (min(var_22, (((((((arr_19 [i_0]) / 11))) ? 2984866088 : -1612661026)))));
                    var_23 = ((var_3 ? (arr_24 [i_7 + 1] [i_7 + 3] [i_9] [i_9]) : var_7));
                }
                for (int i_10 = 3; i_10 < 16;i_10 += 1)
                {
                    arr_38 [i_0] [i_0] [i_0] [i_0] [17] [i_0] = var_11;
                    arr_39 [i_0] [1] [i_0] = ((~(var_8 ^ var_11)));
                    arr_40 [5] [5] [i_7 + 1] [i_10] [i_0] = (arr_36 [i_5] [i_10 - 1] [i_10] [i_10]);
                    var_24 = (((arr_9 [i_0] [i_7 + 1] [i_10 - 2]) << (((arr_9 [i_0] [i_7 + 2] [i_10 - 1]) - 402039760))));
                }
                arr_41 [i_0] [i_5] [1] = (-(arr_16 [i_0] [11] [i_7]));
                arr_42 [i_0] [i_5] [i_5] [i_7 - 1] = ((32748 ? (arr_30 [i_0] [i_7 + 1] [i_7]) : 0));
                arr_43 [i_7] [12] = ((var_6 | (arr_0 [i_0])));
            }
            for (int i_11 = 1; i_11 < 14;i_11 += 1) /* same iter space */
            {
                var_25 -= ((var_1 ? (arr_13 [i_0] [i_11]) : (arr_7 [i_11 - 1])));
                var_26 = (((~var_7) ^ ((((arr_17 [i_0]) || (arr_0 [13]))))));
                arr_47 [i_0] [1] [i_11 + 3] = -1965720856;
                arr_48 [i_0] [i_0] [i_0] = (((arr_18 [i_11 - 1] [i_11] [0]) ? var_7 : (arr_18 [i_11 + 4] [i_11] [i_11 + 1])));
                var_27 = (max(var_27, ((-(arr_9 [i_0] [i_11 - 1] [i_11 - 1])))));
            }
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                arr_51 [i_5] [i_5] [8] [8] &= (arr_46 [17] [i_12] [i_12]);
                arr_52 [i_12] &= ((-112 | (var_7 / var_9)));
                var_28 ^= 18338;
                arr_53 [i_0] [8] [8] &= -28663;
            }
            arr_54 [i_5] = (arr_25 [i_0] [i_0] [i_5] [i_5]);
            var_29 = (-9223372036854775807 % (28286 * var_2));
            var_30 = ((115 ? 1 : 3545527482));
            var_31 ^= var_5;
        }
        var_32 = ((!((((9223372036854775807 ? var_8 : var_0))))));
    }
    /* vectorizable */
    for (int i_13 = 4; i_13 < 14;i_13 += 1)
    {
        arr_57 [15] = (((arr_44 [i_13]) / var_0));
        var_33 -= var_11;
        var_34 = (min(var_34, var_4));
    }
    var_35 -= (min(((((var_11 ? var_9 : var_6)))), (((var_8 ^ -1) ? 2113355466 : var_0))));
    #pragma endscop
}
