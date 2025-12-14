/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_17 = var_1;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = (min(var_13, (var_10 | -2994838885547920862)));
                    arr_7 [i_0] [i_1] [i_0] = ((var_12 >= (min((arr_1 [i_0] [i_0]), 55677))));
                }
            }
        }
        var_19 ^= var_3;
        var_20 = (min(var_20, var_13));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_10 [i_3] = -var_6;
        var_21 = var_14;
        var_22 += 0;
    }
    for (int i_4 = 3; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_23 = (i_4 % 2 == zero) ? ((((((((((var_11 ? -92 : var_15))) ? (min(-288230376151711744, 136)) : 92)) + 9223372036854775807)) >> (((((arr_1 [i_4 - 3] [i_4]) % var_7)) + 1724909652773823517))))) : ((((((((((var_11 ? -92 : var_15))) ? (min(-288230376151711744, 136)) : 92)) + 9223372036854775807)) >> (((((((arr_1 [i_4 - 3] [i_4]) % var_7)) + 1724909652773823517)) - 5049512895600488505)))));
        var_24 &= -1417187717367440999;
        var_25 = (min((((arr_11 [i_4]) / var_7)), var_13));
        var_26 &= 0;
        var_27 ^= (23986 ^ var_12);
    }
    for (int i_5 = 3; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_28 = (~92);

        /* vectorizable */
        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                arr_21 [i_5] [i_6] = 23998;
                var_29 -= -24000;
                var_30 ^= ((((((-127 - 1) ? 1 : 10))) ? (arr_1 [i_5] [i_7]) : 10));
                var_31 = (min(var_31, 92));
            }
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                var_32 |= ((1 ? var_1 : var_2));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_33 = (((arr_1 [i_5] [i_5]) || var_11));
                            var_34 = var_2;
                        }
                    }
                }
                arr_29 [i_5] [i_5] [i_5] [i_8] = (~-22122);
                arr_30 [i_5] [i_6] [i_5 - 1] [i_5] = (!240);
                var_35 += var_11;
            }
            for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
            {
                var_36 = (min(var_36, 1));
                arr_34 [i_5] [i_5] = ((23986 ? (arr_20 [i_5] [i_5 - 1] [i_5] [i_5 - 2]) : (arr_20 [i_5] [i_5 - 2] [i_5] [i_5 + 1])));
            }
            for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
            {

                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    arr_39 [i_5] [i_5] [i_12] [i_13] [i_13] [2] = ((var_0 || (var_13 | -122)));
                    arr_40 [i_5 - 2] [i_6] [i_6] [i_6] [i_12] [i_5] = var_0;
                    var_37 = (min(var_37, var_12));
                    var_38 = var_12;
                }
                var_39 = (((((var_8 | (arr_36 [i_12] [i_6] [13])))) ? var_13 : (arr_23 [i_5 - 3])));
            }
            var_40 = (-94 - ((var_13 ? 26 : (arr_1 [i_5 - 2] [i_5]))));
        }
        for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
        {
            var_41 = (max(((((var_7 && var_2) || var_3))), ((+((var_7 ? (-32767 - 1) : var_6))))));
            var_42 = ((+((var_12 ? ((var_14 ? (arr_16 [i_5] [i_5] [i_5]) : var_6)) : -var_5))));
            var_43 = (max(var_43, -var_3));
        }
        for (int i_15 = 0; i_15 < 19;i_15 += 1)
        {
            arr_46 [i_5] [i_5] [i_15] = (((arr_1 [i_5] [i_5]) ? var_4 : var_2));
            var_44 = var_9;
            var_45 = ((((-340842582 >> (var_7 + 5541950691678478805))) * ((((arr_41 [i_5 - 1] [i_5 - 3]) << (((var_7 + 5541950691678478807) - 24)))))));
        }
        var_46 = (((((+((max((arr_5 [i_5] [i_5] [i_5]), 91)))))) ? ((((max(7628045464318861760, 0))))) : (((arr_20 [i_5 - 2] [i_5 - 2] [i_5] [i_5 - 3]) ? var_6 : (18446744073709551615 * 2837392685)))));
        var_47 = (min((arr_1 [i_5] [i_5]), (((-(var_10 > 24600))))));
    }
    var_48 = var_10;
    /* LoopNest 3 */
    for (int i_16 = 2; i_16 < 7;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 10;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 10;i_18 += 1)
            {
                {
                    arr_56 [i_16 + 2] [i_17] [i_17] = (--6285409401136017645);
                    var_49 = var_3;
                }
            }
        }
    }
    var_50 &= 7;
    #pragma endscop
}
