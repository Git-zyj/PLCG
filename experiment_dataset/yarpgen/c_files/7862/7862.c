/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 12;i_3 += 1)
                {
                    {
                        var_18 = ((((~(arr_6 [i_0] [i_0] [i_1] [i_0]))) ^ (arr_7 [i_1 + 1] [3] [i_1] [i_3 - 1])));
                        arr_10 [i_0] &= 1;
                        var_19 = ((+(min((min((arr_7 [i_0] [i_1 - 1] [i_1] [13]), (arr_9 [i_0] [i_0] [i_2] [i_3]))), ((((arr_1 [12]) ? (arr_3 [i_3] [i_1]) : (arr_0 [i_2] [i_2]))))))));
                        arr_11 [i_1] = min(((((var_4 ? var_13 : var_0)) ^ var_12)), 0);
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = var_14;
        var_20 = (min((max((min((arr_3 [i_0] [i_0]), (arr_4 [i_0] [i_0]))), ((((arr_4 [i_0] [i_0]) ? var_11 : var_12))))), (((~(arr_3 [i_0] [i_0]))))));
        var_21 = (((((((arr_4 [i_0] [i_0]) / (arr_2 [i_0]))) == (((arr_3 [i_0] [i_0]) ? -26 : var_15)))) ? 811073497 : var_11));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 12;i_4 += 1)
    {
        var_22 &= (((arr_13 [4]) ? (arr_13 [i_4]) : (arr_13 [9])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 14;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_23 = (max(var_23, (((1 <= (arr_23 [7] [7] [1]))))));
                                arr_28 [i_4] [i_5] [i_6] [i_7] [i_8] = ((((arr_20 [i_4 - 2] [i_4 - 2] [i_4] [i_4]) ? -811073524 : (arr_24 [i_7] [i_5]))));
                                var_24 = ((~(65527 & 1408696742031798460)));
                                var_25 = ((((127 ? var_10 : var_4)) / 3708158103));
                                arr_29 [i_4] [i_5] [1] [i_7 + 2] [i_8] [i_8] = ((((((-127 - 1) ? -52 : var_1))) ? (((arr_22 [i_8 + 1] [i_6] [13] [i_4]) / var_6)) : (((var_7 ? var_11 : var_9)))));
                            }
                        }
                    }
                    arr_30 [2] = (((arr_15 [i_4 - 1] [i_4 + 2] [i_4 - 1]) ? var_17 : var_3));
                    arr_31 [i_6] [i_6] [i_5] [i_4] = (arr_18 [i_4 + 3] [i_6 + 1] [i_6 + 1]);
                    var_26 = -811073523;
                }
            }
        }
        var_27 = (min(var_27, (arr_14 [i_4 - 2] [i_4])));
        arr_32 [i_4] = ((116 ? 120 : (arr_16 [i_4 - 2] [i_4 + 2] [i_4])));
    }
    /* LoopNest 3 */
    for (int i_9 = 2; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 18;i_11 += 1)
            {
                {
                    var_28 -= 63;
                    var_29 = ((((((arr_35 [i_11 + 1]) ? (arr_35 [i_11 - 1]) : (arr_35 [i_11 - 1])))) ? 15755500516140909165 : var_3));
                    var_30 = (max(var_30, ((max((((((var_4 | (arr_33 [i_11])))) ? (!var_12) : (arr_35 [i_11]))), (((var_12 <= (arr_35 [i_9])))))))));
                }
            }
        }
    }
    var_31 = var_6;
    #pragma endscop
}
