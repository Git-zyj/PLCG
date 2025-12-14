/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_12 = (((((arr_0 [i_0]) + 2147483647)) << ((((-(arr_2 [i_0]))) - 213639237))));
        arr_3 [i_0] [i_0] = (arr_2 [i_0]);
        arr_4 [i_0] = var_9;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_13 = 2055756863;
        var_14 = ((arr_1 [i_1] [i_1]) ? var_9 : var_6);
        var_15 |= (((arr_7 [i_1]) ? (arr_5 [i_1] [i_1]) : var_3));
        var_16 |= arr_7 [i_1];

        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {
            var_17 = ((((((arr_6 [17]) ? (arr_0 [i_2]) : var_7))) ? var_7 : (arr_8 [i_2 + 1])));
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_18 = ((~(arr_16 [i_1] [i_1] [i_2] [i_3 - 1] [11] [i_4] [i_5])));
                            arr_17 [16] [i_1] [i_3] [i_3] [i_3] [i_3 + 1] [i_3] &= ((-(~856835342806586613)));
                            var_19 = ((!((var_7 > (arr_13 [i_1] [i_2 + 1] [i_3] [i_5 + 1])))));
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            var_20 = (4284781383735007477 | 132);
            var_21 = (((((!(~-682659841))))) | var_8);

            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        {
                            var_22 |= (max(((max(var_0, (!var_6)))), (((1 << 0) ? (arr_0 [i_9]) : ((var_5 ? (arr_21 [i_10] [i_8]) : (arr_13 [i_6] [i_8] [i_8] [i_9])))))));
                            arr_29 [i_9 - 2] [i_6] = ((~((~(arr_8 [i_7])))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    var_23 = (+((var_1 ? (arr_33 [i_7]) : var_7)));
                    arr_34 [i_6] [i_11] = (((arr_26 [12] [i_7] [i_8] [i_11]) ? var_6 : var_1));
                    var_24 = (((arr_9 [i_8]) ? var_9 : (~var_4)));
                    var_25 &= ((~(arr_31 [i_6] [i_7] [i_8] [19])));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    var_26 = -682659832;
                    var_27 = var_9;
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        {
                            arr_43 [i_6] [i_7] [i_8] [i_13] [i_14] = ((+((((arr_37 [i_8]) && 14161962689974544140)))));
                            arr_44 [i_14] [i_13] [i_13] [i_8] [i_7] [i_6] &= ((((((arr_18 [i_13]) ? (arr_18 [i_13]) : var_8))) ? ((-(arr_18 [i_6]))) : ((~(arr_18 [i_14])))));
                        }
                    }
                }
                arr_45 [i_6] = ((((((max(var_1, (arr_21 [i_6] [i_6])))) ? var_10 : -var_3))) ? var_2 : ((((((arr_1 [i_8] [12]) ? (arr_14 [i_8] [i_8] [i_8] [i_7] [i_7] [i_6]) : var_0))) ? (min(var_8, var_4)) : 2934990495)));
                arr_46 [i_8] [i_7] [i_7] [i_6] = 1;
            }
        }
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            var_28 = (((arr_1 [i_6] [i_15]) ? var_6 : ((-(((arr_30 [i_6] [i_15]) - var_9))))));
            arr_49 [10] [i_15] [1] = ((~(max(4294967295, (arr_9 [i_6])))));
            arr_50 [i_6] [i_6] [i_15] = max((((arr_0 [i_15]) ? (arr_47 [i_15] [i_15]) : var_2)), (((-((-(arr_25 [i_15] [i_6] [i_6])))))));
        }
        for (int i_16 = 0; i_16 < 25;i_16 += 1)
        {
            arr_53 [i_6] [i_6] [5] = max((arr_1 [i_6] [i_16]), (((arr_1 [i_6] [i_16]) ? var_9 : (arr_1 [i_6] [i_16]))));
            var_29 = (((!(-2147483647 - 1))));
        }
        var_30 |= (arr_19 [i_6]);
    }
    var_31 = (min((((var_3 ? (max(var_0, -607030716)) : (var_10 > var_8)))), ((~(min(var_9, var_8))))));
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 11;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            {
                var_32 = var_1;
                arr_60 [i_17] [i_18] = var_9;
            }
        }
    }
    #pragma endscop
}
