/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((((~(-2147483647 - 1))) && (var_0 && var_3))))));
    var_12 = var_2;
    var_13 = (min(var_13, ((max(((~((var_2 ? var_4 : var_9)))), var_2)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 += (arr_0 [i_0] [i_0]);

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_15 = ((~(arr_2 [i_0] [i_0])));
                arr_6 [i_1] [i_2] [i_1] = (((~(arr_0 [i_0] [i_0]))));
                var_16 = ((-2147483647 - 1) ? (arr_0 [i_0] [i_1]) : 184);
                var_17 = -2147483642;
                var_18 = (min(var_18, (~var_8)));
            }

            for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    var_19 = var_0;

                    for (int i_5 = 2; i_5 < 8;i_5 += 1) /* same iter space */
                    {
                        var_20 = ((((((arr_12 [i_1] [i_1 - 1]) >> (((((~2147483641) - -2147483634)) + 33))))) ? (max(-2147483642, (arr_12 [i_1] [i_5]))) : (arr_8 [i_3] [i_3] [i_0])));
                        var_21 = ((17873 ? (arr_1 [i_0]) : (arr_13 [i_4] [i_4] [i_4 + 1] [i_4 - 2] [i_4 - 2] [i_4 + 1])));
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 8;i_6 += 1) /* same iter space */
                    {
                        var_22 = (max(var_22, (((~(arr_12 [i_4] [i_4]))))));
                        var_23 = (max(var_23, ((((((13 ? (arr_9 [i_4] [i_4] [i_3] [i_1]) : 59))) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : 2147483628)))));
                        var_24 = ((!((!(arr_1 [i_3])))));
                        var_25 = (~48779);
                    }
                }
                arr_18 [i_0] [i_1] [9] [i_1] = var_9;
                var_26 = (max((!9218179110125823046), (max((max((arr_14 [i_0] [i_0] [i_1] [6] [i_3]), (arr_1 [i_3]))), ((~(arr_8 [i_1] [i_1 - 1] [i_3])))))));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
            {
                var_27 = arr_9 [i_0] [i_0] [i_0] [i_0];
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            var_28 += ((+((var_5 ? (arr_24 [i_0] [i_1] [i_7] [7] [i_9]) : 50801))));
                            arr_26 [i_7] [i_1] [i_1] [i_1] [i_1] &= (arr_1 [i_0]);
                        }
                    }
                }
            }
            var_29 |= (arr_19 [i_0] [i_0] [i_0]);
        }
        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            var_30 ^= (max(15978618160750779691, (((min(67, (arr_27 [i_10 - 1] [8] [i_0])))))));
            var_31 = 15978618160750779691;
        }
        var_32 += (arr_1 [i_0]);
        var_33 ^= (max((max((((~(arr_28 [1])))), (min((arr_7 [i_0] [i_0] [i_0] [i_0]), 18446744073709551614)))), (arr_27 [i_0] [2] [i_0])));
    }
    var_34 = ((((min((min(6005485113897536715, var_0)), (var_4 > var_0)))) ? (max(var_4, var_10)) : var_7));
    #pragma endscop
}
