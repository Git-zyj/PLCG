/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] [16] = ((!(arr_3 [i_0 + 1])));
                    arr_8 [i_0] [i_0] = (min((arr_4 [i_0 + 2] [i_0 + 2] [i_0 - 1]), (min(var_0, ((7 ? (arr_0 [i_2]) : (arr_4 [i_0 + 2] [i_0 + 2] [i_0 + 2])))))));
                    arr_9 [i_1] [0] [i_0] = (arr_1 [i_1]);
                }
            }
        }
        var_11 *= (min((min(184, 160)), (((((!(arr_5 [i_0] [i_0] [i_0 - 4]))) || ((!(arr_6 [i_0] [i_0] [i_0] [i_0]))))))));
        var_12 = (max(var_12, (((((((((19 ? (arr_4 [i_0 - 4] [i_0] [i_0]) : var_3))) || var_7))) > (((arr_0 [i_0]) ? (((arr_3 [i_0]) | var_9)) : (var_9 && var_10))))))));
        arr_10 [i_0 + 1] = min((((((arr_1 [i_0]) ? 2796645463 : var_6)) - (((var_3 ? (arr_4 [i_0 + 2] [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_0])))))), var_5);
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 4; i_4 < 10;i_4 += 1) /* same iter space */
        {
            arr_17 [i_3] = ((arr_15 [12] [i_4 + 3] [3]) / (arr_15 [1] [i_4 + 3] [i_4]));
            arr_18 [i_3] = ((!(arr_12 [i_3])));

            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_13 &= ((4773 ? 94584741 : (((131 ? 0 : 59)))));
                            arr_26 [i_3] [i_3] [i_3] [i_5] [i_3] = (arr_25 [i_3] [1] [i_4 - 2] [i_4 - 4] [i_6] [i_7] [i_7]);
                            arr_27 [10] [11] [i_5] [i_6] [i_6] [i_5] = (((arr_15 [i_4 - 4] [i_4 - 3] [i_4 + 2]) && (arr_11 [i_4 - 3])));
                            var_14 *= 2133001470;
                            var_15 = (min(var_15, ((((!2707028026) || ((!(arr_3 [21]))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        {
                            arr_34 [i_3] [i_4] [i_4] [i_5] [i_3] = (~(arr_0 [i_4 + 3]));
                            var_16 = (max(var_16, (((arr_25 [i_8] [i_8] [i_8] [i_8 - 1] [1] [i_8] [i_8 - 2]) * (arr_6 [i_8] [i_8] [i_8] [i_8 + 1])))));
                        }
                    }
                }
            }
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                var_17 = (min(var_17, (((-2147483639 ? -1 : 94584741)))));
                var_18 = var_0;
                var_19 = (((((-(arr_22 [12] [i_4] [i_4 - 1] [i_4] [i_4])))) ? var_1 : -var_1));
            }
        }
        for (int i_11 = 4; i_11 < 10;i_11 += 1) /* same iter space */
        {
            var_20 = (min(var_3, ((((((arr_13 [i_3] [i_3]) + var_8))) ? (arr_12 [i_3]) : 22645))));
            var_21 = ((((min(536870911, var_6)) ^ ((max(var_0, -1999956577))))));
        }
        for (int i_12 = 4; i_12 < 10;i_12 += 1) /* same iter space */
        {
            var_22 = (max(var_22, (arr_38 [i_3] [i_3] [i_3])));
            var_23 = ((((min((arr_36 [i_12 - 1] [i_12 + 2] [i_12 - 4] [i_12 + 2]), (arr_6 [i_12 + 3] [i_12 - 4] [i_12 - 2] [i_12])))) ? (arr_36 [i_12 + 3] [i_12 - 4] [i_12 - 3] [i_12]) : (((~(arr_6 [i_12 - 1] [i_12 - 1] [i_12 + 2] [i_12 - 3]))))));
        }
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 13;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 13;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    {
                        arr_54 [i_3] [i_3] [i_3] [i_15] = ((var_8 * (((arr_13 [i_3] [i_13]) ? ((((arr_4 [21] [21] [i_14]) / (arr_43 [i_3] [i_3] [i_15])))) : var_10))));
                        var_24 = (min(var_24, (((-625227872 != 246) ? (arr_20 [10] [12]) : (min(var_10, (!var_2)))))));
                    }
                }
            }
        }
        arr_55 [11] = (arr_23 [i_3] [i_3] [i_3] [10]);
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 21;i_16 += 1)
    {
        var_25 |= (arr_1 [i_16]);
        arr_58 [i_16] = (arr_56 [i_16]);
    }
    var_26 += var_4;
    var_27 = ((-((-((var_1 ? var_4 : var_9))))));
    var_28 = ((((((((var_3 ? var_2 : var_1))) == var_4))) << ((((var_9 & ((min(var_1, var_1))))) - 42439))));
    var_29 *= ((!(((var_9 ? 4357522347545191790 : (var_1 ^ 14437277988795957502))))));
    #pragma endscop
}
