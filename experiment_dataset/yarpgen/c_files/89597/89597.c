/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_11 -= 2304451292;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            var_12 = (min(var_12, var_4));
                            var_13 = 4952;
                            var_14 = (max(var_14, (((!(arr_8 [i_0] [i_0] [i_0] [i_0]))))));
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_15 &= (((arr_12 [i_2] [i_1] [i_2] [i_3] [i_5]) ? -70 : var_3));
                            var_16 = (min(var_16, ((((-12934 && 255) ? (arr_1 [i_1] [i_1]) : (!414874841))))));
                            var_17 *= ((-((var_6 ? (arr_3 [i_0] [i_0]) : -16788))));
                            var_18 *= (-16788 ^ var_7);
                            var_19 = (min(var_19, (((var_5 + (((69 + (arr_4 [i_2] [i_1] [i_1] [i_1])))))))));
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            arr_18 [i_0] = (arr_15 [i_0] [i_1] [i_2] [i_0] [i_6] [7] [i_1]);
                            arr_19 [i_0] [i_0] [0] = 32;
                        }
                        var_20 = (((173 ? -32 : 14976806354942686680)));
                        var_21 = (min(var_21, (((arr_9 [i_3] [i_3] [i_3]) ? (arr_9 [i_0] [i_0] [i_0]) : var_0))));
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_22 = var_2;
                        var_23 = (max(var_23, var_2));
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        arr_24 [i_8] [8] [i_0] = ((~(arr_8 [i_0] [i_1] [i_2] [i_8])));
                        var_24 = 1023;
                        var_25 = ((!(((796781065 ? -6183 : var_5)))));
                        var_26 = (arr_3 [i_0] [i_0]);
                    }
                    var_27 = ((~(arr_21 [i_0] [i_1] [8] [i_2])));

                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_28 ^= (arr_21 [i_2] [i_2] [i_2] [i_2]);
                        var_29 = (max(var_29, ((((var_0 * var_8) / 127)))));

                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            arr_30 [i_0] [i_1] [i_1] [8] [8] [i_9] [i_10] = (((((~(arr_29 [10] [10] [10] [i_9] [i_9] [i_9] [i_9])))) ? (((arr_12 [i_0] [i_9] [i_2] [i_0] [i_0]) ? var_4 : 255)) : -32));
                            var_30 = (((arr_20 [i_0] [10] [1] [i_9]) / var_4));
                            arr_31 [i_0] [i_0] = ((2517080646 ? (arr_0 [i_0]) : var_3));
                            var_31 |= (((arr_28 [i_0] [i_0] [i_0] [i_1] [i_1]) & (arr_28 [i_0] [i_0] [i_0] [i_2] [i_0])));
                        }
                        var_32 = (max(var_32, 14542663486070529922));
                    }
                    var_33 = (min(var_33, (((15872 ? -72 : 32767)))));
                    arr_32 [i_0] [i_0] = (((arr_23 [i_0] [i_0] [i_0] [i_0]) ? (arr_23 [i_2] [i_1] [1] [9]) : -1));
                }
                for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                {
                    var_34 = (((arr_17 [i_0] [i_0]) ? (((((var_10 ? 136 : 53))) ? (((-3502746356495359528 ? 35603 : var_2))) : (arr_2 [i_0] [i_0]))) : ((((var_0 ? (arr_13 [1] [1] [i_11]) : var_9)) >> (((arr_6 [i_11] [i_1] [i_1] [12]) - 3837253018))))));
                    var_35 = (min(var_35, (((-16788 ? (arr_21 [i_0] [i_1] [i_1] [i_11]) : var_9)))));
                }
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    arr_38 [i_12] [i_0] [i_12] = ((max((arr_16 [i_0] [i_0]), var_7)));

                    for (int i_13 = 2; i_13 < 11;i_13 += 1)
                    {

                        /* vectorizable */
                        for (int i_14 = 3; i_14 < 11;i_14 += 1)
                        {
                            var_36 = ((var_9 + (((arr_25 [i_0] [7] [i_12] [10] [i_0]) + var_1))));
                            var_37 = (max(var_37, var_7));
                        }
                        var_38 = (max(var_38, (!725773099030438396)));
                    }
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        var_39 = (min(var_39, var_5));
                        var_40 = var_7;
                        var_41 = var_9;
                    }

                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        var_42 ^= (arr_3 [i_16] [i_1]);
                        var_43 += (min(((((var_1 / (arr_17 [i_16] [i_12]))) / (((24733 ? 29935 : 536870911))))), (max((65524 / 74), (min((arr_23 [i_0] [i_1] [i_12] [i_16]), var_8))))));
                        var_44 = (arr_45 [i_0] [i_16] [i_12] [1]);
                    }
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        var_45 = (max(32617, (~-112)));
                        var_46 *= ((+(max((var_9 - 110), 36608))));

                        for (int i_18 = 0; i_18 < 14;i_18 += 1)
                        {
                            var_47 &= (10640249683091378584 / var_7);
                            var_48 *= 7838;
                        }
                    }
                    for (int i_19 = 3; i_19 < 13;i_19 += 1)
                    {
                        arr_57 [i_0] [i_0] [i_12] [i_0] [i_0] &= ((-((((3916080074445082673 ? (arr_27 [13] [13] [13] [i_19] [i_12]) : 33554431)) - ((-109 ? 414874844 : (arr_3 [i_1] [i_0])))))));
                        arr_58 [i_0] [i_19] [i_19] [i_19] = ((((((arr_14 [i_19 + 1] [i_19] [i_19] [i_0] [i_19] [i_19] [i_19 - 1]) & 88))) ^ ((1 ? (arr_14 [i_19 + 1] [1] [1] [i_0] [0] [i_19] [i_19 - 3]) : var_4))));
                        arr_59 [i_0] [i_1] [i_0] |= (arr_29 [i_0] [i_0] [i_0] [i_12] [i_12] [3] [i_19]);
                    }
                }
            }
        }
    }
    var_49 = (var_0 * 25);
    var_50 ^= (max(((max(var_5, var_4))), ((var_8 ? (var_10 + 17720970974679113216) : (1193939944 - var_9)))));
    #pragma endscop
}
