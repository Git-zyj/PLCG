/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;
    var_21 = (min(var_21, 2707538499));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_22 = ((-var_7 ? ((2707538483 ? 4707003927515293556 : 35137)) : ((max((157627460 | 35), var_10)))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_23 *= ((-(arr_8 [i_3])));
                                var_24 = (!var_10);
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_25 = (min((((!((max(var_16, (arr_6 [i_0] [i_1] [i_2]))))))), 220));
                        var_26 = (!65535);
                    }
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_27 = (arr_3 [i_1 + 1] [i_1 + 1] [i_2]);
                        arr_16 [i_0] [i_1] = ((min(-6194959390202197515, 30391)));
                        var_28 |= var_12;
                        var_29 += (((((-var_4 ^ (0 | -41)))) ? ((-((var_1 ? (arr_2 [i_1] [i_1] [i_6]) : (arr_5 [i_6] [i_1 + 2] [i_6]))))) : (((max(var_5, var_12))))));
                        var_30 = var_8;
                    }

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_31 = (((((-(arr_8 [i_0])))) == (((~((2707538489 ? (arr_3 [i_1] [i_1] [i_7]) : var_2)))))));
                        var_32 = (min(var_32, (((((max((arr_4 [i_2]), (arr_17 [i_0] [i_1] [i_2] [i_1] [i_0])))) <= ((1 & (((var_4 ? (arr_9 [i_0] [i_1] [i_1 - 1] [i_1] [1] [i_7] [i_7]) : 32767))))))))));
                    }
                    for (int i_8 = 2; i_8 < 11;i_8 += 1)
                    {
                        var_33 = (min(var_33, (((-((((min(13020, var_0))) & ((var_8 ? (arr_2 [i_8] [i_2] [i_1]) : (arr_6 [i_8] [i_2] [i_1 + 3]))))))))));
                        var_34 = (min(((((min(65535, -1716643734496847763))) ? (max(7, -1716643734496847763)) : (((max(127, 30)))))), ((min(2707538493, (arr_19 [i_8] [i_0] [i_0] [i_0]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 9;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 11;i_10 += 1)
                        {
                            {
                                arr_27 [i_0] [i_1] [i_0] [i_9 - 1] [i_2] |= ((min((arr_6 [i_9 + 2] [i_1 + 3] [i_10 - 1]), (arr_6 [i_9 + 2] [i_1 + 3] [i_10 - 1]))));
                                var_35 = 32;
                                var_36 = ((((arr_5 [i_0] [i_1] [i_10]) <= 31627)) ? ((((!(arr_19 [0] [10] [i_2] [4]))) ? ((var_18 | (arr_8 [i_2]))) : 1587428830)) : var_3);
                            }
                        }
                    }
                }
            }
        }
    }
    var_37 = (((!var_1) ? (((-(13 ^ -38)))) : (var_8 / var_5)));
    #pragma endscop
}
