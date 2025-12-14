/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        var_12 ^= ((-525708816 > ((var_3 ? var_0 : (arr_2 [i_2] [i_0] [i_0])))));

                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            var_13 = var_11;
                            arr_11 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] = 124715311;
                        }

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_14 = (max(var_14, var_5));
                            arr_14 [i_5] [i_5] [i_3] [i_3] [2] [7] = (arr_12 [i_3] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3]);
                            arr_15 [i_0] [i_0] [i_2] [i_2] [i_3] [i_3] [i_3] = 31140;
                            var_15 *= (-2147483640 >= 2147483640);
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_16 = (((36028797018963967 < var_0) ? var_5 : (arr_13 [i_0] [i_0] [i_0])));
                            var_17 = (min(var_17, ((((!498326832) ? ((((arr_5 [i_6]) || 124715287))) : (arr_13 [i_3 - 1] [i_1] [10]))))));
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            arr_21 [i_3] [5] [i_2] [i_3] [i_2] = ((!(!var_11)));
                            var_18 = (max(var_18, (arr_12 [i_3] [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_2])));
                            var_19 = 1;
                        }
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        arr_24 [i_1] [i_2] = (2147483634 ? -2147483640 : (((arr_22 [7] [i_1]) ? var_10 : var_9)));
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((-(arr_23 [i_8] [i_1] [i_2] [i_0])));
                        var_20 ^= (((arr_18 [i_2] [i_1] [i_1] [i_2] [i_1] [i_8]) || 2225515448));
                    }
                    var_21 = 1;
                }
            }
        }
        arr_26 [i_0] = (((var_10 != var_1) >> (var_3 + 122)));
        var_22 = -253;
    }
    /* LoopNest 3 */
    for (int i_9 = 1; i_9 < 13;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    var_23 ^= ((((min((var_2 || 525708816), 35))) ? (~-694223134) : 525708821));
                    /* LoopNest 2 */
                    for (int i_12 = 4; i_12 < 13;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 12;i_13 += 1)
                        {
                            {
                                var_24 = ((1709020372 ? -694223165 : 8724902));
                                var_25 = ((-(((2325278383284744141 != 3335756959410321774) ? ((min(var_4, 2147483643))) : ((var_10 ? -2147483617 : -2359677356336941533))))));
                            }
                        }
                    }
                    var_26 = ((((min(0, (arr_35 [i_9])))) | ((((arr_37 [i_9] [i_9] [i_9 + 2] [i_9]) ? var_0 : (((arr_33 [i_11] [i_11] [i_9]) ^ var_6)))))));
                }
            }
        }
    }
    var_27 = ((((((!525708837) ? ((var_5 ? var_5 : 2616581429)) : (~173)))) ? var_9 : (max((var_5 + var_10), (~var_0)))));
    /* LoopNest 2 */
    for (int i_14 = 3; i_14 < 24;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 25;i_15 += 1)
        {
            {
                var_28 = (((arr_40 [i_14 - 1] [i_14 - 1]) ? (!3) : ((4294967286 ? 124 : 694223166))));
                arr_43 [i_14] [i_14] [i_15] &= (max((((!(arr_38 [i_14 - 2])))), (arr_38 [i_14 + 1])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_16 = 0; i_16 < 11;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 11;i_17 += 1)
        {
            for (int i_18 = 2; i_18 < 10;i_18 += 1)
            {
                {
                    var_29 = (max(var_29, ((((((((arr_51 [i_16] [i_17] [1]) >= (-16 > var_7))))) + ((max(4294967295, (arr_53 [i_17])))))))));
                    var_30 = ((!(((arr_34 [i_16] [i_17] [i_17]) || 124715311))));
                    arr_54 [i_16] [i_17] [i_16] [i_16] |= (((15 < (-9223372036854775807 - 1))));
                }
            }
        }
    }
    #pragma endscop
}
