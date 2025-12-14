/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    var_17 = (max(var_17, var_9));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = (max(((max(-4473856007684590581, var_14))), 3454));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_19 = (max(var_19, (((-(((!(arr_9 [i_0] [14] [i_1 - 1] [i_3])))))))));
                        arr_12 [23] [14] [i_1] [i_3] = (max(((var_14 ? var_9 : (arr_10 [i_1] [i_1 + 1]))), (((!(arr_11 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
                        arr_13 [i_0] [i_1] [i_0] [i_3] = var_10;
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    arr_24 [i_4] [5] [i_6] |= -1892288863;
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_29 [i_4] [7] [i_6] [i_7] [9] [i_8] [i_8] = ((~(((!(arr_28 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7 + 1]))))));
                                arr_30 [i_8] [i_7] [i_5] [i_5] [i_7] [i_4] = ((((((!-385624988) >> (28979 - 28951)))) ? var_10 : (max((((arr_20 [i_6] [i_5]) / 1)), (arr_23 [i_5] [11] [10] [i_5])))));
                                var_20 ^= (min(-var_2, (~-389963573)));
                                arr_31 [i_4] [i_4] [i_4] [i_7] [i_6] = var_10;
                            }
                        }
                    }
                    var_21 |= (arr_9 [i_5] [i_4] [i_5 - 1] [i_5]);

                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        arr_34 [i_9] [11] [i_6] [i_5] [i_4] [i_9] = ((var_8 ? (min(1816293422296919352, var_4)) : (((var_14 > 1325489865) ? ((var_15 ? var_7 : (arr_16 [i_4]))) : (39 / var_12)))));
                        var_22 = (min(var_22, (((((max((((var_12 ? (arr_1 [i_4] [i_9]) : (arr_21 [i_9])))), var_5))) ? 1892288863 : (max(var_11, (arr_11 [i_4] [i_4] [16] [i_5 + 2] [i_6]))))))));
                    }
                    for (int i_10 = 1; i_10 < 21;i_10 += 1)
                    {

                        /* vectorizable */
                        for (int i_11 = 2; i_11 < 20;i_11 += 1)
                        {
                            var_23 = var_4;
                            arr_41 [i_6] [i_5 + 2] = (((arr_27 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_6]) / (arr_27 [i_10 - 1] [i_10 - 1] [i_10] [i_10 + 1] [i_6])));
                        }
                        for (int i_12 = 0; i_12 < 23;i_12 += 1)
                        {
                            arr_45 [11] [i_5 + 2] [i_6] [10] [i_5 + 2] = (min(-var_9, (min(9858601964250248454, 2876283189198743308))));
                            arr_46 [i_4] [i_4] [i_4] [21] [i_4] = ((var_7 == var_3) | (max((arr_9 [i_10 + 1] [i_4] [i_4] [i_5 + 2]), 16270832549733842265)));
                        }
                        arr_47 [14] [i_6] [i_5] [i_4] [i_4] = (arr_37 [i_10] [i_5 - 1] [i_4]);
                    }
                }
            }
        }
        var_24 = (min(var_24, ((-((+(min((arr_44 [i_4] [10] [1]), (arr_25 [16] [16])))))))));
        arr_48 [i_4] = (((((2146435072 || (arr_44 [i_4] [i_4] [i_4])))) / (((1328794099199181452 <= (arr_18 [i_4] [i_4] [i_4]))))));
    }
    for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
    {
        var_25 = (min(var_25, (!var_1)));
        arr_51 [11] = var_8;
        arr_52 [i_13] = var_6;
    }
    #pragma endscop
}
