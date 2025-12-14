/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((((max(var_2, var_10))) ? (var_11 > var_1) : (min(var_8, var_2))))) ? ((((var_11 ? var_5 : var_11)))) : (((var_13 / var_8) ? (var_3 - var_11) : ((var_2 ? var_0 : var_11))))));
    var_16 = max(((min(var_10, var_7))), (((max(var_14, var_2)))));
    var_17 = ((((var_7 | ((max(var_3, var_3))))) % var_2));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 -= (((min(((var_0 ? (arr_1 [i_0] [i_0]) : var_8)), var_9)) * (((!((var_12 < (arr_1 [i_0] [i_0]))))))));

                for (int i_2 = 4; i_2 < 19;i_2 += 1)
                {
                    var_19 = ((((-var_6 ? var_3 : (arr_2 [i_0 - 2] [i_1] [i_0 - 2]))) >> ((((max((arr_1 [i_0 - 2] [i_2 - 1]), (arr_1 [i_0 - 1] [i_2 + 1])))) - 83))));
                    arr_8 [4] = (((var_8 && ((max((arr_6 [i_0] [i_0] [i_0] [5]), var_1))))) || (((((var_12 + (arr_1 [i_1] [i_1]))) | (var_9 % var_9)))));
                    var_20 *= ((+((((((arr_4 [i_0]) >= (arr_4 [i_0])))) + ((~(arr_3 [i_1] [i_1])))))));
                    arr_9 [i_0 - 3] [i_0 - 3] [i_1] [i_2] = (((((var_5 % (max(var_14, var_4))))) ? (arr_0 [i_2 + 1]) : ((((min((arr_3 [i_1] [i_1]), var_3))) + ((min(var_8, var_12)))))));
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    arr_12 [i_0] [i_0] [i_0] = ((var_5 >= ((~(var_14 & var_6)))));
                    var_21 = (min(var_21, ((((((arr_0 [i_1]) || var_7))) != ((max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))))))));
                    var_22 -= ((((((var_6 ? var_2 : (arr_10 [i_0] [i_1] [17])))) && ((min((arr_7 [i_3]), (arr_7 [i_3])))))));
                    var_23 = ((((min(var_8, (arr_11 [i_3])))) ? ((-(arr_11 [i_0]))) : (((((((var_7 | (arr_7 [i_1])))) && (((var_7 ? (arr_3 [i_1] [i_3]) : var_4)))))))));
                }
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    arr_16 [i_0] [i_0] [i_0] = ((~(arr_13 [i_4] [i_1] [i_0] [i_0])));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_24 += (((var_9 + var_8) / var_11));
                        var_25 = (((((var_7 >> (((arr_1 [i_1] [i_1]) - 90))))) > var_0));
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_26 = (~(((!((((arr_10 [10] [i_6] [i_4]) ? var_12 : (arr_18 [i_0] [i_1] [i_4] [i_6]))))))));
                        var_27 = (arr_11 [i_6]);
                        arr_23 [i_0] [i_4] [i_1] [i_1] [i_0] = (min((((min((arr_0 [i_4]), var_11)))), (((arr_10 [i_0 + 1] [i_0 + 1] [i_6]) / (var_4 != var_11)))));
                    }
                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            var_28 -= (((((arr_1 [i_8] [i_1]) ? var_14 : (((arr_21 [i_1] [i_7]) & (arr_5 [15] [i_0] [10]))))) | (max(var_2, (((arr_10 [i_1] [i_8] [i_4]) ? var_6 : var_3))))));
                            var_29 = (((((~(arr_26 [i_8] [i_7 + 2] [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 1])))) ? (((arr_5 [i_0 + 1] [i_0 - 3] [i_7 + 2]) >> ((((arr_11 [i_1]) != var_7))))) : (((var_14 / var_1) ? var_2 : ((var_12 ? var_7 : (arr_3 [i_0] [i_0])))))));
                            var_30 += ((((!(arr_7 [i_0 - 3])))));
                            arr_30 [i_0] [i_0] [6] &= (((((arr_25 [i_0 - 3] [i_1] [20] [i_1]) >= var_14))));
                            var_31 = (max(((max(((var_3 ? var_3 : var_12)), ((((arr_18 [i_0 + 1] [i_0 + 1] [i_0] [i_0]) < var_9)))))), ((-((var_0 * (arr_1 [i_4] [i_1])))))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            arr_34 [i_7] = (((arr_19 [i_4] [1] [i_4] [i_1]) ^ (arr_31 [i_0] [i_1] [i_7 + 1] [i_9])));
                            arr_35 [i_0] [i_1] [i_4] [i_7] [i_7] = (((arr_25 [i_0 - 1] [i_7 + 1] [i_0] [i_0 - 1]) / ((((arr_22 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) ? var_10 : var_2)))));
                            arr_36 [i_0] [i_1] [i_1] [i_1] [i_9] = ((((var_2 ? (arr_17 [i_0] [i_1] [i_4] [i_4] [i_9] [i_7]) : var_4)) - ((((arr_31 [i_9] [i_7] [i_4] [i_0]) >= (arr_14 [8] [i_4] [i_9]))))));
                        }
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            arr_39 [16] [i_1] [16] [i_4] [i_1] [i_7] [i_10] = min(((var_12 % (max(var_11, (arr_14 [i_0] [i_7] [i_10]))))), (((((max(var_4, var_9))) ? ((var_2 / (arr_13 [i_0] [i_0 - 3] [i_0] [i_0]))) : (var_14 ^ var_7)))));
                            var_32 ^= ((((var_13 & (arr_10 [i_0 - 3] [i_0 + 1] [i_0 - 1]))) < (arr_10 [i_0 - 2] [i_0 + 1] [i_0 - 2])));
                            arr_40 [i_0] [i_4] [i_0] [i_4] [11] = (max((arr_18 [i_0 - 1] [i_0] [i_0] [i_0]), ((((var_9 > (arr_15 [i_0] [i_1] [i_1] [i_0]))) ? ((min(var_14, var_6))) : (arr_6 [i_0] [i_1] [i_0] [i_0])))));
                        }
                        var_33 += var_4;
                        var_34 = (min((((~var_0) > (((var_13 - (arr_20 [i_7])))))), (((arr_17 [i_0] [i_0] [i_0] [i_0 - 3] [i_0] [i_0]) && var_9))));

                        /* vectorizable */
                        for (int i_11 = 1; i_11 < 18;i_11 += 1)
                        {
                            arr_44 [i_11] [i_7] [12] [i_0] = ((((((arr_3 [i_0] [i_0 - 3]) ? (arr_38 [i_11]) : var_9))) ? (arr_15 [i_0] [i_0 + 1] [i_0] [i_0 - 3]) : (arr_5 [i_1] [i_1] [i_1])));
                            arr_45 [i_7] [i_7] [i_7 - 1] [i_4] [i_1] [5] [i_0] |= (((arr_1 [i_7 + 2] [i_11 - 1]) ? ((var_4 ? var_10 : (arr_6 [i_0] [i_0] [i_0] [5]))) : (((!(arr_7 [i_11]))))));
                        }
                    }
                    arr_46 [i_0] [1] [i_0] &= (((-((~(arr_3 [i_0 - 2] [i_1]))))) >= var_3);
                    arr_47 [i_0] [i_1] [i_4] [13] = (max(((+(min((arr_38 [i_0]), var_10)))), var_7));
                    arr_48 [i_0] [i_1] = (arr_24 [i_0] [i_0 - 1] [i_0] [i_0] [i_0]);
                }
                var_35 ^= (((((~var_1) ? (arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 3]) : (min((arr_38 [i_1]), (arr_43 [i_1] [i_1] [i_1] [i_1] [i_0] [i_1] [i_1]))))) != (((((arr_11 [i_0 - 1]) > (((var_6 | (arr_37 [i_0] [i_0] [i_0]))))))))));
            }
        }
    }
    #pragma endscop
}
