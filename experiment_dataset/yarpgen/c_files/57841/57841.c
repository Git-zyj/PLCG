/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [17] [i_0] = (~(min((var_11 ^ var_12), (max(186849269, (arr_6 [i_0] [i_1] [i_2]))))));
                                var_18 = (i_0 % 2 == zero) ? ((max((var_5 != var_3), ((~(((var_12 + 2147483647) >> (((arr_2 [i_1] [i_0] [i_4]) - 29499))))))))) : ((max((var_5 != var_3), ((~(((var_12 + 2147483647) >> (((((arr_2 [i_1] [i_0] [i_4]) - 29499)) + 7664)))))))));
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_0] [i_4] = (min(((max((arr_10 [i_0] [i_0] [i_2] [i_4] [i_3] [i_4] [i_0]), (arr_10 [i_0] [i_3] [i_0] [i_1] [i_0] [i_0] [i_0])))), ((-(arr_3 [i_1] [i_2] [i_4])))));
                                var_19 -= ((((~(max(var_2, var_3)))) + (((~(((arr_4 [i_4] [i_4] [i_4]) ? -120 : (arr_2 [i_0] [i_4] [i_3]))))))));
                            }
                        }
                    }
                }
                arr_15 [i_0] = ((((max(8400869225926109937, (arr_4 [i_0] [i_1] [i_0])))) + ((max((((var_0 ? var_10 : var_12))), 4108118030)))));
                arr_16 [i_0] [i_0] = (((var_7 / (((-(arr_6 [i_0] [i_1] [i_1])))))));
                arr_17 [i_0] = ((((max((arr_6 [i_0] [i_1] [i_1]), var_5))) ^ ((min((arr_6 [i_0] [i_1] [i_1]), (arr_6 [i_0] [i_1] [i_1]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    var_20 = (max(var_20, ((min(((-(arr_2 [i_7] [i_6] [i_5]))), (((arr_4 [i_7] [i_7] [i_5]) ? var_6 : (arr_18 [i_5]))))))));
                    arr_27 [i_5] [i_6] = (max((((arr_4 [i_7] [4] [i_7]) + (max(var_7, var_12)))), 186849293));

                    for (int i_8 = 2; i_8 < 16;i_8 += 1)
                    {
                        var_21 -= var_7;
                        var_22 = (max(var_22, ((((((max(var_12, (arr_18 [0])))) ? ((186849271 << (((arr_6 [i_7] [i_6] [i_7]) - 59)))) : ((((arr_7 [i_7]) ? var_14 : var_0)))))))));
                        var_23 = arr_19 [i_5];
                    }
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                        {
                            var_24 ^= (((((((max(-88, (arr_18 [i_9])))) - var_0))) || (((~(arr_30 [i_6] [i_10]))))));
                            var_25 = ((((arr_32 [i_9]) || (((65535 - (arr_26 [i_10] [i_9] [i_7])))))));
                        }
                        for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                        {
                            var_26 ^= (max(((((((arr_36 [i_5] [i_6] [6] [i_11] [i_9] [i_11]) | (arr_20 [i_5] [i_6])))) ? (max((arr_21 [i_11] [i_7] [i_5]), (arr_20 [i_9] [i_11]))) : var_1)), (((~(~var_8))))));
                            arr_38 [i_9] = (((((~(-88 && var_10)))) ? ((-((var_8 / (arr_11 [i_5] [i_5] [1] [i_7] [i_9] [10]))))) : ((-((-(arr_26 [i_5] [i_5] [i_5])))))));
                            var_27 -= (min(((max((((var_14 ^ (-32767 - 1)))), (~843209920)))), ((((max(var_8, var_8))) ? ((var_8 ? var_4 : (arr_28 [i_5] [i_5]))) : (((max(-88, 130))))))));
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                        {
                            arr_41 [i_12] [i_6] [i_7] [i_6] [i_6] [i_5] |= ((~(((arr_39 [i_5] [i_6] [i_7] [i_9]) ? (arr_18 [4]) : var_15))));
                            var_28 = var_16;
                            arr_42 [i_5] [i_5] [i_5] [i_5] [i_9] [i_5] = (arr_21 [i_6] [i_6] [i_12]);
                            arr_43 [i_12] [i_9] [i_5] [i_6] [i_9] [i_5] = (((((var_13 << (var_5 - 75)))) ? ((((arr_7 [i_9]) >> (var_9 - 372478623615050044)))) : var_16));
                        }
                        arr_44 [i_6] [i_7] [i_6] [i_6] |= (max((((arr_3 [i_5] [i_5] [i_5]) ? (arr_3 [i_9] [i_7] [i_6]) : (arr_3 [i_7] [i_6] [i_5]))), (((arr_3 [3] [i_7] [i_9]) ^ var_10))));
                        var_29 = var_9;
                    }
                }
            }
        }
    }
    #pragma endscop
}
