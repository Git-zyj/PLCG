/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = (min(var_11, (((0 ? ((((((arr_0 [i_0] [18]) ? (arr_1 [i_0]) : (arr_0 [5] [11])))) ? -var_2 : (((arr_0 [i_0] [i_0]) ? 0 : var_2)))) : (((arr_0 [i_0] [15]) ? var_0 : (arr_1 [i_0]))))))));
        var_12 = ((((((!var_9) ? ((~(arr_1 [i_0]))) : ((var_7 ? -5 : var_2))))) ? ((((min((arr_1 [i_0]), 1))) - (arr_0 [i_0] [i_0]))) : ((-182148274 & (arr_1 [i_0])))));
        var_13 |= (((+((((arr_0 [i_0] [i_0]) != (arr_1 [i_0])))))));
        var_14 = (((arr_1 [i_0]) ? (((max((arr_1 [i_0]), var_1)))) : (arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        arr_4 [i_1] [i_1 + 2] = (((arr_1 [i_1 + 1]) ? (((arr_1 [i_1 + 3]) & (arr_1 [i_1 - 1]))) : (((arr_1 [i_1 + 3]) ? var_2 : (arr_1 [i_1 - 1])))));
        arr_5 [i_1] = ((((min((arr_3 [i_1 + 2] [i_1 + 1]), (arr_1 [i_1 + 1])))) ? ((var_4 ? (~93) : 0)) : (((arr_0 [i_1 + 1] [i_1 + 2]) % ((~(arr_3 [i_1] [i_1])))))));
        var_15 = (~93);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    {
                        arr_14 [0] [9] [7] [i_3] [i_4] [i_4] = (((~var_3) ? (arr_1 [0]) : (((((8626220566898993864 ? var_4 : var_7))) * var_7))));
                        arr_15 [i_1] [i_2] [i_1] [i_4 + 2] [5] = ((((arr_12 [i_1 + 2] [i_2] [1] [i_4 - 2] [10]) ? (arr_12 [i_4] [i_1] [i_3] [i_1] [i_1]) : (arr_12 [i_1 + 1] [i_2] [1] [i_4] [i_4 + 2]))));
                    }
                }
            }
        }
        arr_16 [i_1] = (((var_2 ? (arr_10 [i_1 + 2] [i_1] [i_1] [i_1] [i_1 + 2]) : var_6)));
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_16 = (min((((((var_9 ? 0 : -7795162567651297678))) ? (arr_17 [i_5]) : (arr_6 [i_5] [i_5] [i_5]))), (((~(arr_12 [i_5] [i_5] [i_5] [3] [i_5]))))));
        var_17 = var_0;
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    {
                        var_18 = (max(var_18, var_7));
                        var_19 = (min(var_19, ((((arr_19 [i_7]) * (arr_6 [i_5] [i_7] [i_8]))))));

                        /* vectorizable */
                        for (int i_9 = 2; i_9 < 10;i_9 += 1)
                        {
                            var_20 = (min(var_20, ((((((var_7 ? -17 : (arr_30 [12] [i_9 - 1] [12])))) ? (((arr_8 [i_9] [i_6] [i_6] [i_6]) ? -90 : (arr_32 [i_7] [i_6] [i_7] [i_8] [i_9]))) : var_9)))));
                            var_21 = (min(var_21, ((((((-805911160 ? var_3 : 0))) ? var_8 : ((var_8 ? 5 : var_0)))))));
                            arr_33 [i_5] = (((arr_10 [i_9 + 4] [i_9 - 2] [i_9] [i_9 - 1] [i_9]) ? (arr_10 [i_9 + 4] [i_9] [1] [i_9] [i_9]) : (arr_10 [i_9 - 2] [i_9] [1] [i_9 - 2] [4])));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            arr_37 [i_5] [i_5] [i_10] = -29282;
                            var_22 = (((arr_17 [i_6 - 1]) ? (arr_17 [i_6 + 1]) : 107));
                        }
                        arr_38 [i_5] = (max(((var_9 ? (arr_27 [i_5] [i_6 + 1] [i_5] [i_8]) : (arr_27 [i_6] [i_6 + 1] [5] [1]))), ((-var_4 ? var_6 : (-13 != var_2)))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 2; i_11 < 19;i_11 += 1)
    {
        var_23 *= -174395005;
        var_24 = (((((arr_39 [i_11]) * (arr_40 [i_11]))) << ((((var_1 ? var_2 : (arr_40 [0]))) - 13491))));
        arr_41 [16] = ((-((var_8 ? 18446744073709551594 : (arr_39 [i_11])))));
    }
    /* LoopNest 2 */
    for (int i_12 = 1; i_12 < 19;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 17;i_13 += 1)
        {
            {
                var_25 = ((~(min((arr_40 [9]), ((min(1, -65)))))));
                var_26 = (arr_44 [i_12]);
                var_27 = ((((((arr_42 [i_12 - 1]) ? (30199 & var_1) : ((1 ? 55072 : 4398046511103))))) ? (((((-4491 ? (arr_43 [i_12 - 1] [i_13]) : var_1)) >> (((((arr_43 [4] [i_13]) ? var_2 : var_2)) - 13468))))) : (((arr_1 [i_13 + 3]) ? (arr_39 [i_12 - 1]) : ((var_10 ? var_2 : 1110163085))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_14 = 1; i_14 < 20;i_14 += 1)
    {
        for (int i_15 = 2; i_15 < 18;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 20;i_16 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 22;i_17 += 1) /* same iter space */
                    {
                        var_28 = (arr_54 [1]);
                        var_29 = (arr_50 [i_15 + 4] [i_15 + 2]);
                        var_30 = (((arr_52 [i_14] [i_14] [i_14 - 1]) ? (arr_52 [i_14] [i_14] [i_14 + 2]) : (arr_52 [14] [i_14] [i_14 - 1])));
                    }
                    for (int i_18 = 0; i_18 < 22;i_18 += 1) /* same iter space */
                    {
                        var_31 = var_6;
                        arr_59 [i_14] [i_15] [i_16] [i_14] = ((-(((((min(var_2, 28)))) & ((var_8 ? var_3 : (arr_56 [i_18] [i_18] [i_16])))))));
                        arr_60 [i_16] = ((((min(var_1, (arr_46 [i_15])))) ? var_10 : (((((arr_46 [i_14]) > (arr_49 [i_14 + 2] [i_15] [i_15])))))));
                    }
                    arr_61 [i_16] [i_16] [i_16] = 5;
                }
            }
        }
    }
    #pragma endscop
}
