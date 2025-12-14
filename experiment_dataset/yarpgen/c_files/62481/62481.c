/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_5, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_0] [i_0] = (((arr_6 [i_0] [i_0] [i_1 - 1] [i_0]) ? var_6 : (arr_7 [i_0] [i_1 - 1] [i_1 - 1] [i_2])));
                    var_16 = (((!1) >= ((var_1 - (arr_7 [i_0] [i_0] [i_0] [i_0])))));
                    arr_9 [i_0] [i_0] [i_0] = (((var_0 - var_1) ? (((arr_0 [i_0] [i_1]) - (arr_0 [i_0] [i_0]))) : ((109 ? 1 : 1883))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_17 = ((~((var_0 ? var_13 : (arr_10 [i_0] [i_0] [i_0] [i_0])))));
                    arr_13 [i_0] [i_0] [i_0] = var_6;
                }
                var_18 = (min(var_18, (arr_7 [i_0] [i_1] [i_1 - 1] [i_1 - 1])));
            }
        }
    }

    for (int i_4 = 3; i_4 < 17;i_4 += 1)
    {
        var_19 ^= (((((((var_3 != (arr_15 [1] [1])))))) ? (!1) : (((arr_15 [i_4] [4]) ? -1528685865682390537 : ((max(var_12, var_13)))))));
        arr_16 [i_4] [i_4] = (max((((arr_15 [i_4] [i_4]) ? (arr_15 [i_4] [i_4]) : (arr_15 [i_4 + 3] [i_4]))), (((var_1 > (arr_15 [i_4] [i_4]))))));
        var_20 = ((((1 ? (1 ^ 0) : 1)) | (((arr_15 [i_4 + 1] [i_4]) ? (arr_15 [i_4 - 3] [i_4]) : (arr_14 [i_4])))));
        var_21 = (((((min(var_12, (arr_14 [i_4]))))) ? ((((((arr_14 [i_4]) ? (arr_14 [i_4]) : var_4))) ? var_12 : (((var_5 ? var_12 : (arr_14 [i_4])))))) : (((var_3 ? (arr_15 [i_4 - 2] [i_4]) : (arr_15 [i_4 - 1] [i_4]))))));
        var_22 -= var_5;
    }
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        var_23 = var_9;
        var_24 = (min(((var_12 ? var_12 : var_6)), (arr_17 [i_5])));
        var_25 = (min((arr_18 [i_5 + 1]), (((-13 ? 1 : 8443)))));
        var_26 = (max(-var_6, (((arr_17 [i_5]) / (arr_17 [i_5])))));
        var_27 = (((min(var_6, ((-(arr_18 [i_5]))))) * (((-(((arr_17 [i_5]) / var_14)))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_28 ^= var_7;
            var_29 = (((arr_7 [i_6] [i_6] [i_6] [i_6]) ? (arr_7 [1] [i_6] [i_6] [i_7]) : var_5));
            arr_26 [i_6] [i_6] [i_7] = ((6 ? var_12 : (arr_24 [i_6])));
            arr_27 [i_6] [i_6] = (arr_0 [i_6] [i_7]);
            arr_28 [i_6] = (var_9 / var_3);
        }
        for (int i_8 = 1; i_8 < 14;i_8 += 1) /* same iter space */
        {
            arr_31 [i_6] = ((((var_13 ? var_5 : var_5)) * (((!(arr_11 [i_6] [i_6] [i_6]))))));

            for (int i_9 = 2; i_9 < 14;i_9 += 1) /* same iter space */
            {
                arr_35 [1] [i_9] [i_9] |= (~(var_6 / var_0));
                var_30 = (min(var_30, ((((((var_4 || (arr_25 [8])))) + (arr_29 [i_8 + 1] [i_8 - 1]))))));
            }
            for (int i_10 = 2; i_10 < 14;i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 4; i_12 < 13;i_12 += 1)
                    {
                        {
                            arr_45 [i_6] = (var_9 ? (((var_11 > (arr_42 [i_6] [i_6] [i_6] [i_11])))) : (((var_2 > (arr_5 [i_10] [i_8 + 1] [i_10] [i_6])))));
                            var_31 = ((var_9 > (arr_1 [i_11])));
                            var_32 = var_14;
                            var_33 ^= (arr_32 [i_6] [i_11] [i_12]);
                        }
                    }
                }
                var_34 = var_4;
            }
            for (int i_13 = 2; i_13 < 14;i_13 += 1) /* same iter space */
            {
                arr_48 [i_6] [i_8 + 1] [i_6] = (((arr_3 [i_13 - 1] [i_8] [i_6]) ? var_3 : var_6));
                arr_49 [i_6] [i_8] [6] |= (((-(arr_18 [i_6]))) > ((((var_0 > (arr_6 [i_6] [i_6] [i_6] [i_6]))))));
            }
            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                var_35 = (var_11 && var_6);
                var_36 = (!(arr_44 [i_8 + 1] [i_8 + 1] [i_8 + 1]));
            }
            arr_52 [i_6] [i_6] [i_8 + 1] = (arr_32 [i_6] [i_8] [i_6]);
            var_37 = (min(var_37, (((-((var_9 ? var_0 : (arr_21 [12]))))))));
            arr_53 [i_6] = ((-((0 ? 1 : 1))));
        }
        for (int i_15 = 1; i_15 < 14;i_15 += 1) /* same iter space */
        {

            for (int i_16 = 1; i_16 < 11;i_16 += 1)
            {
                arr_60 [i_6] = (((arr_7 [i_6] [i_15 - 1] [i_15 - 1] [i_16 + 3]) ? (arr_11 [i_6] [i_6] [i_6]) : (var_14 > var_7)));
                arr_61 [14] &= (((((var_10 || (arr_58 [i_6]))))) >= (arr_47 [i_6] [i_15] [i_16 + 1] [i_16 + 3]));
                var_38 -= (((arr_44 [i_6] [i_15] [i_16 - 1]) ? (!var_12) : var_14));
            }
            arr_62 [i_6] [i_15 - 1] = ((1867926167 ? 1804057639 : 3));

            for (int i_17 = 0; i_17 < 15;i_17 += 1)
            {
                arr_65 [i_6] [i_15] [i_17] [i_17] &= ((var_8 ? var_3 : var_4));

                for (int i_18 = 0; i_18 < 15;i_18 += 1)
                {
                    var_39 = var_14;
                    arr_68 [i_6] [i_15] [i_6] = var_8;
                    var_40 = (((((arr_5 [i_6] [i_6] [i_6] [i_6]) || (arr_38 [i_6] [i_15]))) ? (((var_3 ? var_2 : var_13))) : var_4));

                    for (int i_19 = 0; i_19 < 15;i_19 += 1)
                    {
                        arr_73 [i_6] [i_19] [i_17] [i_18] [i_19] [i_15] [i_18] |= ((!(arr_63 [i_17] [i_15 + 1])));
                        var_41 = var_0;
                    }
                }
                for (int i_20 = 0; i_20 < 15;i_20 += 1)
                {
                    var_42 += var_11;

                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        var_43 = (min(var_43, (arr_18 [i_15 - 1])));
                        arr_80 [i_6] [i_6] [i_6] [i_6] [i_21] [i_21] = (!var_3);
                        arr_81 [i_6] [i_15] [i_6] [i_6] [i_15] [i_21] [i_17] = (((((arr_43 [i_6] [i_6] [i_17] [i_20] [i_21] [i_15]) || var_13)) ? var_6 : (arr_4 [i_20] [i_15])));
                        arr_82 [i_6] [i_6] [i_17] [i_20] [i_17] [i_6] [i_21] = ((var_10 % (arr_74 [i_15 + 1] [i_6] [i_17])));
                    }
                    for (int i_22 = 1; i_22 < 13;i_22 += 1)
                    {
                        var_44 = (var_14 ? (arr_11 [i_6] [i_15 - 1] [i_22 + 1]) : (arr_57 [i_15 + 1] [i_6] [i_15 + 1]));
                        var_45 *= var_5;
                    }
                    for (int i_23 = 4; i_23 < 12;i_23 += 1)
                    {
                        arr_89 [i_6] [i_6] [i_6] [i_6] = ((var_4 + (arr_72 [i_6] [i_15 + 1] [i_23 - 4] [i_15 + 1] [i_15 + 1])));
                        arr_90 [i_6] [i_6] [i_17] [i_20] [i_6] = (((arr_56 [i_6] [i_15]) ? (arr_56 [i_17] [i_20]) : (arr_56 [i_15] [i_23 - 3])));
                        var_46 = var_8;
                    }
                    var_47 ^= var_7;
                }
            }
            for (int i_24 = 2; i_24 < 11;i_24 += 1)
            {
                arr_94 [i_6] [1] [4] [i_6] = ((arr_36 [i_24] [i_24] [i_24 + 4]) ? (arr_36 [8] [i_24 - 1] [i_24 - 1]) : (arr_47 [i_15 - 1] [i_24 - 1] [i_15 - 1] [i_15 - 1]));
                var_48 = ((-(arr_91 [i_15 + 1] [i_24] [i_24 + 1] [i_24 - 1])));
            }
            for (int i_25 = 3; i_25 < 12;i_25 += 1)
            {
                var_49 = ((var_2 && (arr_85 [i_15] [i_15 - 1] [i_25 - 3] [i_25])));
                var_50 = (arr_85 [i_6] [i_6] [i_25 + 2] [1]);
                arr_98 [i_6] [i_6] = (!var_11);
            }
            arr_99 [i_6] = (var_3 & var_9);
        }
        arr_100 [i_6] = ((~(arr_1 [i_6])));
    }
    #pragma endscop
}
