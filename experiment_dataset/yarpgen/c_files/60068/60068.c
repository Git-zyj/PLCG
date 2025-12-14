/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 += ((~((min(85, (arr_5 [i_1 - 1] [i_1 + 1]))))));
                    var_12 = (max(var_12, ((((((arr_6 [10] [i_1 - 1] [i_1 - 1] [i_2 + 1]) ? 1 : (arr_6 [16] [i_1 - 1] [i_1 - 1] [i_2 + 2]))) >= (((!(arr_6 [4] [i_1 - 1] [i_1 + 1] [i_2 + 1])))))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_13 = (min(var_13, 0));
                        arr_11 [i_0] [i_1 + 1] [i_2 + 1] [i_2 + 1] = (((86 + -2082917281) < (arr_6 [i_0] [i_0] [i_2] [i_0])));
                        var_14 = (min(var_14, (+-8)));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_0 ? (arr_8 [i_1 + 1] [i_2 - 1] [i_2 + 1]) : (arr_8 [i_1 + 1] [i_2 - 1] [i_2 + 1])));
                    }

                    for (int i_4 = 3; i_4 < 19;i_4 += 1)
                    {
                        var_15 = (min(var_15, (arr_0 [14])));

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_16 *= (-2082917281 ? 0 : -2082917281);
                            arr_19 [i_0] [i_1] [i_1] [1] [i_1] [i_5] &= (min(var_2, (((((!(arr_13 [i_0] [i_1 - 1] [i_2] [i_4])))) + ((max(1, (arr_0 [18]))))))));
                        }
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            var_17 = ((max(1, (!var_6))) || var_9);
                            arr_24 [i_6] [i_0] [i_0] = ((((-(arr_9 [i_0] [i_2] [i_4 + 1] [i_6 - 1]))) * (arr_0 [i_0])));
                            var_18 = (min(var_18, ((4605629581962316397 ? 1867554312 : 8))));
                        }
                        for (int i_7 = 1; i_7 < 19;i_7 += 1) /* same iter space */
                        {
                            var_19 = (min(var_19, (((((((((min(0, var_3)) + 2147483647)) << (((((min(var_0, (arr_22 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0]))) + 908418649)) - 31))))) & ((((min(1867554312, (arr_17 [1] [i_1 - 1] [i_1] [i_1] [i_1])))) ? 11193365717388514202 : -var_7)))))));
                            arr_28 [i_0] [i_1 + 1] [i_0] [i_4] [16] = (max((((!(arr_16 [i_2 + 2] [i_2 + 2] [i_0])))), ((var_2 ? (arr_15 [i_1] [i_1 + 1] [i_1 + 1]) : (arr_16 [i_0] [i_1] [i_0])))));
                        }
                        for (int i_8 = 1; i_8 < 19;i_8 += 1) /* same iter space */
                        {
                            arr_31 [i_0] = ((((((arr_23 [i_2 - 1] [i_8 - 1] [i_0]) ? (arr_23 [i_2 + 2] [i_8 + 1] [i_0]) : (arr_23 [i_2 + 2] [i_8 + 1] [i_0])))) ? (((((arr_23 [i_2 - 1] [i_8 - 1] [i_0]) < (arr_23 [i_2 - 1] [i_8 - 1] [i_0]))))) : (((arr_23 [i_2 + 2] [i_8 - 1] [i_0]) ? (arr_23 [i_2 + 2] [i_8 - 1] [i_0]) : (arr_23 [i_2 + 1] [i_8 - 1] [i_0])))));
                            arr_32 [i_0] [i_0] [4] [i_2] [i_4 - 1] [i_8] &= ((8 + (max((((arr_0 [8]) ? (arr_3 [i_2 + 1]) : var_10)), var_4))));
                            arr_33 [0] [i_1 + 1] [i_0] = (44134 / 1);
                        }
                    }
                }
            }
        }
        arr_34 [i_0] = ((((((((var_8 ? 4605629581962316397 : var_6))) ? (min((arr_1 [i_0]), (arr_14 [i_0] [i_0]))) : (var_7 || 2019245028)))) % 11193365717388514202));
        arr_35 [i_0] = ((((((arr_30 [i_0] [1] [i_0] [i_0] [i_0] [i_0]) + (!var_0)))) && ((((arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) + (arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    var_20 = var_10;
    var_21 = (7100112073109245917 ? -8 : -1867554312);
    #pragma endscop
}
