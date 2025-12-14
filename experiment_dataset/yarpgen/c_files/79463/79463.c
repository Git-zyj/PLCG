/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_9));
    var_16 = (max(var_14, var_7));
    var_17 = (((((((var_12 ? var_5 : 12755)) << (var_6 + 122)))) ? (~2147483647) : var_14));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (max(var_11, ((-var_4 / ((min(-1156217381, var_8)))))));
                    var_19 -= (arr_9 [i_0] [i_1] [i_1]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    var_20 = min(((((arr_15 [i_5] [i_3] [i_3 - 2]) ? (arr_15 [12] [i_3] [i_3 - 2]) : (arr_15 [i_4] [i_3] [i_3 + 1])))), (arr_15 [i_5] [i_3] [i_3 - 2]));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((max(1, ((!(arr_10 [i_7] [i_3 - 1]))))))));
                                arr_23 [8] [10] [i_5] [i_6] [i_3] = (((!var_1) + ((((arr_20 [i_3 - 2] [i_3] [i_5] [i_6] [i_3 - 2]) || (((arr_15 [i_3] [i_3] [18]) || -17)))))));
                                var_22 += ((!((((var_7 == var_1) + 250)))));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        arr_27 [i_8] [i_5] |= ((((((arr_17 [i_3] [i_5] [i_8]) / var_2))) ? (min(2042628096, (arr_16 [i_3 - 2]))) : (((arr_15 [i_3] [i_8] [i_3 - 1]) ^ (arr_15 [i_3] [i_8] [i_3 + 1])))));
                        var_23 = ((((max(((-(arr_19 [14] [14] [i_5] [i_8] [i_8]))), ((-536870912 & (arr_22 [i_3 - 2] [i_3] [i_3])))))) ? ((((arr_10 [i_3] [i_3 - 2]) >> (23910 - 72)))) : ((((9223372036854775807 >= (arr_11 [14] [14]))) ? var_8 : ((min((arr_17 [i_3] [i_3] [i_3]), 3111620454)))))));
                    }
                    for (int i_9 = 1; i_9 < 19;i_9 += 1)
                    {
                        var_24 = (((1 > var_14) ? ((-(arr_13 [i_4] [i_4] [i_9 - 1]))) : ((((-21930 > (arr_13 [i_9 + 1] [i_9] [i_9 - 1])))))));
                        var_25 = ((((max(((max((arr_11 [i_4] [i_5]), 1))), (arr_15 [i_9 + 1] [i_3] [i_5])))) | ((((arr_26 [i_3 + 1] [i_9 + 1] [i_9 + 1] [i_9] [i_9]) || (arr_30 [i_5] [i_9 - 1] [i_9] [i_9] [i_5] [14]))))));
                        var_26 ^= (((((~(min((arr_29 [i_3] [2] [i_3] [i_3 + 1] [i_3 + 1]), (arr_26 [i_4] [i_4] [i_5] [11] [i_9])))))) || 13078469167115698180));
                        var_27 = max((((arr_25 [i_3 - 2] [i_3 + 1] [i_3 - 2] [i_3 - 2]) + (arr_25 [i_3] [i_3] [i_5] [i_9 + 1]))), (arr_28 [i_9 - 1] [i_4] [i_5] [i_3 - 1]));
                    }
                }
            }
        }
    }
    #pragma endscop
}
