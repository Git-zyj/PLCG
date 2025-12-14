/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= ((!((min((!2062718246), var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = var_9;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 = (max(var_22, ((((((~(~var_17)))) ? ((var_19 + (~var_1))) : (!var_18))))));
                                var_23 = (min(var_23, (((((max(6699480944083140910, 2040884144) * var_2)))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_16 [i_6] [i_5 - 1] [i_0] [i_6] = (((((var_13 <= var_12) * (!18180127243161927872))) | (var_7 == var_5)));
                            var_24 = var_10;
                            arr_17 [i_0] [4] [i_6] = (arr_13 [i_0] [i_1]);

                            for (int i_7 = 2; i_7 < 9;i_7 += 1)
                            {
                                var_25 = (max(var_18, 18446744073709551613));
                                var_26 = (((((var_9 ? 18180127243161927872 : 81)) <= (((-(arr_11 [i_1 - 1] [i_6] [i_1] [i_1] [i_1 - 1] [i_1 - 1])))))) ? (!75) : ((((var_6 || (arr_3 [i_7 + 3] [i_5 - 1]))) ? var_7 : (((!(arr_18 [i_6] [i_6] [i_5] [i_6] [i_7 + 3] [10])))))));
                                arr_21 [i_6] [i_7] = (((var_14 << ((((min(var_13, 1)) + 109))))));
                                arr_22 [i_0] [i_5] &= 1;
                                arr_23 [i_0] [i_6] [1] [i_6] [6] = (max((max((arr_14 [8] [i_7 - 2] [i_7 - 2] [i_6] [i_7 + 3]), (arr_14 [i_1] [i_7 - 1] [i_1] [i_6] [1]))), (((arr_14 [i_1 - 1] [i_7 - 2] [i_5 - 1] [i_6] [i_7]) ? 2040884153 : 1))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 11;i_9 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_10 = 0; i_10 < 12;i_10 += 1)
                            {
                                arr_34 [i_0] [i_1 - 1] [i_8] [11] [i_8] [i_1 - 1] = (((71 == (arr_24 [i_10]))));
                                var_27 = ((var_16 >= (var_9 & var_15)));
                                arr_35 [i_0] [i_1] [i_8] [i_9 - 2] [i_8] = ((var_0 ? (!var_14) : var_13));
                            }
                            var_28 = (max(var_28, ((((((var_3 <= 2040884153) ? (arr_27 [i_0] [i_1 - 1] [i_9 - 3] [4] [i_9 + 1]) : (((var_2 == (arr_33 [i_0] [i_1] [i_8] [i_9 - 3] [i_0] [6]))))))) ? (max(-var_15, (((arr_15 [i_0] [4] [i_8] [i_9]) ? var_3 : -61)))) : ((3895370105 ? 1 : 1))))));
                            var_29 *= 4294967278;

                            for (int i_11 = 3; i_11 < 9;i_11 += 1)
                            {
                                var_30 = (min(var_30, (((~((var_4 ? 1 : (arr_31 [i_0] [i_9 - 1] [i_1 - 1]))))))));
                                arr_39 [10] [2] [2] [i_0] |= (max(((((arr_10 [6] [1] [i_9 + 1] [i_9 + 1] [6]) > 0))), var_17));
                            }
                        }
                    }
                }
                var_31 = ((((min(var_16, (arr_4 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1])))) ? ((~(max((arr_0 [i_1] [i_0]), var_14)))) : ((~((30 >> (var_12 - 767872651)))))));
            }
        }
    }
    #pragma endscop
}
