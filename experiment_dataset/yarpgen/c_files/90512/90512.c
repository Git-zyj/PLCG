/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((var_12 ? 9 : ((((((max(127, 65535))) >= (!var_11))))))))));

    for (int i_0 = 2; i_0 < 10;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_14 = ((((((arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]) ? ((var_12 ? var_1 : (arr_2 [i_3]))) : (((var_4 << (var_8 - 1495557769))))))) ? var_6 : var_7));
                        arr_15 [i_2] = ((-((((((var_1 ? var_12 : var_1))) || var_6)))));
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_15 = (arr_5 [i_0 - 1]);
                        arr_18 [i_2] [i_2] [i_2] = ((((((max(var_10, var_8)) | ((~(arr_5 [i_0])))))) ? ((~((var_2 ? var_1 : (arr_3 [i_1]))))) : var_5));

                        for (int i_5 = 2; i_5 < 11;i_5 += 1)
                        {
                            arr_22 [i_5] [i_2] [i_4] [i_2] [i_2] [i_0] = (arr_10 [i_5]);
                            var_16 = ((((((!(arr_20 [i_4] [i_4] [i_1] [i_1] [8])))) % (arr_21 [i_0]))));
                            arr_23 [i_0] [i_0] [i_2] [i_2] [i_5] = ((~((var_8 ^ ((var_8 ? var_7 : var_11))))));
                            var_17 = (max(var_17, ((max(((~(var_8 || var_11))), (~var_12))))));
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_18 = (min(var_18, var_5));
                            arr_26 [i_2] [i_1] [i_2 - 1] [i_2 - 1] [1] = ((~((max((((var_8 > (arr_0 [i_0])))), (arr_11 [i_0] [i_0] [i_2 + 1] [i_4] [i_0]))))));
                            var_19 = (arr_19 [i_0] [i_2 + 1]);
                            arr_27 [i_0] [i_1] [i_2] [2] [i_0 - 2] [i_2] [i_2] = ((((~(arr_2 [i_0]))) != (arr_24 [i_0 - 2] [i_0 - 2])));
                        }
                    }
                    for (int i_7 = 3; i_7 < 8;i_7 += 1)
                    {
                        var_20 *= ((((max(var_8, 8924950412334255909))) && ((((arr_5 [i_2 - 1]) ? (arr_5 [i_2 + 1]) : (arr_5 [i_2 - 1]))))));
                        var_21 = (min(var_21, (((-127 ? ((((4294967295 != (arr_14 [i_7 - 3] [i_7 - 2] [i_7 - 3] [i_7 - 3]))))) : (arr_19 [i_0 + 2] [i_7 - 2]))))));
                        var_22 = (max((arr_25 [i_0] [10] [i_2] [i_7] [i_2]), (arr_9 [9] [i_2] [i_2] [i_7])));
                        var_23 = ((-((-(var_12 >= var_5)))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_24 ^= (((((arr_14 [i_2] [4] [i_2 - 1] [i_2 - 1]) ? var_4 : (arr_14 [i_0] [i_2 - 1] [i_2 + 1] [i_8]))) / -var_6));
                                var_25 = ((((((arr_32 [i_0] [i_1] [i_2 - 1] [5] [i_2]) ? (arr_32 [i_0 + 2] [i_1] [i_8] [i_8] [i_2]) : 18446744073709551615))) ? ((var_2 ? ((79 ? (arr_19 [i_0 - 1] [6]) : (arr_33 [i_1] [i_1]))) : (arr_19 [9] [1]))) : (arr_29 [i_0] [i_0] [i_0] [i_0])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 8;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 11;i_11 += 1)
                        {
                            {
                                arr_42 [i_0] [i_0 - 1] [i_0 - 1] [i_2] [i_0 - 1] = (((((((min(var_2, 9))) * (min(var_7, var_11))))) && (((var_2 ^ ((max(1, var_5))))))));
                                var_26 = (min(var_26, (((!((!((max(var_2, (arr_5 [i_11])))))))))));
                                var_27 = 4294967295;
                                var_28 = (arr_13 [i_0] [i_0] [i_11] [i_10] [7]);
                            }
                        }
                    }
                }
            }
        }
        var_29 = (arr_17 [i_0] [i_0]);

        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            arr_46 [i_0] [i_0 - 2] [i_0] = (((((((((arr_19 [i_12] [i_0]) & 181))) ? (((((arr_38 [i_0] [i_0] [i_0]) && (arr_30 [i_12] [i_12] [i_0] [i_0]))))) : (min((arr_24 [i_12] [i_12]), var_6))))) ? (arr_34 [i_0] [i_12] [i_12]) : ((~((~(arr_6 [i_0])))))));
            var_30 ^= 2135;
            arr_47 [i_0] = (arr_14 [i_0 + 1] [8] [i_12] [i_12]);
            arr_48 [i_0] = (max(((((((arr_10 [i_12]) ? var_8 : var_0))) ? -var_7 : (((arr_6 [7]) + (arr_21 [i_12]))))), (((-(var_10 / var_0))))));
        }
        var_31 = (((((~((97 ? var_0 : (arr_5 [i_0 - 2])))))) ? (((arr_12 [i_0] [i_0 - 2] [i_0 + 2] [i_0]) ? (arr_12 [i_0] [i_0 + 1] [i_0 - 2] [i_0]) : (arr_12 [i_0] [i_0 - 1] [i_0 + 1] [i_0]))) : (max((arr_9 [i_0] [i_0] [i_0] [i_0]), ((-(arr_0 [i_0])))))));
        var_32 |= (((arr_36 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0 + 2] [i_0 + 1]) ? (arr_4 [i_0 + 1]) : ((min((arr_11 [i_0 - 1] [i_0 - 2] [i_0 + 1] [1] [1]), ((var_1 / (arr_17 [i_0] [7]))))))));
    }
    for (int i_13 = 2; i_13 < 10;i_13 += 1) /* same iter space */
    {
        var_33 = 5;
        var_34 ^= ((16 ? (arr_0 [6]) : var_0));

        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {

            for (int i_15 = 0; i_15 < 12;i_15 += 1)
            {
                var_35 = (arr_19 [i_13] [i_13]);
                arr_56 [i_15] = (~(arr_36 [i_13] [i_14] [i_14] [4] [i_15]));
            }
            var_36 = (arr_14 [1] [i_14] [i_13] [i_13]);
        }
        for (int i_16 = 2; i_16 < 9;i_16 += 1)
        {
            var_37 = (max((arr_44 [i_16] [i_13 + 2]), (max(var_11, var_4))));
            var_38 = (max(var_38, var_3));
            arr_59 [i_16] [i_13] |= max((((((max(var_2, var_1))) ? (arr_1 [i_13 - 2]) : (arr_14 [10] [1] [i_13] [i_13 - 1])))), (((arr_21 [i_13 - 2]) * ((((9223372036854775783 >= (arr_10 [i_16]))))))));
            var_39 = (arr_1 [i_13]);
        }
        /* vectorizable */
        for (int i_17 = 4; i_17 < 11;i_17 += 1)
        {
            arr_64 [i_17] = ((arr_50 [i_13] [i_13]) ? ((((arr_0 [i_17]) != (arr_40 [i_13] [i_13 - 2] [i_13] [i_17] [8] [i_17 - 3] [i_17])))) : (arr_3 [i_13 + 1]));
            arr_65 [i_17] = var_9;
            arr_66 [i_17] = var_10;
            var_40 = (arr_60 [i_13] [i_13]);
        }
        arr_67 [i_13] [6] = ((((min((max(var_8, (arr_8 [i_13] [i_13 - 2]))), (((!(arr_63 [i_13]))))))) != (((~var_8) & ((14773955654200422487 * (arr_62 [i_13] [i_13])))))));
    }
    #pragma endscop
}
