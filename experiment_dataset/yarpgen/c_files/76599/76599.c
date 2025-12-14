/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min(var_11, var_10);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_13 = (((((arr_10 [i_2] [i_3 + 1] [i_3 + 3] [i_4 - 1]) ? (arr_10 [i_1] [i_3 + 2] [4] [i_4 - 3]) : var_6)) & (((-(arr_10 [2] [i_3 - 1] [8] [i_4 - 2]))))));
                            arr_11 [i_0] [i_1] [i_0] [i_4] [i_4 - 1] [i_4] = (((((~((var_2 ? 1 : var_0))))) ? ((-((-(arr_8 [i_0] [i_0] [i_4] [i_3]))))) : (arr_5 [i_0] [i_0])));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 11;i_6 += 1)
                {
                    {
                        var_14 = (max(var_14, (((((((!0) ? var_11 : (-2147483647 - 1)))) ? ((((min(var_7, var_11))) ? (!var_7) : ((var_5 ? (arr_7 [i_0] [i_0]) : var_10)))) : (!var_4))))));
                        var_15 = ((max(276174985, ((-276174985 ? var_6 : 2594344035656542274)))));

                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_16 = ((276174970 + (max(-276174971, ((158 ? var_4 : (arr_4 [i_6] [i_0] [i_0])))))));
                            var_17 = -276174986;
                            var_18 = (-32767 - 1);
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_19 = (((!(arr_8 [i_6 - 3] [i_6] [i_6 - 2] [i_6]))));
                            var_20 = min(var_4, ((((arr_4 [i_0] [4] [i_5]) && (((276174991 ? (-32767 - 1) : var_1)))))));
                        }
                        for (int i_9 = 1; i_9 < 13;i_9 += 1) /* same iter space */
                        {
                            var_21 = (min((((-0 ? -var_2 : (var_0 < 0)))), (min((arr_21 [i_0] [i_1] [i_5]), (arr_5 [i_0] [i_1])))));
                            var_22 = 15;
                        }
                        for (int i_10 = 1; i_10 < 13;i_10 += 1) /* same iter space */
                        {
                            arr_30 [i_0] [i_0] [i_0] = ((-276174970 ? var_7 : (((max(var_4, var_2))))));
                            var_23 = (min(var_23, (((!((((max(-26, 276174973)) / (arr_27 [i_6 + 3] [i_6 + 2] [i_6 + 2] [i_6] [i_10 + 1])))))))));
                            var_24 = max((min((!0), (max((arr_27 [i_0] [i_0] [i_0] [i_0] [i_0]), -276174991)))), (((arr_10 [i_0] [i_1] [i_5] [i_10 + 1]) ? 32767 : -276174991)));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_11 = 1; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 11;i_13 += 1)
                    {
                        {
                            var_25 += 4690;
                            var_26 ^= (arr_1 [i_0] [9]);
                        }
                    }
                }
            }
            arr_37 [i_0] [i_1] [i_1] = ((((min((min(var_11, (arr_9 [i_0] [i_1] [i_0] [i_1] [0]))), 10))) ? ((min((((~(arr_31 [i_1] [i_1] [i_0])))), 1030567651))) : ((6502386247160630367 & (((var_10 ? var_1 : (arr_16 [i_1] [13]))))))));
            var_27 = (min(var_27, 1));
        }
        for (int i_14 = 0; i_14 < 14;i_14 += 1)
        {
            arr_40 [i_0] [i_14] = 238;
            var_28 = (((arr_21 [i_0] [i_14] [i_0]) < ((((var_9 && (((arr_29 [i_0] [i_0] [i_0]) > var_11))))))));
        }
        var_29 |= (((((var_9 ? (((276174985 ? (arr_5 [i_0] [12]) : var_10))) : ((30628 ? var_3 : 10521516945230121057))))) ? (min(var_0, -276174985)) : (var_6 & -var_11)));
    }
    #pragma endscop
}
