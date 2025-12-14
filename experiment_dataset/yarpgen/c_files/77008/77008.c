/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_4 << (((((((1 ? 1109588353 : 1668163128))) ? (min(3185378949, 1097438559)) : (!229))) - 1097438552))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = (!26);
        var_13 = 13575;
        var_14 -= ((~(-6580 & -22133)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_15 = ((-(3003909524 % var_4)));
                    arr_6 [i_2] [i_1] [i_1] = 8;
                    arr_7 [0] |= (!3283817742);
                }
            }
        }
        arr_8 [i_0] |= (((arr_2 [i_0]) ? 42578 : ((33 ? 2147483647 : (arr_3 [i_0])))));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_16 = (max(var_16, ((max((~var_0), 38)))));
        arr_11 [i_3] [i_3] = ((((max((arr_1 [i_3]), var_9))) ? ((((!(arr_1 [i_3]))))) : (((arr_10 [i_3]) ? (((arr_3 [i_3]) ? var_3 : (arr_2 [i_3]))) : 1))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    var_17 = ((-(!229)));
                    var_18 = (max(var_18, ((-(((!(((arr_12 [i_5] [i_4]) <= 1515457709)))))))));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_7 = 2; i_7 < 11;i_7 += 1)
        {
            arr_22 [i_7 + 2] [i_6] [i_6] = -30589;
            arr_23 [i_6] = ((30471 ? var_0 : (arr_16 [i_6] [i_6] [i_6])));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 0;i_8 += 1)
        {
            arr_26 [i_6] [i_8] [i_6] = ((var_3 ? (((33 ? var_7 : var_10))) : (arr_18 [i_6])));
            var_19 = var_6;
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 1; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        {
                            arr_38 [i_6] [i_11] [i_10 - 1] [i_9] [i_6] = ((~(max(((var_4 ? 8613564940165028478 : -31)), -1))));
                            arr_39 [i_11] [i_6] [i_6] = (i_6 % 2 == zero) ? (max(((~(arr_19 [i_12] [i_10 - 1]))), (((((arr_19 [i_9] [i_12]) + 2147483647)) >> (((arr_36 [i_6] [i_9] [i_10 - 1] [i_6] [i_12]) - 96)))))) : (max(((~(arr_19 [i_12] [i_10 - 1]))), (((((arr_19 [i_9] [i_12]) + 2147483647)) >> (((((arr_36 [i_6] [i_9] [i_10 - 1] [i_6] [i_12]) - 96)) - 55))))));
                            var_20 = 262143;
                        }
                    }
                }
            }
            arr_40 [8] [8] |= ((-104 <= (((1 || 127) ? (var_6 || 207) : ((49 ? (arr_2 [i_9]) : 1))))));
        }
        /* vectorizable */
        for (int i_13 = 1; i_13 < 14;i_13 += 1)
        {
            var_21 = ((0 << (((arr_42 [i_13 + 1] [i_13 - 1]) + 1188432809))));
            arr_43 [i_13 - 1] [i_6] [i_6] = var_1;
        }
        arr_44 [i_6] [i_6] = (((((~(var_1 & -5898)))) && ((((!var_8) ? 18446744073709289472 : (((2127244701 ? var_5 : (arr_3 [i_6])))))))));
    }
    #pragma endscop
}
