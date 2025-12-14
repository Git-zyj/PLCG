/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    var_19 -= ((~(((~var_14) ? (var_3 ^ var_5) : (var_8 ^ var_5)))));

    for (int i_0 = 3; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_20 *= (arr_1 [6]);
        var_21 &= ((((arr_0 [i_0 - 2] [i_0]) ? (arr_0 [i_0 - 3] [i_0 - 3]) : (arr_0 [i_0 + 1] [i_0 + 1]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_22 = arr_2 [i_1] [i_3];
                        var_23 = ((~((~(arr_2 [i_0] [i_0])))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = var_11;
                            var_24 = (max(var_24, (arr_13 [i_0] [i_1] [3])));
                            arr_15 [i_0] [i_0] [i_2] [i_0] [1] = 0;
                            var_25 = (min(var_25, ((((((arr_3 [i_2]) & (arr_11 [i_0 - 3] [i_1] [i_4] [i_3]))) == (((arr_3 [i_0]) & var_9)))))));
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_0 - 3] [i_1] [9] [i_0] [1] = (max(((((var_11 || var_12) ? (arr_8 [i_0 - 2] [i_0 - 3] [i_0 - 1] [i_0 + 1]) : ((var_4 + (arr_17 [i_5] [i_3] [i_0] [i_0] [i_0])))))), ((-var_5 ? ((~(arr_4 [i_0] [i_0]))) : (((max(var_15, 49527))))))));
                            var_26 = (min(var_26, (((!((!(!10861191117093304780))))))));
                            var_27 -= (arr_1 [i_5]);
                            arr_20 [i_0] [i_0] = ((-((((((arr_8 [i_0] [i_0] [i_0] [i_5]) - var_0)) > var_17)))));
                        }
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            var_28 = (min(var_28, (((-14500 ? ((((arr_6 [i_6] [i_6 + 1] [i_2]) ? ((((arr_6 [i_0] [i_0 + 1] [i_0]) && var_1))) : var_11))) : ((1 ? (arr_0 [i_6 + 2] [i_0 + 1]) : (arr_13 [i_3] [i_3] [i_3]))))))));
                            var_29 = (min((!var_5), ((!((!(arr_9 [i_0] [i_0] [i_0] [i_3])))))));
                            var_30 = (min(var_30, ((((((arr_8 [i_2] [i_1] [i_2] [i_3]) ? (((arr_11 [i_1] [0] [i_3] [i_6]) << (var_10 - 62))) : (arr_17 [10] [i_0 - 1] [i_3] [i_3] [i_6 + 3]))) << (((max(((min(var_2, var_2))), (((arr_4 [i_3] [i_1]) ? var_16 : var_14)))) - 1192485769)))))));
                        }
                        var_31 = (min(var_31, ((((arr_22 [1] [7]) >= (!-var_10))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_32 = (min(var_32, ((var_17 ? (((arr_5 [i_7]) ^ 7585552956616246857)) : (var_12 == var_10)))));
                        arr_28 [i_7] [i_7] [i_7] [0] [i_0] = (((arr_25 [i_0] [i_0 - 1] [i_0] [i_7]) == (arr_25 [i_0] [i_0 + 1] [i_0] [i_7])));
                        var_33 *= (arr_21 [i_0 + 1] [i_1] [i_7]);
                    }
                    arr_29 [4] [8] [8] [0] &= ((((+((max((arr_9 [0] [i_0 - 1] [i_1] [i_2]), var_6))))) ^ (((arr_10 [i_2]) ? (~1) : (!18446744073709551611)))));

                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_34 ^= (min(((((arr_22 [i_0 + 1] [i_0]) != (arr_22 [i_0 - 1] [i_1])))), (((arr_22 [i_0] [i_0 - 3]) / (arr_22 [i_1] [i_8])))));
                        var_35 = (min(var_35, (((-((((arr_23 [i_0] [i_0] [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0 - 2]) > (arr_23 [i_0] [1] [i_0 + 1] [i_0] [i_0 - 2] [i_0] [i_0 - 2])))))))));
                    }
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        var_36 ^= ((((((!10861191117093304758) & (arr_26 [6] [i_1] [i_2] [i_2] [i_9])))) | (arr_32 [i_0] [4])));
                        arr_36 [i_0] [i_1] [i_2] [i_9] = arr_16 [i_0] [i_1] [i_2] [i_9];
                        var_37 = (max(var_37, 10861191117093304758));
                    }
                    var_38 *= (max(7585552956616246857, (~20)));
                }
            }
        }
    }
    for (int i_10 = 3; i_10 < 11;i_10 += 1) /* same iter space */
    {
        arr_40 [i_10] = ((((((min(7585552956616246854, 59)) <= (((max(215, 0))))))) * (arr_2 [i_10] [i_10])));
        var_39 = var_1;
        var_40 = (min(var_40, (((((-(arr_6 [i_10] [i_10 + 1] [i_10]))) & ((min(var_13, ((((arr_39 [i_10]) || (arr_30 [i_10 - 1]))))))))))));
    }
    #pragma endscop
}
