/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_18 = ((((max((((var_6 ? var_3 : 40110))), var_8))) ? (min(var_13, 5703589714426405664)) : var_11));

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_19 = (min(var_19, ((min((((((min(var_5, var_13))) ? (max(var_1, var_12)) : var_6))), (max(var_9, (max(var_11, var_6)))))))));
            var_20 = (min(var_20, ((max((((arr_4 [i_0 + 1] [i_0] [i_0]) ? (arr_0 [i_0 - 2] [i_1]) : (((max(var_10, var_7)))))), var_16)))));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 4; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_15 [i_2] [i_2] [i_3 + 1] [i_4] = (((((((max(-5232557300371116380, (arr_4 [i_3] [i_3] [i_3])))) ? var_6 : (((arr_0 [i_3] [7]) * 3714879642))))) ? ((max(((var_7 ? (arr_13 [i_0] [i_2] [i_3] [i_4]) : (arr_13 [6] [i_2] [14] [8]))), (max(268435200, var_8))))) : (min(var_4, (((-9223372036854775807 - 1) / var_0))))));

                        for (int i_5 = 1; i_5 < 12;i_5 += 1) /* same iter space */
                        {
                            var_21 += ((((((min(1152921504606846976, var_7))) && var_2)) ? (((var_4 && (var_8 || var_9)))) : (((((max(var_5, (arr_3 [i_2] [1] [i_4])))) && (var_4 && var_11))))));
                            var_22 = (((((max(var_3, (arr_17 [i_4] [i_5 - 1] [i_3 - 4] [i_3 - 2] [i_5] [i_4]))))) - var_0));
                        }
                        for (int i_6 = 1; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            var_23 *= ((var_14 ^ (max(((var_5 ? var_11 : var_12)), ((max((arr_14 [i_0] [0] [i_3 + 1] [i_4] [4]), 402)))))));
                            arr_20 [i_0] [i_0] [i_2] [i_0] = var_14;
                            var_24 = (var_17 ? var_1 : (arr_16 [i_4] [i_6]));
                            arr_21 [i_0] [i_2] [i_0] [i_4] [i_6] = ((((arr_6 [i_0 - 1] [i_2] [i_6 + 3]) ^ 1)));
                            var_25 = (min((min((var_8 * var_13), var_10)), ((var_5 ? var_17 : var_8))));
                        }
                    }
                }
            }
            arr_22 [i_2] [i_2] [i_2] = (max((arr_6 [i_0 - 1] [i_2] [i_2]), (arr_1 [i_0 - 3] [i_0 - 3])));
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
        {
            arr_25 [i_7] [i_7] = (((arr_7 [i_7]) ? (arr_7 [i_7]) : ((var_4 ? 52 : (arr_8 [i_0 - 2])))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    {
                        var_26 = (min(var_26, (((167 - ((var_14 ? (arr_5 [i_0] [i_0] [i_0]) : (arr_26 [i_0 - 3] [i_8]))))))));
                        arr_32 [i_9] [i_7] [i_7] [i_7] [i_7] &= 1079238243;
                    }
                }
            }

            for (int i_10 = 3; i_10 < 13;i_10 += 1) /* same iter space */
            {
                var_27 -= (max(((var_9 ? (arr_1 [i_0] [i_10 - 1]) : (max((arr_24 [i_0]), var_15)))), (((((max(var_11, var_12))) ? ((var_10 ? (arr_0 [10] [i_7]) : var_0)) : var_9)))));
                arr_36 [i_7] [i_10 + 2] = var_4;
                arr_37 [i_0] [i_0] [8] [12] |= var_5;
            }
            for (int i_11 = 3; i_11 < 13;i_11 += 1) /* same iter space */
            {
                var_28 = (max((arr_35 [i_7]), (max((arr_4 [i_0] [i_0] [1]), var_17))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        {
                            var_29 ^= min((((var_16 & 1) ? (max(var_4, var_13)) : var_8)), var_1);
                            arr_44 [i_0] [i_7] [i_11] [i_12] [i_7] [i_13] = var_4;
                            var_30 |= ((((max(((max(var_16, -61))), ((-37 ? var_3 : var_14))))) ? ((max(var_17, var_13))) : 12743154359283145973));
                        }
                    }
                }
                arr_45 [i_7] [i_7] [i_11] = ((((min(-1, (arr_24 [7])))) ? (arr_31 [i_0] [i_0] [i_7] [i_0]) : (max(((var_14 ? (arr_10 [i_0] [i_7] [8] [i_0]) : var_11)), 1))));
            }
            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                var_31 ^= (((((((arr_8 [10]) ? 3655 : 18014398509481980))) ? ((var_6 ? var_9 : var_17)) : (min(2485886432, 45278)))));
                arr_48 [i_0] [i_0] [i_7] = (max(var_10, (max((arr_0 [i_7] [i_7]), (var_13 * 138)))));
                var_32 = (min((min(var_5, (arr_39 [i_0 - 2] [i_0] [i_7]))), (((arr_39 [i_0 - 3] [i_0] [i_7]) | var_8))));
            }
        }
        var_33 = var_5;
    }
    var_34 = var_1;
    #pragma endscop
}
