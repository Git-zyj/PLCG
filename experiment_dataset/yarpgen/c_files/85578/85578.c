/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 *= ((!((((max(var_6, 9223372036854775807)) * ((((arr_5 [i_0] [i_1] [i_2]) ? (arr_1 [i_1]) : (arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 2])))))))));
                    var_12 = ((+(((((-2 + 2147483647) << (6 - 6))) + ((-(arr_5 [21] [i_1] [i_2])))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                {
                    var_13 = (min(((~(((arr_4 [i_3 - 1] [i_4]) ? var_8 : (arr_6 [i_3] [i_4] [i_4] [10]))))), ((min(var_1, (arr_12 [i_3 - 1]))))));
                    var_14 &= (min((((!(!var_8)))), (arr_4 [6] [i_4 + 2])));
                    arr_16 [i_3 + 1] = var_7;
                    var_15 = var_6;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_16 = var_6;
                                var_17 = ((~(((min((arr_2 [i_6] [i_6]), (arr_20 [i_7] [5] [i_6])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (((((!(var_8 == var_6)))) & var_5));

    for (int i_8 = 1; i_8 < 19;i_8 += 1)
    {
        var_19 *= var_7;
        var_20 = 1;
        var_21 *= var_1;
        var_22 = (max(var_22, (((((((28 == (arr_1 [1])))))) ? ((((((arr_5 [i_8 + 1] [i_8] [4]) <= var_10))) & (arr_3 [i_8 + 1] [i_8 + 1] [i_8]))) : 1))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
    {
        var_23 = (((arr_11 [i_9] [14] [i_9]) ? var_6 : (arr_11 [i_9] [5] [i_9])));
        arr_26 [i_9] = ((12 ? (arr_0 [i_9]) : 30));
        var_24 = (arr_19 [i_9] [i_9] [i_9] [i_9] [4] [i_9]);
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 4; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    {
                        var_25 = var_10;
                        var_26 = (((((arr_31 [i_11 - 2] [i_11 + 1] [i_11 - 2] [i_11]) + 2147483647)) >> (!-70)));
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
    {
        var_27 = (max(var_27, var_1));
        arr_39 [i_13] [i_13] = (((((((var_10 ? (arr_5 [i_13] [i_13] [5]) : 7643211321825505284)) * var_2))) ? (((((arr_14 [12] [1] [i_13] [12]) < (arr_14 [i_13] [i_13] [i_13] [i_13]))))) : ((((6 ? var_0 : (arr_21 [i_13]))) >> ((((arr_1 [i_13]) >= (arr_36 [i_13]))))))));
        var_28 = var_5;
        var_29 = ((!(((-((0 ? -2457551423228436 : 114)))))));
    }
    #pragma endscop
}
