/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, 16383));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = ((+((max((var_4 && var_6), (((arr_4 [i_0] [i_0]) && (arr_5 [i_0] [5] [i_0]))))))));

                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    var_16 = (((((((var_10 ? (arr_0 [i_1 - 2]) : (arr_5 [i_0] [i_1] [i_0])))) && (arr_7 [i_1] [i_1 + 2] [i_2] [i_2 - 2]))) ? (min((var_7 + 2768203524642080084), (var_4 % 16387))) : (arr_3 [i_0] [i_0] [i_0])));
                    var_17 = ((!(arr_8 [i_1 + 3] [i_2 - 2] [i_1 - 2])));
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    var_18 = ((63 == ((max(var_3, (arr_10 [i_1 + 4] [i_1 + 1]))))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_19 = ((var_1 && (((2768203524642080084 ? var_8 : var_11)))));
                            var_20 = 1;
                        }
                        var_21 = var_2;

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_22 = ((((var_7 ? 16401 : (arr_5 [i_0] [i_1] [i_3])))) || ((((arr_15 [i_0] [2] [i_3] [i_4] [3]) ? var_11 : var_3))));
                            var_23 = (arr_15 [i_0] [6] [i_1 - 1] [i_1] [i_1 + 3]);
                        }
                        var_24 = ((!(arr_18 [i_0] [i_1] [i_4])));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            {
                var_25 = (min(var_25, -16386));

                for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
                {
                    var_26 = (max(var_26, (((((((arr_16 [i_7] [i_8] [20]) >> (var_3 - 100)))) ? var_6 : ((max(var_2, (arr_13 [i_8])))))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 10;i_11 += 1)
                        {
                            {
                                var_27 ^= (max((max(8172378200812063166, ((var_13 ? var_2 : var_4)))), 0));
                                var_28 ^= 2;
                                var_29 = (-16383 / 23085);
                                var_30 |= ((var_7 ? (arr_29 [i_9]) : (min(var_11, 345025001))));
                                var_31 += (max((((((var_5 ? var_0 : var_10))) ? (((arr_17 [i_7] [i_7]) ? (arr_1 [i_8] [i_8]) : var_9)) : (!var_4))), (((max(-345025003, (arr_32 [i_7] [i_10]))) >> ((((var_5 ? 57469 : (arr_28 [i_7] [i_7] [6] [i_10]))) - 57447))))));
                            }
                        }
                    }
                    var_32 = ((var_3 ? 8172378200812063166 : (((-var_5 ? 1 : ((var_11 ? -119 : var_7)))))));
                    var_33 = ((~(((arr_5 [i_9] [i_9] [i_7 - 3]) * (arr_27 [i_7] [i_9] [i_7 - 3] [0])))));
                    var_34 = ((var_6 ? var_5 : (arr_16 [4] [i_8] [17])));
                }
                for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 3; i_14 < 8;i_14 += 1)
                        {
                            {
                                var_35 = ((((arr_15 [i_7] [i_12] [i_8] [i_12] [i_14 + 2]) ? var_2 : (arr_13 [i_8]))) + 345025024);
                                var_36 |= ((min(var_8, var_0)));
                            }
                        }
                    }
                    var_37 |= ((+(((arr_6 [i_7 - 2] [i_7 + 1] [i_7 + 1]) - (arr_6 [i_7 + 1] [i_8] [i_12])))));
                    var_38 = -8824758283134888237;
                }
                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    var_39 = ((((((arr_35 [i_7 - 2]) ? (arr_35 [i_7 - 2]) : var_0))) ? (((var_9 ? 0 : (arr_29 [i_7 - 3])))) : (((arr_9 [i_7] [i_7 + 1] [i_8]) - var_1))));
                    /* LoopNest 2 */
                    for (int i_16 = 2; i_16 < 9;i_16 += 1)
                    {
                        for (int i_17 = 3; i_17 < 9;i_17 += 1)
                        {
                            {
                                var_40 = ((+((((var_9 ? (arr_40 [0] [i_16] [i_15] [i_8] [i_7]) : (arr_18 [i_8] [i_15] [i_15])))))));
                                var_41 = (((((((arr_47 [2] [0] [i_15] [2] [0]) ? 1061189244 : 2768203524642080079)) > (arr_15 [i_16] [i_7 - 3] [i_15] [i_16] [i_16]))) ? ((((var_3 ? var_9 : var_11)) % ((min((arr_28 [i_17] [2] [i_15] [2]), var_6))))) : var_6));
                            }
                        }
                    }

                    for (int i_18 = 0; i_18 < 11;i_18 += 1) /* same iter space */
                    {

                        for (int i_19 = 0; i_19 < 11;i_19 += 1)
                        {
                            var_42 = (((((((min(var_2, var_1))) ? (arr_38 [i_8] [i_8] [i_8] [i_8] [i_8]) : (max((arr_11 [i_7 - 2] [i_8] [i_8] [i_18] [i_15] [i_19]), (arr_32 [i_15] [i_15])))))) ? 0 : ((1944483209 ? (arr_18 [i_7 - 3] [i_7 - 1] [i_15]) : var_5))));
                            var_43 = (arr_28 [i_7] [i_19] [i_15] [i_19]);
                            var_44 = (((arr_51 [i_7] [10] [i_18] [5]) >= (((((arr_42 [i_15] [i_8] [i_15]) == (arr_27 [i_7] [i_7] [6] [i_19]))) ? (min((arr_24 [4] [0] [i_15]), 19)) : var_5))));
                            var_45 ^= (max((max((arr_19 [i_18]), ((var_13 ? var_4 : (arr_28 [i_7] [i_7] [i_7] [i_7]))))), ((((((var_5 ? var_12 : var_7))) ? ((var_3 ? 1568661269 : (arr_35 [i_7]))) : ((min(var_0, 36))))))));
                        }
                        var_46 = (((((~(arr_44 [10] [i_15])))) ? ((((arr_47 [i_7] [i_8] [i_15] [i_15] [i_18]) ? var_8 : 3754124879525334359))) : ((((-23086 ? 34 : 3754124879525334359)) | var_1))));
                    }
                    /* vectorizable */
                    for (int i_20 = 0; i_20 < 11;i_20 += 1) /* same iter space */
                    {
                        var_47 = var_13;

                        for (int i_21 = 1; i_21 < 9;i_21 += 1) /* same iter space */
                        {
                            var_48 = var_7;
                            var_49 = -112;
                        }
                        for (int i_22 = 1; i_22 < 9;i_22 += 1) /* same iter space */
                        {
                            var_50 = ((var_13 ? 16546 : (arr_16 [i_7] [i_7] [i_7])));
                            var_51 = (((arr_11 [i_7] [i_7 - 1] [i_15] [i_15] [i_15] [1]) ? (arr_11 [i_7] [i_7 - 1] [i_8] [i_20] [i_15] [i_15]) : (arr_15 [i_7 - 2] [i_7 - 1] [i_15] [i_20] [i_22 + 2])));
                        }
                        for (int i_23 = 1; i_23 < 9;i_23 += 1) /* same iter space */
                        {
                            var_52 = (arr_41 [i_15]);
                            var_53 |= ((((arr_56 [i_7 - 2] [i_20]) && var_2)) ? (((8172378200812063165 ? var_11 : var_8))) : (((arr_33 [i_7] [i_15] [i_20] [i_23 - 1]) ? var_5 : var_7)));
                            var_54 = (((var_9 % 2147483647) ? var_11 : var_5));
                        }
                        for (int i_24 = 0; i_24 < 11;i_24 += 1)
                        {
                            var_55 = ((var_13 ? 1 : var_2));
                            var_56 = (max(var_56, (((var_4 ? 2147483647 : var_12)))));
                            var_57 += var_1;
                            var_58 = ((~(arr_15 [i_24] [i_20] [i_15] [i_8] [i_7])));
                        }
                    }
                }
                for (int i_25 = 0; i_25 < 11;i_25 += 1)
                {
                    var_59 += var_7;
                    var_60 = (var_9 ? (((~(((arr_9 [i_7] [i_7] [i_7]) ? var_3 : var_7))))) : (var_4 + 127));
                }
            }
        }
    }
    #pragma endscop
}
