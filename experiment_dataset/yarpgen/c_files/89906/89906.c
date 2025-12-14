/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [6] [6] &= (min(((~((var_0 ? -7096427908651787724 : 7096427908651787719)))), (arr_0 [16])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 -= (arr_7 [i_0] [i_0]);
                    var_12 = (max(var_12, ((max((((!(var_8 > 560531409)))), (arr_5 [i_0]))))));
                    arr_8 [i_0] [i_1] [i_2] = (max(6470440738757291748, -8748059593770803103));
                }
            }
        }
        var_13 *= (arr_4 [2] [2]);
        var_14 += (-(arr_7 [i_0] [i_0]));
        arr_9 [i_0] = 127;
    }

    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        arr_14 [i_3] [12] = ((((((arr_0 [i_3]) ^ (arr_1 [i_3])))) ^ (((((6470440738757291738 ? var_2 : (arr_0 [i_3])))) ? ((var_5 ? var_5 : (arr_5 [i_3]))) : var_6))));
        var_15 = (arr_11 [i_3]);

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            arr_18 [i_3] [i_4] [i_4] = ((((~((var_0 ^ (arr_4 [i_3] [i_4]))))) <= (((arr_7 [i_3] [i_4]) ? ((-1687604335 ? 560531409 : 11976303334952259868)) : (~var_4)))));

            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                var_16 = (arr_0 [i_4]);
                var_17 ^= (max(-6470440738757291748, (((~(arr_5 [i_5]))))));
                arr_21 [i_5] [i_4] [0] [i_3] = ((var_1 & (max(6289765944105865444, 64975))));
            }
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                arr_24 [i_3] [i_3] [i_3] [i_6] = var_5;
                var_18 += var_5;
            }
            for (int i_7 = 1; i_7 < 11;i_7 += 1)
            {
                arr_29 [i_3] [i_4] [i_7] = (max(var_9, (arr_6 [i_3] [i_4] [i_7 + 3])));
                arr_30 [i_3] [i_3] [i_7] = (max((max(((6470440738757291734 ? 11976303334952259868 : 1)), (arr_6 [i_7] [i_7 + 2] [i_7 + 1]))), (((~((max((arr_13 [i_4]), var_6))))))));
                var_19 = ((-((((min(0, var_0))) ? var_5 : (arr_1 [i_4])))));
                var_20 = ((var_8 ? 2239140031782917678 : ((((arr_26 [i_7 + 2] [i_7 + 2] [i_7 + 1] [i_7 - 1]) ? (arr_26 [i_7 - 1] [i_7 + 3] [i_7 + 3] [i_7 + 3]) : var_9)))));
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                arr_33 [4] [i_8] = (((arr_32 [i_3] [i_4] [i_4] [i_8]) && ((max(((-6289765944105865444 | (arr_28 [i_3] [i_4] [i_8] [i_4]))), ((min(127, (arr_27 [i_3] [i_3])))))))));
                arr_34 [i_8] [i_4] [i_8] = (arr_19 [6] [i_4] [i_4] [6]);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        {
                            arr_39 [i_3] [i_8] [i_8] [i_8] [i_3] = (arr_38 [i_8] [1] [3] [3] [i_10]);
                            var_21 = (arr_27 [i_8] [i_9]);
                            var_22 *= ((+(((arr_22 [i_4] [i_9]) / 9223372036854775807))));
                        }
                    }
                }
            }

            for (int i_11 = 1; i_11 < 11;i_11 += 1)
            {
                var_23 += (arr_36 [13] [i_3] [i_3] [i_11 - 1] [i_11]);
                var_24 |= ((-((81 % (arr_23 [i_11 + 1] [i_11 + 1] [i_11 + 1])))));
                var_25 = -81;
            }
        }

        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            var_26 = (max(15934, (arr_11 [i_3])));
            arr_46 [i_3] [i_3] [i_12] = ((var_6 ? (((arr_42 [i_12]) / (arr_42 [i_3]))) : (max((((-(arr_5 [10])))), (arr_6 [2] [2] [i_12])))));
            var_27 *= 236;
        }
        var_28 = (arr_44 [5] [i_3] [5]);
    }
    #pragma endscop
}
