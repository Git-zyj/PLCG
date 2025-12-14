/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = ((((max(1, 16129))) ? (~0) : ((1 ? (arr_3 [i_0 + 3]) : (arr_2 [i_1 + 2])))));
                var_14 &= (~1);
                var_15 -= (max(((var_3 ? ((((arr_2 [2]) ? 2164 : 1))) : ((2 ? var_7 : var_11)))), (((36389 ? (arr_2 [i_0 + 3]) : (arr_2 [i_0 + 1]))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    var_16 = (max(var_16, (((-(arr_0 [i_0 + 2] [i_1 - 2]))))));
                    arr_6 [i_0] [i_0] [i_0] [i_0 - 2] = (((-1392954341 ? var_10 : var_11)) << 0);
                    var_17 *= ((1 ? (arr_1 [i_1 - 1] [i_1 + 1]) : var_3));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_18 = (min((arr_10 [i_5] [i_1] [i_3] [i_1] [0]), var_3));
                                var_19 &= (max((~var_4), (~var_5)));
                            }
                        }
                    }
                    arr_16 [i_3] = (arr_9 [i_3] [i_0 + 2] [i_3]);
                    arr_17 [i_0] [i_3] [i_3] = max(1, 1);
                }
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    var_20 = (arr_13 [i_0] [i_1] [i_1] [i_6] [i_6]);

                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        var_21 = -44;
                        var_22 = (((((((((3 ? var_8 : 1)) + 2147483647)) >> (arr_10 [i_0 + 1] [i_0] [i_1] [i_0] [i_7])))) ? ((((max(var_6, 1))) ? ((1 ? 0 : 1)) : (!var_3))) : 1));

                        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            var_23 |= ((-(((arr_14 [i_0 - 2] [i_6] [i_7 - 1]) ? (arr_14 [i_0] [i_7 + 2] [i_8]) : (arr_14 [11] [i_6] [11])))));
                            arr_25 [i_6] [i_6] [10] [i_6] = (min((((arr_10 [i_0] [i_7] [i_0] [i_1] [i_0]) ? ((min(var_8, (arr_1 [i_6] [i_6])))) : (((11398690883303124839 > (arr_19 [i_6] [i_1] [i_6] [i_1])))))), (((arr_8 [i_0] [i_7 + 1]) ? (arr_8 [14] [i_7 - 1]) : (arr_8 [i_0] [i_7 + 1])))));
                            var_24 = ((((1 & (arr_11 [i_6] [i_6] [i_6])))) ? 1 : ((((min(7048053190406426789, var_9))) ? var_1 : (arr_8 [11] [i_0]))));
                            var_25 = -var_6;
                            var_26 = ((~(arr_4 [i_6] [i_6] [3] [i_6])));
                        }
                        for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                        {
                            var_27 = var_4;
                            var_28 = ((((max((arr_19 [i_6] [i_7 + 1] [i_7 + 1] [i_9]), (arr_19 [i_6] [i_7 + 2] [i_9] [14])))) ? ((min((arr_12 [i_6] [i_7 - 1] [i_7 - 1] [i_6]), var_3))) : (max(-5363240210464896343, var_9))));
                            arr_29 [i_0] [i_0] [i_6] [i_6] [i_9] [10] [i_1] = 1;
                        }
                        for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
                        {
                            arr_32 [i_6] = ((max((arr_22 [i_1] [i_1 - 1] [i_1 - 2] [13] [i_1]), (arr_22 [i_0 - 1] [i_1] [i_6] [i_7] [i_10]))));
                            arr_33 [i_0 - 2] [i_0] [i_0] [i_6] [i_6] [i_0] [4] |= (max(var_8, (((arr_18 [i_10]) ? (arr_18 [i_0 - 1]) : (arr_18 [i_0 + 2])))));
                            var_29 *= (max(var_4, 0));
                        }
                        arr_34 [i_0] [i_6] [i_6] [i_7] [i_1 - 2] = var_0;
                    }
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        var_30 = (((((168 ? var_11 : var_6))) ? (arr_10 [i_0] [i_1] [i_1] [i_0] [i_11]) : ((-(arr_9 [i_0 + 2] [i_1 - 1] [i_6])))));
                        var_31 = (min(1, 11398690883303124826));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 18;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 16;i_14 += 1)
            {
                {
                    arr_47 [i_13] = (((arr_39 [i_14 + 1]) ? ((((arr_39 [i_14 - 1]) || (arr_39 [i_14 + 1])))) : (((arr_39 [i_14 + 2]) ? 153 : (arr_39 [i_14 + 2])))));
                    var_32 = (min(88, var_0));
                    arr_48 [i_13] [i_13] [i_14 - 1] = ((((((arr_39 [i_12]) ? (arr_39 [i_13]) : var_7))) ? ((((arr_39 [i_13]) || 1))) : (arr_39 [i_12])));
                    var_33 = 1;
                }
            }
        }
    }
    var_34 = ((min(((max(93, var_9))), ((var_10 ? var_8 : var_10)))));
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 23;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            {
                arr_53 [i_16] [i_16] = -var_7;
                arr_54 [i_15] [i_16] = min(((((((~(arr_52 [15] [15] [10])))) ? ((32761 ? var_5 : var_0)) : (~140)))), (max(18446744073709551610, 4294967295)));
                var_35 = ((((!(arr_49 [i_16]))) ? (20341 % 132) : (((((var_7 ? var_7 : 18446744073709551610))) ? ((min((arr_51 [i_15] [i_16]), var_5))) : (arr_51 [i_15] [i_15])))));
            }
        }
    }
    var_36 = var_3;
    #pragma endscop
}
