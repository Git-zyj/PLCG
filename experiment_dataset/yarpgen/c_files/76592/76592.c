/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_7 ? var_2 : var_0));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_13 = var_1;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [i_0 + 4] [i_0] [i_1 + 1] [i_2] = var_0;
                    arr_7 [i_0 + 2] [i_0] [i_0] = ((var_7 ? var_0 : (arr_2 [i_1 + 1] [i_1 - 1])));
                }
            }
        }

        for (int i_3 = 3; i_3 < 22;i_3 += 1)
        {
            arr_11 [i_0] = (1632 && 1607);
            var_14 = (var_8 / var_1);
            var_15 = ((var_1 ? (arr_3 [i_0] [i_0 + 3]) : (arr_3 [i_0] [i_0 + 4])));
            arr_12 [i_0] [i_0] [i_0] = ((40318 ? 1660 : 63916));
        }
        arr_13 [i_0] = (63905 ? -1235204534 : 3875436704);
    }
    for (int i_4 = 1; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_16 = (max(var_16, ((min(51, 1643)))));
        arr_18 [i_4] = (var_7 * (arr_0 [2] [19]));
        arr_19 [i_4] [i_4] = (arr_17 [i_4]);
    }
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        var_17 |= (((((((min(var_1, (arr_20 [i_5] [i_5])))) <= (min(var_3, -1))))) | ((var_4 - (arr_21 [i_5] [i_5 - 1])))));
        var_18 = -29;
        arr_22 [i_5] |= (min((((arr_20 [i_5] [i_5]) ? 11100349027192505870 : var_9)), ((((min(var_5, var_5))) * (1 * 0)))));

        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            arr_25 [i_6] [21] [i_5] = var_0;
            arr_26 [i_5] [i_6] [i_6] = (((((arr_23 [i_5 + 3] [i_6] [i_5 + 3]) / (arr_23 [i_6] [i_6 + 1] [i_5 + 1]))) | (((arr_24 [i_5]) + ((var_3 ? 1658 : var_7))))));
        }
        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
        {
            arr_29 [i_7] [i_7] [i_5] = -1;
            var_19 = ((((arr_24 [i_5 + 1]) / ((var_1 ? var_10 : var_8)))) * (((((((arr_20 [i_5] [i_7]) ? var_6 : (arr_27 [i_7] [i_5]))) < ((var_2 ? var_11 : (arr_27 [i_5] [i_5]))))))));
            arr_30 [i_5] [i_7] [i_7] = (((arr_21 [i_5 - 1] [i_5 + 2]) ? ((min(((36 + (arr_24 [i_7]))), (arr_24 [i_7])))) : (((((var_10 ? var_6 : (arr_24 [i_5])))) | ((4294967287 ? var_0 : 1403803435))))));
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
        {

            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        {
                            var_20 = var_6;
                            var_21 += ((((min(var_0, (min(var_6, (arr_32 [17] [17])))))) < (min((var_1 == var_2), (((arr_23 [i_8] [i_10] [i_11]) ? 4294967274 : var_9))))));
                            var_22 = var_0;
                        }
                    }
                }
                arr_42 [i_5] [i_5] [i_9] [i_9] = 41;
                arr_43 [12] [i_8] [i_5] = var_7;
                var_23 = (arr_32 [i_5] [i_8]);
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        {
                            arr_49 [i_5] [i_8] [i_9] [19] [i_12] [i_13] = ((((min((arr_45 [i_5 + 2] [i_5 + 2] [i_9] [i_9] [i_12]), (arr_45 [i_5 + 2] [i_5 + 3] [i_5 + 2] [i_8] [7])))) ? (((((arr_45 [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_9] [i_9]) <= var_8)))) : ((-(arr_45 [i_5 + 1] [i_5 + 2] [i_5 + 1] [i_8] [i_12])))));
                            var_24 += (((max((max(var_7, 0)), -1))) ? (min((min(var_5, var_11)), 131)) : (((min(((max(147, var_7))), var_0)))));
                            var_25 = ((((((arr_36 [i_5] [i_8] [i_8] [i_8]) && var_7))) < (min((arr_23 [i_5 + 1] [i_5 + 2] [i_5 + 1]), -var_7))));
                            arr_50 [i_5] [18] [i_13] = ((((((((((arr_31 [i_5] [i_5]) ? var_3 : var_2))) || (((var_5 ? var_0 : 650269609))))))) / (((min(var_9, (arr_28 [i_13]))) ^ -var_9))));
                            arr_51 [i_5] [i_8] [i_9] [i_12] [i_12] [i_13] [i_13] = ((-(((!(arr_34 [i_9]))))));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_14 = 1; i_14 < 22;i_14 += 1)
            {
                var_26 *= (arr_54 [i_5 + 1] [i_8] [i_8]);
                arr_56 [i_5 + 3] [i_14] = ((var_3 ? (arr_39 [i_5 + 1] [i_8] [i_14 + 1] [i_8]) : (arr_39 [i_5 + 3] [i_5 + 3] [i_14 + 1] [i_5])));
                arr_57 [i_14] [i_8] [5] = (((var_6 | var_2) * var_4));
            }
            var_27 = ((var_4 ? ((((((18446744073709551609 ? var_6 : var_4))) | (~2064892692)))) : ((var_0 ? (arr_33 [i_5 + 2] [i_8]) : (max((arr_31 [i_5 + 1] [i_8]), (arr_36 [i_5] [i_5] [i_8] [i_8])))))));
        }
        var_28 = var_7;
    }
    for (int i_15 = 3; i_15 < 11;i_15 += 1)
    {
        arr_60 [7] = var_0;
        arr_61 [i_15 - 3] = (min(var_4, var_9));
        arr_62 [i_15] [i_15] = (((0 < var_9) && (((63875 ? (var_5 * 542159582) : (arr_32 [i_15 - 3] [i_15 - 2]))))));
        var_29 = (max(var_29, ((min(((((arr_52 [0] [i_15 + 1]) ? (arr_52 [16] [i_15]) : var_0))), (arr_2 [i_15 - 1] [i_15]))))));
    }
    var_30 = (min(var_30, (((var_5 ? (((((min(var_0, var_4)))) * (var_0 / var_5))) : 1605320672)))));
    #pragma endscop
}
