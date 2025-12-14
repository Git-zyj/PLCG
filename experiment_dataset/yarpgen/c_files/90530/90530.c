/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((39419 <= (((((62957 ? 127 : 16320))) ? var_9 : ((-7 ? -1 : var_7))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_15 += (arr_2 [i_0]);

        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            var_16 = (max(var_16, (((var_10 ? ((var_4 ? -73 : (arr_5 [i_0] [i_1]))) : 56163)))));
            arr_7 [i_1] = (arr_3 [i_0] [i_1 - 1] [i_1]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1] [i_1] = (arr_5 [i_1 + 2] [i_1 - 1]);
                        arr_14 [i_0] [i_1 - 3] [i_0] [i_3] &= (((arr_1 [i_3 - 1] [i_1 + 2]) ? (arr_1 [i_3 - 3] [i_1 + 1]) : 3133));
                    }
                }
            }
        }
        for (int i_4 = 2; i_4 < 10;i_4 += 1) /* same iter space */
        {
            var_17 -= (((var_12 <= var_11) ? var_4 : 3));
            var_18 = arr_17 [i_0] [i_4] [8];
        }
        for (int i_5 = 2; i_5 < 10;i_5 += 1) /* same iter space */
        {
            arr_21 [i_5] [i_5] [i_5] = (((arr_19 [3] [i_5 - 1]) ? (arr_5 [1] [i_0]) : (((arr_12 [i_5]) ? (arr_5 [10] [i_5 - 1]) : var_0))));

            for (int i_6 = 3; i_6 < 9;i_6 += 1)
            {

                for (int i_7 = 2; i_7 < 9;i_7 += 1)
                {
                    arr_26 [i_5] [i_7 + 3] = (((((arr_5 [i_6] [i_5]) <= (arr_24 [i_5] [i_5] [i_5] [i_7 + 2]))) ? 20345 : (((arr_10 [i_0] [i_5] [i_5] [10]) ? var_6 : var_3))));
                    var_19 = (arr_16 [i_5] [i_6]);
                }
                var_20 = ((var_8 ? var_5 : (arr_10 [i_0] [i_5] [i_5] [i_6 + 3])));
                arr_27 [i_5] [i_5] [i_6] [i_6] = var_7;
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
    {
        var_21 = (((arr_16 [i_8] [i_8]) ? ((-2 ? (arr_1 [i_8] [i_8]) : var_0)) : 46842));
        arr_30 [i_8] = (((((12 ? -2 : var_10))) ? ((var_10 ? var_12 : (arr_3 [8] [i_8] [i_8]))) : -85));
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
    {
        var_22 ^= var_13;

        for (int i_10 = 4; i_10 < 9;i_10 += 1)
        {
            var_23 ^= (((((var_12 ? (arr_9 [i_9]) : (arr_9 [i_9])))) ? ((((arr_9 [i_10 + 3]) <= var_12))) : ((-77 ? (arr_9 [i_9]) : (arr_9 [i_9])))));
            var_24 = (~var_6);
            arr_35 [i_9] [i_9] [i_10 - 3] = ((((65508 ? (arr_32 [i_9] [i_10 + 3]) : 49212)) <= var_7));
        }

        for (int i_11 = 2; i_11 < 11;i_11 += 1)
        {
            arr_39 [i_9] [i_11] = (arr_16 [i_9] [i_11]);
            var_25 = (arr_10 [i_11 + 1] [i_9] [i_9] [i_9]);
            arr_40 [i_9] [i_11 - 1] [i_11] = (((((max((arr_18 [3]), (arr_28 [i_9] [i_9]))))) ? ((((max(64975, var_4))) ? (-28 <= var_9) : var_8)) : -1));
        }
        for (int i_12 = 2; i_12 < 11;i_12 += 1)
        {
            arr_45 [i_9] [i_12 - 2] [5] = ((((((38797 ? 49196 : (arr_34 [i_9] [i_9] [i_12]))) <= ((var_8 ? var_10 : (arr_29 [i_12] [i_12]))))) ? (((var_7 <= var_9) ? (((arr_17 [i_9] [i_9] [i_9]) ? (arr_41 [i_9]) : -1)) : (arr_23 [9] [11]))) : ((56163 ? ((var_3 ? (arr_20 [i_9] [i_12] [i_9]) : (arr_5 [8] [i_9]))) : 45092))));

            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    for (int i_15 = 3; i_15 < 9;i_15 += 1)
                    {
                        {
                            arr_55 [i_15 - 3] [i_13] [i_14] [i_9] [i_13] [i_9] = (((((((34970 ? var_3 : 18446744073709551599))) ? 26115 : (((var_1 <= (arr_18 [10])))))) <= (((-66 <= 1849) ? (arr_44 [i_12 - 1] [i_12 - 1]) : (arr_2 [i_9])))));
                            var_26 = (min(var_26, ((((((arr_5 [i_12 - 1] [i_12 - 2]) ? (((max(var_8, (arr_6 [i_9]))))) : (((arr_49 [i_14] [i_14] [i_12 - 1] [i_14] [i_15] [i_13]) ? var_0 : (arr_33 [i_13] [i_15]))))) <= ((((((arr_16 [i_9] [i_12]) || (arr_24 [i_9] [i_9] [6] [i_15 + 3]))) ? ((-4 ? (arr_34 [10] [10] [i_15]) : (arr_20 [i_9] [i_12 - 2] [i_9]))) : (((var_12 && (arr_41 [i_9]))))))))))));
                        }
                    }
                }
                arr_56 [1] [0] [i_13] = (((arr_10 [i_9] [6] [i_13] [i_13]) ? ((((arr_6 [i_13]) <= (var_1 <= 115)))) : (((var_5 <= ((18446744073709551615 ? (arr_17 [i_9] [i_13] [i_13]) : var_5)))))));
                var_27 = (max(var_27, ((((((var_8 ? ((var_10 ? var_1 : (arr_2 [i_9]))) : (arr_17 [i_9] [i_9] [i_13])))) ? ((var_11 * ((14053004955642425796 / (arr_12 [i_9]))))) : (((var_3 ? (var_13 * var_12) : (127 / 65525)))))))));
            }
            /* vectorizable */
            for (int i_16 = 0; i_16 < 12;i_16 += 1)
            {
                var_28 = var_4;
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 12;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 10;i_18 += 1)
                    {
                        {
                            var_29 ^= 108;
                            arr_64 [i_9] [i_17] [i_16] [i_17] [i_17] [8] = ((127 <= (arr_32 [i_12] [i_12])));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_19 = 1; i_19 < 9;i_19 += 1)
        {
            var_30 = (min(var_30, ((((arr_67 [i_19 + 2] [i_19]) ? ((56 ? var_10 : var_6)) : var_11)))));
            arr_68 [i_19] [i_9] [i_9] = -66;
            arr_69 [i_9] [i_19 + 1] [i_9] = (-113 <= var_3);
        }

        for (int i_20 = 4; i_20 < 11;i_20 += 1)
        {
            var_31 = var_10;
            var_32 = (arr_24 [i_20] [i_20] [i_20 - 1] [i_20]);
            var_33 = var_12;
            var_34 = ((var_9 ? (max(((var_0 ? var_1 : var_1)), ((var_3 ? (arr_23 [i_9] [i_20]) : var_1)))) : ((62957 ? (arr_9 [i_20]) : ((120 ? (arr_24 [i_20] [i_9] [i_20 - 3] [i_20]) : 72))))));
            arr_73 [i_20] [i_20] [i_9] = 39407;
        }
    }
    var_35 = ((((((var_3 <= 62) ? var_11 : (max(10906438241734820591, var_3))))) ? (((var_11 <= var_9) ? var_8 : (28 <= 62940))) : (((((var_6 ? var_11 : 2578))) ? var_8 : var_2))));
    #pragma endscop
}
