/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_7 * (var_8 - var_2))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = var_5;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [i_2] = ((-18 >= var_6) || 5768820370830847477);
                    var_13 = ((var_2 * (arr_0 [i_1 + 1] [i_1 + 1])));
                }
            }
        }
        var_14 += 18;

        for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                var_15 = (max(var_15, (arr_14 [i_0] [i_0] [i_0])));
                var_16 = (min(var_16, ((max(((~(arr_3 [i_4] [i_3] [i_0]))), (-77 || 31849))))));
                var_17 |= (min(((((max((arr_7 [i_0] [8] [i_0]), -66)) >> ((13 << (9223372036854775783 - 9223372036854775782)))))), ((-54 ? (min((arr_9 [i_0] [i_4]), var_6)) : (arr_15 [i_3] [i_0])))));
            }
            var_18 = (((((((~(arr_14 [i_0] [i_3] [i_3])))) ? ((var_4 ? 988138124 : (arr_5 [i_0]))) : 24)) > (((var_1 ? (((arr_1 [i_0]) ? -54 : (arr_13 [i_3] [i_3]))) : (~0))))));
            arr_16 [i_0] [i_0] = min(524287, 6531640665726819307);
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
        {
            var_19 |= (((arr_1 [i_0]) ? (arr_5 [i_5]) : ((var_8 * (arr_5 [i_0])))));
            var_20 |= (min((((arr_17 [i_0]) ? var_1 : -105)), 46));

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                arr_21 [i_0] [1] [i_6] [i_6] = (arr_0 [i_5] [i_6]);
                var_21 |= (min(30148, 17));
                var_22 = ((+((((((arr_17 [i_6]) ? (arr_2 [i_5] [i_5] [i_6]) : 1))) ? -30176 : -24))));
                var_23 += ((max((((arr_20 [i_5] [i_5] [i_6] [i_6]) ? (arr_19 [i_0] [i_0] [i_6]) : var_6)), ((((arr_15 [i_5] [i_6]) && -69))))));
            }
            for (int i_7 = 3; i_7 < 11;i_7 += 1)
            {

                for (int i_8 = 2; i_8 < 11;i_8 += 1)
                {
                    arr_27 [i_0] [i_5] [i_5] [i_7] [i_7] [i_5] = (((((-(arr_26 [i_8] [i_5] [i_7] [i_8] [i_8] [i_5])))) ? ((min((arr_15 [i_0] [i_7]), (arr_26 [i_0] [i_5] [i_7] [i_5] [i_5] [i_5])))) : (arr_15 [i_0] [i_5])));
                    var_24 = ((~(arr_26 [i_8] [i_8] [i_8 - 1] [i_8] [i_8] [i_8 + 1])));
                    var_25 = var_4;
                }
                var_26 = ((-(arr_4 [i_7 + 1])));
                var_27 = var_2;

                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    var_28 += var_8;
                    var_29 += (var_0 >= 2436587637);
                    var_30 += ((((min(((var_4 ? var_9 : var_5)), (arr_18 [i_7 - 2] [i_7 + 1] [i_7 - 2])))) ? -61 : 0));
                    var_31 += var_1;
                    var_32 += (max(var_1, var_9));
                }
                /* vectorizable */
                for (int i_10 = 3; i_10 < 11;i_10 += 1)
                {
                    arr_34 [i_10] = (0 >= (arr_22 [i_7 - 2] [i_10 - 3] [i_10 - 2] [i_10 - 2]));
                    arr_35 [i_0] [i_5] [i_7] [i_10] = ((4294967282 ? var_7 : (arr_3 [i_10] [i_7 - 2] [i_0])));
                    var_33 = (max(var_33, 69));
                }
            }
        }
        for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
        {
            var_34 = var_4;
            var_35 = min((min(var_9, ((var_1 ? (arr_10 [i_0] [i_11]) : (arr_36 [i_0] [i_0] [i_11]))))), (var_4 <= var_7));
            var_36 = 524287;
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
    {
        arr_42 [i_12] = ((var_5 ? (arr_41 [i_12] [i_12]) : (arr_41 [i_12] [i_12])));
        var_37 = var_9;
        arr_43 [6] = (((((arr_40 [1]) * -31850))) ? (arr_41 [i_12] [i_12]) : (var_3 + 12328));
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
    {
        var_38 += 1;
        arr_48 [i_13] = (!(var_3 >= var_3));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
    {
        arr_51 [i_14] [i_14] = (((arr_49 [i_14]) && (((4294967295 ? var_1 : 1)))));
        var_39 += ((-122 ? (arr_45 [i_14]) : ((-7565210867225654573 ? var_4 : (arr_47 [i_14])))));
        var_40 |= (((((var_4 ? 127 : (arr_45 [i_14])))) ? 6191556003134776504 : -69));
    }
    var_41 = (var_3 > var_0);
    #pragma endscop
}
