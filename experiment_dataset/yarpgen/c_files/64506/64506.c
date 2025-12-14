/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((((((224 ? var_12 : var_9)) / var_12)) << ((var_4 ? (var_11 > var_8) : (var_6 & var_2)))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_14 = (min(var_14, ((((arr_1 [i_0 + 1]) ? (28688 + var_12) : (((var_2 ? var_2 : (arr_0 [i_0 + 1] [i_0 + 1])))))))));
        arr_2 [i_0] [i_0] = 95;
        arr_3 [0] |= (arr_0 [i_0 + 1] [i_0]);
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 14;i_2 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {

                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    arr_16 [i_1 + 1] [i_1] [i_3] [i_4] = (arr_4 [i_3] [i_1 + 1]);
                    var_15 = ((228 / (arr_4 [1] [i_2])));
                }
                for (int i_5 = 4; i_5 < 14;i_5 += 1)
                {
                    arr_21 [i_1] = (((arr_19 [i_2 + 1] [i_2 + 1] [i_1]) ? (arr_19 [i_2 - 1] [i_2] [i_1]) : (arr_5 [i_2 - 1] [i_2 + 1])));
                    var_16 = arr_9 [i_5] [i_2] [i_1];
                }
                var_17 ^= ((!(((arr_14 [i_1] [i_1] [i_3]) <= (arr_5 [i_1] [i_1])))));
            }
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                var_18 = (min(var_18, (arr_13 [i_1] [i_2] [i_6] [i_6])));
                var_19 = (((((var_5 ? (((~(arr_17 [i_2] [i_1 + 1])))) : (min(var_0, var_10))))) ? (arr_23 [i_6]) : ((-(arr_5 [i_2 + 1] [i_2])))));
                arr_24 [i_1] [i_2] [i_1] = var_4;
                var_20 = (~(~var_11));
            }
            var_21 = (((((max((arr_15 [i_1] [i_1] [i_2 + 1] [i_2 + 1]), var_4))) ? ((var_11 ? (arr_18 [i_2] [i_2 + 1] [i_1 - 1] [i_1]) : (arr_18 [i_1 - 1] [i_1] [i_1] [i_1]))) : (arr_17 [i_2] [6]))));

            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        {
                            var_22 = ((var_0 ? (max((arr_26 [2] [i_2]), var_11)) : (min(var_11, (arr_25 [i_1] [i_1 - 1] [i_1])))));
                            arr_34 [i_1 - 1] [i_2 - 1] [i_7] [i_7] [i_8] [i_1] = ((-(((arr_30 [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2 + 1]) * (arr_30 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2] [i_2 + 1])))));
                            var_23 = ((!((((((308438353518784255 ? -24430 : (arr_7 [i_1] [i_7 - 1] [i_9])))) ? (((arr_33 [i_1]) - (arr_25 [i_1] [i_1] [i_1]))) : ((((arr_4 [i_1] [i_1]) ? (arr_25 [i_1] [i_8] [i_1]) : (arr_14 [i_1] [3] [3])))))))));
                        }
                    }
                }
                var_24 = (min(var_24, ((max((arr_5 [i_1] [11]), var_12)))));
                arr_35 [1] [i_2] [i_7] |= ((((((arr_20 [i_2 + 1]) ? -24452 : var_7))) ? (((((max(var_6, (arr_14 [3] [i_2 + 1] [6])))) ? ((4524452196948513608 ? (arr_26 [i_1] [i_1]) : (arr_25 [i_1] [2] [12]))) : 22508))) : ((-(((arr_12 [i_1] [14]) ? var_4 : (arr_4 [i_2 + 1] [i_7])))))));
            }

            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_25 |= (min((!28673), -220));
                arr_38 [i_1] [i_1] [i_10] = ((!((((arr_36 [i_1] [i_1] [i_1] [i_1 - 1]) ? (((arr_4 [i_1] [i_2 + 1]) ? var_5 : 7)) : (arr_27 [i_1]))))));

                /* vectorizable */
                for (int i_11 = 1; i_11 < 13;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        arr_44 [i_1] [i_1] [i_1] [10] [i_1 - 1] [i_1] |= var_8;
                        var_26 = (min(var_26, (arr_15 [i_1] [i_1] [i_1] [i_1 - 1])));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        arr_47 [2] [i_2] [i_2] [1] [1] [i_2] [i_2 - 1] |= ((!(((var_4 ^ (arr_14 [i_11] [i_2 - 1] [i_1]))))));
                        var_27 = var_1;
                    }
                    for (int i_14 = 2; i_14 < 14;i_14 += 1)
                    {
                        arr_50 [2] [i_2] [i_10] [i_11] [i_11] |= 1209986901162614686;
                        var_28 ^= (((arr_11 [14] [i_1] [i_1 - 1] [i_11 - 1]) ? (arr_11 [1] [i_1 + 1] [i_1 - 1] [i_11 - 1]) : (arr_11 [10] [i_1 + 1] [i_1 - 1] [i_11 - 1])));
                    }
                    var_29 = var_12;
                }
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    var_30 &= ((((arr_42 [i_1] [i_1 - 1] [3] [i_15] [i_1 - 1]) ? (var_12 == var_12) : (max((arr_43 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [5]), var_8)))));
                    var_31 = (max(var_31, (((~((((arr_49 [i_2] [1] [i_2 + 1] [i_10] [i_15]) < (arr_49 [i_1] [14] [i_2 + 1] [i_2] [i_2])))))))));
                    var_32 -= arr_36 [i_1 - 1] [i_2] [i_10] [6];
                    arr_55 [i_1] [i_1] [i_2] [i_10] [i_1] [i_1] = ((-(max((arr_10 [i_1 - 1] [i_1 + 1] [i_2 + 1]), (arr_10 [i_1 - 1] [i_1 + 1] [i_2 + 1])))));
                    arr_56 [i_1] [i_2] [i_10] [i_15] = (((min(var_2, (arr_31 [i_1 - 1] [i_10] [i_10]))) & (((min((arr_42 [i_1] [i_2 + 1] [i_10] [i_15] [i_1]), (arr_11 [i_1] [i_1] [i_1] [i_15]))) / (max((arr_42 [i_1] [i_2] [i_10] [i_10] [i_15]), 524287))))));
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {
                    var_33 -= (arr_6 [i_1]);
                    arr_59 [i_10] [i_10] [i_1] = (((arr_5 [i_1 + 1] [i_1 + 1]) / (arr_5 [i_1 - 1] [i_1 - 1])));

                    for (int i_17 = 1; i_17 < 13;i_17 += 1)
                    {
                        var_34 = (min(var_34, var_6));
                        var_35 = (~var_10);
                    }
                }
                var_36 = (max(var_36, (arr_36 [i_1] [i_1] [i_1] [i_1])));
            }
            var_37 = var_2;
        }
        for (int i_18 = 1; i_18 < 14;i_18 += 1) /* same iter space */
        {
            var_38 ^= (arr_20 [i_1 + 1]);
            var_39 = (max(var_39, ((((-var_0 ? (arr_29 [i_1] [i_18] [i_18]) : 9223372036854775802))))));
        }
        for (int i_19 = 1; i_19 < 14;i_19 += 1) /* same iter space */
        {
            var_40 = -31761;
            arr_69 [i_1] = ((((((var_7 ? (arr_68 [i_1] [i_19]) : var_9)) - 1)) * (((var_7 ^ ((var_8 ? (arr_66 [i_1] [i_19]) : var_11)))))));
        }
        var_41 -= var_11;
        arr_70 [i_1] = (((((var_4 ? 8552331314311965899 : (arr_66 [i_1] [8])))) ? (arr_52 [i_1] [i_1 - 1] [i_1 - 1] [i_1]) : 28686));
    }
    /* vectorizable */
    for (int i_20 = 3; i_20 < 18;i_20 += 1)
    {
        var_42 += (((arr_72 [i_20] [i_20]) ? (arr_73 [i_20 + 1] [i_20 - 3]) : (arr_71 [i_20 - 3])));
        arr_74 [i_20] &= (((var_10 ? (arr_71 [i_20]) : var_1)));
    }
    #pragma endscop
}
