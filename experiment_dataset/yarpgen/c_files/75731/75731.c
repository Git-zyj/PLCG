/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    arr_8 [i_1] [i_1] [0] = ((-(((arr_6 [i_2 + 1] [i_1] [3]) ? var_3 : var_4))));
                    arr_9 [i_0] [i_0] [i_1] = 92;
                }
                arr_10 [i_0] [i_0] [i_1] = ((!(arr_5 [i_0] [i_0] [i_1])));
                var_12 &= (min((((!((min(1734785601, (arr_0 [i_0] [i_1]))))))), (min((arr_2 [i_1]), (arr_2 [i_0])))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_13 = ((3864363695292420483 ? (((max((arr_0 [i_4 - 1] [i_4 - 2]), (arr_0 [i_4 - 1] [i_4 - 1]))))) : (max((arr_14 [2] [11] [i_3] [i_4] [i_4] [i_4 - 2]), ((18446744073709551615 ? var_6 : var_9))))));
                            var_14 = ((!((max(((((arr_1 [i_0] [i_0]) ? var_2 : (arr_0 [2] [i_1])))), (((arr_4 [i_3] [i_0]) ? (arr_5 [i_4 + 1] [i_3] [i_0]) : var_10)))))));
                            var_15 &= ((~(((-1734785610 < var_5) ? (max(var_1, var_0)) : ((((arr_13 [i_0] [i_3] [i_0]) / var_11)))))));

                            /* vectorizable */
                            for (int i_5 = 1; i_5 < 16;i_5 += 1)
                            {
                                arr_18 [i_3] [i_1] [i_3] [i_1] [i_5] &= var_8;
                                var_16 = (arr_15 [i_1] [i_1] [i_1] [i_1]);
                            }
                            for (int i_6 = 0; i_6 < 18;i_6 += 1)
                            {
                                var_17 = -var_10;
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((((min((arr_11 [i_1]), (arr_0 [i_3] [i_6])))) && (var_6 % var_9)));
                            }
                            for (int i_7 = 0; i_7 < 18;i_7 += 1)
                            {
                                arr_25 [i_1] [i_4] [i_4] [i_4 - 2] = ((-(max(((min(var_7, (arr_7 [i_0] [i_1])))), 14974163946090463817))));
                                arr_26 [i_0] [i_1] [4] [i_1] [i_7] [i_1] [i_3] = (((((var_6 ? (var_6 == var_2) : ((var_8 | (arr_14 [i_7] [i_4] [i_4 - 2] [i_3] [i_1] [i_0])))))) ? var_11 : ((-(arr_20 [12] [i_4 + 1] [i_4] [i_4 + 1])))));
                                arr_27 [i_1] [i_1] [0] [i_3] [i_4] [i_7] [i_7] = (min((min(2047, (arr_22 [i_1] [i_1] [i_1] [i_4 - 2] [i_1]))), ((((arr_22 [i_1] [i_1] [i_0] [i_4 - 2] [i_7]) || (arr_22 [i_1] [i_3] [i_3] [i_4 + 1] [i_4]))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        {
                            var_18 = 223;
                            var_19 = min((min(2147483644, (arr_23 [i_0] [i_1] [i_8] [i_8] [i_9] [i_9] [17]))), ((((arr_23 [i_8] [i_1] [i_1] [i_9] [i_0] [i_8] [i_1]) != (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [4])))));
                            var_20 = ((-(((!(arr_7 [i_0] [i_1]))))));
                        }
                    }
                }
            }
        }
    }
    var_21 &= (max(((((max(-1875742293948934048, var_11))) ? ((var_9 ? -2147483644 : var_4)) : (!var_6))), (((var_3 && ((max(var_0, var_0))))))));
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 24;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            {
                arr_41 [i_11] = ((var_6 - (arr_33 [i_10])));
                var_22 = var_2;
            }
        }
    }
    #pragma endscop
}
