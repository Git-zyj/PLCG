/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_6));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            var_14 = (min(var_14, (arr_2 [i_1 - 2] [i_1 + 2])));
            arr_8 [i_1] = max(((-var_6 ? var_11 : (max(2484841350, 21933)))), ((min(-21933, (max(var_10, -6671))))));
            var_15 = ((-(((arr_1 [i_1 - 2]) ? ((~(-32767 - 1))) : (arr_2 [i_0] [i_1])))));
        }
        for (int i_2 = 4; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_16 = ((((((((var_5 ? (arr_9 [i_0]) : var_8))) ? 21941 : (((arr_6 [3] [i_2]) ? (arr_1 [i_0]) : var_3))))) ? ((((!((((arr_4 [i_0] [i_0] [i_0]) - (arr_10 [i_0] [i_0] [i_0])))))))) : 20876));
            arr_11 [i_2] [i_0] = arr_6 [i_2 - 4] [i_2 - 1];
        }
        for (int i_3 = 4; i_3 < 13;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        var_17 ^= (min((arr_0 [i_0]), 21941));
                        var_18 = ((!(((max(-2084, (arr_10 [i_3] [i_4] [5])))))));
                    }
                }
            }
            var_19 = (min(var_19, (arr_0 [i_0])));
            arr_22 [i_0] [i_0] [i_3] = (arr_14 [i_0] [i_3]);
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_20 |= ((-((8128 ? (max(20876, (arr_3 [i_7]))) : 32767))));
                            arr_32 [i_8] [i_8] [11] [3] [i_8] [3] [i_8] = ((-134213632 ? var_3 : (((-(arr_26 [i_0] [i_8] [i_0] [i_7] [4]))))));
                            arr_33 [i_0] [i_3 - 1] [i_3] [i_6] [i_7] [i_8] [6] &= ((((var_5 ? var_9 : ((32767 ? var_5 : (arr_28 [i_0] [i_3] [10] [i_7]))))) >> (((min((min((arr_26 [i_0] [i_3] [i_6] [i_7] [i_8]), var_8)), (arr_2 [i_3 + 1] [i_3 - 4]))) - 112))));
                            var_21 = ((!(((((((var_0 ? var_7 : 21933)) + 2147483647)) << (((-2074 + 2102) - 28)))))));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 12;i_10 += 1)
            {
                {

                    for (int i_11 = 4; i_11 < 11;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
                        {
                            var_22 *= ((+((+(((-32767 - 1) / (arr_25 [i_0] [i_0] [11] [i_0] [12])))))));
                            var_23 = (max(var_23, var_0));
                            arr_47 [i_11] &= ((((((26 ? var_8 : (arr_7 [i_9]))))) <= 16741));
                        }
                        for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
                        {
                            var_24 = (max(var_24, ((((-20876 ? (arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : ((var_0 ? 18 : (arr_23 [3] [i_9] [i_11 + 3] [i_11 + 3])))))))));
                            arr_50 [i_0] [i_9] [i_10] [i_9] = (min(((var_0 - (arr_44 [i_0] [i_9] [i_0] [8]))), -32760));
                            arr_51 [i_9] [i_9] [i_13] = ((+(max((((arr_4 [i_0] [i_9] [i_13]) ? (arr_34 [i_9] [i_10] [i_11]) : 32760)), (-64 | var_6)))));
                            var_25 = var_7;
                        }
                        for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
                        {
                            var_26 = (((arr_19 [i_9]) ? var_8 : ((((var_5 || (arr_19 [i_9])))))));
                            var_27 = (arr_28 [i_10 + 1] [i_9] [i_9] [i_0]);
                            var_28 += (((((18573 - ((max((arr_1 [8]), 51)))))) ? (!2073) : (((!var_1) ? (var_6 == 124) : (-13892 * 5368)))));
                            var_29 = (max((((arr_19 [i_9]) ? (arr_19 [i_9]) : (arr_19 [i_9]))), (arr_19 [i_9])));
                        }
                        var_30 = (min(var_30, 31));
                    }
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        var_31 = (min(var_31, ((((arr_3 [i_10 + 2]) >= (arr_3 [i_10 - 1]))))));
                        var_32 = var_1;
                        var_33 = arr_1 [i_10 + 1];
                        var_34 = (max(var_34, ((((32 ^ var_6) ? ((-(arr_25 [i_0] [i_10 + 2] [i_9] [i_15] [i_10]))) : (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    }
                    var_35 = ((((-43 ? (arr_46 [i_10 + 1] [i_10 + 1] [i_10 + 2] [i_10 + 2] [i_10 - 1] [i_10 + 1]) : (arr_46 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 + 2] [i_10 - 1]))) - (arr_46 [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10 + 2] [i_10 + 1] [i_10 - 1])));

                    for (int i_16 = 2; i_16 < 13;i_16 += 1)
                    {
                        arr_59 [i_9] [i_9] = (max(((((min(12490, 82))))), (((!-14285) * (arr_4 [i_0] [i_9] [i_9])))));
                        arr_60 [i_0] [i_0] [i_9] [1] = var_9;
                        var_36 = var_7;
                    }
                    var_37 = ((+(((arr_16 [i_0] [i_10 - 1] [i_9] [i_0]) - var_11))));
                }
            }
        }
        var_38 -= var_9;
        arr_61 [i_0] = var_6;
    }

    for (int i_17 = 0; i_17 < 24;i_17 += 1)
    {
        arr_64 [i_17] = -106;
        var_39 -= (arr_62 [i_17]);
    }
    var_40 = var_2;
    var_41 = (max(var_41, (((4158862425 ? ((var_9 << ((((max(var_3, var_11))) - 5812)))) : var_2)))));
    #pragma endscop
}
