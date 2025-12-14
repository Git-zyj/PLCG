/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;
    var_20 = (1345427835208725305 ? (min(((-25 ? 1481 : 204)), 64039)) : 57693);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_0 [i_0] [i_0]) ? ((min(9, (arr_0 [i_0] [i_0])))) : ((min(var_4, (arr_0 [i_0] [i_0]))))));

        /* vectorizable */
        for (int i_1 = 4; i_1 < 14;i_1 += 1) /* same iter space */
        {
            arr_5 [i_1] [i_0] [i_1] = ((57712 ? ((105 ? (arr_3 [i_1]) : 5895911053095216714)) : -79));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_21 = (min(var_21, ((((arr_7 [i_1 - 3] [i_1] [i_1 - 3]) ? (arr_7 [i_1 - 4] [i_1 + 1] [i_1 - 1]) : (arr_7 [i_1 + 2] [i_1 + 2] [i_1 - 1]))))));
                            arr_15 [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] = (((var_3 != (arr_10 [i_0] [i_0] [1] [i_0] [i_0]))) ? ((~(arr_3 [i_0]))) : ((((arr_1 [i_1] [i_4]) >= (arr_1 [i_2] [i_0])))));
                            arr_16 [i_0] = (((arr_0 [i_1 + 2] [i_1 + 2]) ? var_13 : (arr_0 [i_1 + 2] [i_1 + 2])));
                            var_22 = (max(var_22, ((((arr_10 [i_1] [i_1] [i_0] [10] [i_4]) ? var_9 : (arr_7 [i_1] [i_1 - 4] [i_2]))))));
                        }
                    }
                }
            }
            var_23 = (min(var_23, var_18));
        }
        /* vectorizable */
        for (int i_5 = 4; i_5 < 14;i_5 += 1) /* same iter space */
        {
            var_24 = ((((((arr_1 [14] [i_0]) ? 0 : 644619613))) ? (~7831) : var_18));

            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                arr_21 [i_0] [i_5] [i_5 + 2] = ((7816 ? (arr_17 [i_5 + 1] [i_6]) : 14865120233845919412));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_25 -= (293705363 == -23);
                            arr_26 [i_0] [i_5] [i_0] [i_7] [i_8 + 4] = (((var_13 & var_5) | ((var_16 ? 57715 : 7459764441308692131))));
                            var_26 = (max(var_26, ((((arr_9 [i_0] [i_5 - 4] [i_8 + 2] [i_7]) ? (arr_13 [i_5 - 3] [0] [i_8 + 2] [4] [i_8 + 4]) : var_13)))));
                        }
                    }
                }
            }
            for (int i_9 = 1; i_9 < 13;i_9 += 1)
            {
                var_27 = (max(var_27, (((-92 ? 6345543995428262529 : 485682507)))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        {
                            arr_34 [i_0] [i_10] [i_0] [i_5] [i_0] = ((-(arr_17 [i_5 - 3] [i_9 - 1])));
                            arr_35 [i_0] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_0] [i_10] = 33185;
                        }
                    }
                }
            }
            arr_36 [i_0] [i_0] [i_5] = ((-((11031949809537893996 ? 18446744073709551608 : 7090431584270498068))));
            var_28 = (max(var_28, (((((arr_30 [i_0] [i_5] [i_0] [i_0]) ^ var_0))))));
        }
        var_29 = (min(var_29, (((((79 ? 3584 : 7344)) % (arr_23 [i_0] [i_0] [i_0] [i_0]))))));
        var_30 = (((((((min((arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_20 [i_0])))) ? (((min(var_18, 1)))) : ((5895911053095216714 ? (arr_31 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_6))))) ? ((1189123187 ? (((-7344 ? -977853605 : 32244))) : (max(7750, 12891489598070863447)))) : (((arr_6 [i_0] [i_0] [i_0] [i_0]) ? var_17 : (((-28 ? 101 : 644619591)))))));
        arr_37 [i_0] [i_0] = var_1;
    }
    #pragma endscop
}
