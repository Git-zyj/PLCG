/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2 - 1] [i_3] [i_2] = ((((arr_6 [i_4 + 2] [i_4] [i_3 + 1]) ? ((var_0 ? -14 : (arr_4 [i_2]))) : 3173781751)));
                                var_20 = (arr_5 [i_0] [i_1] [i_0] [i_0]);
                                arr_12 [i_0] [i_1] [i_2] = (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                }
                var_21 += (max(((((((((arr_7 [i_1] [i_1] [i_1] [i_1] [i_1]) || var_5)))) == (var_11 & var_14)))), ((-var_17 - (max(var_7, var_1))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        {
                            arr_17 [i_0] [i_5] [i_0] [i_0] = (min((arr_14 [i_1]), (max((var_8 & -3), ((-16 ? (arr_6 [i_0] [i_0] [i_0]) : 14))))));
                            var_22 = (((1 ? 8 : (arr_16 [i_5] [i_1] [i_5] [i_6]))));

                            /* vectorizable */
                            for (int i_7 = 3; i_7 < 17;i_7 += 1)
                            {
                                arr_20 [i_7] [i_5] [i_5] [i_1] [i_5] [i_0] = (((0 | var_12) ? -868567656 : (arr_19 [i_7 - 1] [i_7 - 3] [i_7 - 1] [i_7 + 1] [i_7 - 3])));
                                var_23 += 2694869233;
                                var_24 = var_16;
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_5] = ((((16 ? 9007199254740991 : (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (~var_10) : (arr_15 [i_0] [i_1] [i_5] [i_7 - 3] [i_7]));
                            }
                            for (int i_8 = 0; i_8 < 18;i_8 += 1)
                            {
                                var_25 = (((((1600098053 && var_11) ? ((var_9 ? (arr_22 [i_0] [i_5] [i_0]) : (arr_7 [i_5] [i_5] [i_5] [i_5] [i_8]))) : (arr_19 [i_0] [i_0] [i_5] [i_5] [i_8])))) ? ((max((229 < var_0), (arr_18 [i_0] [i_5] [i_5] [0])))) : (max((arr_23 [i_1] [i_5]), (min(var_11, (arr_16 [i_5] [0] [0] [i_6]))))));
                                arr_25 [i_8] [i_5] [i_5] [i_5] [i_0] = (((arr_10 [i_8] [i_6] [i_1] [i_1] [i_0]) + (arr_9 [i_0] [i_1] [i_5] [3] [i_8])));
                                var_26 = (arr_8 [i_0] [i_0] [i_0] [i_0] [1]);
                                arr_26 [i_5] [i_6] [i_5] [i_5] [i_5] = var_7;
                            }
                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 18;i_9 += 1)
                            {
                                arr_29 [14] [i_1] [i_5] [i_1] [i_9] [i_1] = ((~((14319781124139117669 ? -9223372036854775789 : 1))));
                                var_27 ^= (arr_2 [i_0]);
                                var_28 = (arr_0 [i_5] [10]);
                                var_29 = ((arr_27 [i_0] [i_1] [i_5] [i_5] [i_5] [i_9]) && (arr_19 [i_9] [i_0] [i_5] [i_1] [i_0]));
                            }
                        }
                    }
                }

                for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                {
                    var_30 = (max(var_30, (((((var_7 ? (var_15 % var_3) : ((((arr_13 [i_0] [i_0] [i_1] [i_0]) ? (arr_22 [i_10] [7] [i_0]) : var_16))))) == ((((((2138544286 ? 1043256047 : -9007199254740983)) >= (arr_24 [i_0] [i_0] [i_0] [i_1] [i_10] [i_10] [i_10]))))))))));
                    arr_33 [i_0] [i_0] [i_10] = ((-(((arr_19 [i_10] [i_1] [i_1] [i_0] [i_0]) ? (arr_19 [i_0] [i_1] [i_1] [i_0] [i_10]) : (arr_19 [i_0] [4] [17] [i_1] [i_0])))));
                    var_31 = ((var_4 - ((((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) >= ((max(1, -46))))))));

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            var_32 = var_11;
                            var_33 = (((((arr_2 [i_0]) + 2147483647)) << 1));
                            var_34 = (arr_7 [i_1] [i_11] [i_10] [i_1] [i_1]);
                        }
                        arr_40 [i_11] [i_0] [i_0] = -23509;
                        var_35 = (min(var_35, 3536896553));
                        var_36 = (((arr_4 [i_1]) >> (((arr_4 [i_0]) - 16474406065912679384))));
                        var_37 = (((var_17 && (arr_22 [i_10] [i_1] [i_0]))));
                    }
                }
                for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
                {
                    var_38 = ((((min((max(1, var_7)), (arr_36 [i_13] [i_13] [i_1] [i_0] [i_0])))) == (((((868567656 ? 1 : -41)) != (!1))))));

                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        var_39 = (((arr_5 [i_13] [i_13] [i_1] [i_0]) ? (((arr_30 [i_0] [i_1] [i_13]) ? 19 : 321345810)) : var_3));
                        var_40 = ((31457280 ? var_18 : (((arr_14 [i_0]) ? var_14 : 23509))));
                        arr_46 [i_0] [i_1] = (!23509);
                    }
                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        var_41 ^= var_0;

                        for (int i_16 = 0; i_16 < 18;i_16 += 1)
                        {
                            arr_53 [i_0] [15] [i_13] [i_13] [i_15] [i_16] [i_16] = (!(arr_50 [i_0] [i_0]));
                            arr_54 [i_1] = 65;
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            arr_59 [i_0] [i_1] [i_13] [11] [i_17] [i_17] = ((2016446434 & ((var_0 ? (arr_45 [i_0] [i_0] [i_1] [i_0]) : (arr_31 [i_0])))));
                            var_42 = (arr_38 [i_1] [i_13] [i_15]);
                        }
                        var_43 = (((-59 ? (arr_49 [i_0] [i_1] [i_13] [i_15] [i_15] [i_15] [i_13]) : var_3)));
                        var_44 = (min(1600098053, 249));
                        var_45 = var_6;
                    }
                    arr_60 [i_1] [i_13] = 59;
                }
            }
        }
    }
    var_46 = ((var_15 ? var_13 : (min(var_3, (~var_0)))));
    var_47 |= ((((1 ? -2106587781 : (!var_14))) & 183));
    #pragma endscop
}
