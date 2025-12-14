/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((var_8 ? (((((var_5 ? var_4 : -1787083344))))) : 3172299925)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = (max(var_12, ((((~14101) + (min((arr_1 [i_0] [i_0]), ((min(5554, 14101))))))))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_1] |= (((~(max(var_2, 51435)))));
            arr_6 [i_0] [i_1] = (min((arr_0 [i_0]), (((arr_4 [i_1]) % 11303))));
            var_13 = (min((arr_2 [i_0] [i_1]), -1284864430424553349));
            var_14 = 0;
        }
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {

                    for (int i_5 = 3; i_5 < 18;i_5 += 1)
                    {
                        var_15 &= 0;
                        arr_20 [i_2] [i_3] [i_4] [i_5] = (~14100);
                        arr_21 [i_4] [i_3] [i_4] [i_5 - 2] [i_3 + 1] [i_2] = ((-(arr_0 [i_4])));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_16 = (max(var_16, -11277));
                        var_17 *= ((+(((arr_8 [i_4]) ? var_2 : var_10))));
                        var_18 *= (((arr_2 [i_2] [i_2]) ? ((1 ? (arr_14 [i_2] [i_4 - 1] [i_3] [i_2]) : (arr_14 [i_2] [i_6] [i_4] [i_6]))) : (arr_9 [i_3] [i_2])));
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            var_19 *= ((var_1 ? (arr_1 [i_2] [i_3]) : ((((107 != (((arr_1 [i_3] [i_7]) ? -253943754 : (arr_1 [i_3] [i_2])))))))));
                            var_20 = (min(var_20, var_1));
                        }
                        arr_28 [i_3] [i_3 + 1] [i_3 + 1] [i_3 - 3] [i_3 + 2] = ((((-((-(arr_26 [i_2] [i_3] [i_7]))))) <= (min((((arr_22 [i_2] [i_3] [i_3] [i_2] [i_3 - 1] [i_3]) ? (arr_19 [i_3] [i_4] [i_3 - 3] [i_3]) : (arr_25 [i_2] [i_3 + 2]))), 1))));
                        arr_29 [i_2] [i_3] [i_4] [i_7] = var_6;
                        var_21 &= var_10;
                        var_22 *= (((((((var_0 | var_10) || (arr_27 [i_3] [i_4 - 1] [i_7] [i_7] [i_7]))))) ^ (max((((1 ? (arr_23 [i_2] [i_2] [i_4] [i_7]) : (arr_24 [i_7] [i_4 - 1] [i_3 - 3] [i_2])))), var_3))));
                    }
                    var_23 = (min(var_23, ((max((arr_15 [i_2] [i_3 - 1] [i_2]), (51434 <= 1042282971))))));
                    var_24 = ((~((-(((arr_1 [i_2] [i_4]) ? (arr_22 [i_2] [i_2] [i_2] [i_3 + 2] [i_4] [i_4]) : (arr_3 [i_2] [i_2])))))));
                }
            }
        }
        arr_30 [i_2] = (min(((63036 + ((var_1 ? var_10 : (arr_18 [i_2] [i_2] [i_2] [i_2]))))), (((((min(-11304, 1))) ? 52150 : var_1)))));
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
    {
        var_25 &= (((((-1042282968 ? 1 : 1))) | (((arr_15 [i_9] [i_9] [i_9]) ? (arr_15 [i_9] [i_9] [i_9]) : var_7))));
        arr_33 [i_9] [i_9] = (var_3 ? (max(var_6, ((1 ? 4294967295 : 581327993)))) : (max((((2491 ? var_4 : 36561))), ((-1439192152 ? (arr_23 [i_9] [i_9] [i_9] [i_9]) : var_10)))));
        arr_34 [i_9] = min((var_9 + var_10), (arr_16 [i_9] [i_9] [i_9] [i_9]));
    }
    for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
    {
        var_26 = (max(var_26, (var_3 % 1042282971)));
        var_27 = (min(var_27, ((min((arr_37 [i_10]), (112 / 28975))))));
    }
    var_28 = ((((((min(var_4, var_1))))) ? (min(((var_7 ? -432766184 : var_9)), -1042282972)) : (((var_0 ? ((max(var_6, var_2))) : -var_10)))));
    #pragma endscop
}
