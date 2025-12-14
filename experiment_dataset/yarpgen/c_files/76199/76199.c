/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~((((4194176 ? 1355189366 : -1355189366)) & (-1355189391 >= 4236143722)))));
    var_18 = (((((1010338123 ? ((max(-1355189362, 1355189397))) : var_16))) ? var_7 : -23671));
    var_19 = (max(var_19, var_10));
    var_20 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_3] [i_1] [i_1] [i_1] [1] = var_1;
                                var_21 = (max(var_21, var_8));
                                arr_16 [i_0] [i_0] [i_0] [i_1] = (((((165 ? var_7 : ((-880779181 ? 1355189370 : 880779183))))) ? (arr_9 [i_1]) : (((!(arr_2 [i_3 + 1]))))));
                                var_22 *= ((((((arr_2 [i_0]) ? (-1010338134 / var_9) : ((var_10 ? var_7 : var_12))))) ? ((880779180 ? -880779201 : 236)) : (!-880779183)));
                            }
                        }
                    }
                    var_23 = (min(var_23, (((-1355189409 ? 1089319426 : 44)))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {

                    for (int i_6 = 3; i_6 < 9;i_6 += 1)
                    {
                        arr_24 [i_0] [i_0] [i_1] [i_1] [i_1] = ((~(((arr_1 [i_0] [i_0]) ? 10629946288502911805 : 3))));
                        var_24 = ((var_7 || (((var_11 ? var_9 : 13872399856661044673)))));
                    }
                    for (int i_7 = 4; i_7 < 11;i_7 += 1)
                    {
                        var_25 = (arr_18 [i_0] [6] [i_5]);
                        var_26 = -var_7;
                        arr_27 [i_7] &= 12244;
                        var_27 = (min(var_27, ((((arr_22 [5] [i_7 - 4] [5] [5]) >> (880779183 - 880779153))))));
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_28 ^= 880779187;
                        arr_30 [i_0] [i_1] [i_1] [i_5] [i_8] = (((195 * var_13) ? (((var_11 ? 880779192 : 247))) : ((var_5 ? 1355189363 : (arr_29 [i_1])))));
                    }
                    var_29 ^= ((-(-880779219 / var_4)));

                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        arr_33 [i_1] [i_1] [i_5] [i_9] = (((~32) ? ((55 ? 67092480 : 1355189374)) : var_14));
                        var_30 = (((arr_1 [11] [i_9]) & (arr_0 [i_0])));
                        var_31 = (arr_31 [i_0] [i_1] [i_5] [i_0]);
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 9;i_11 += 1)
                    {
                        {
                            var_32 ^= ((((17669103468671010160 ? var_9 : -1355189391)) + (arr_40 [i_0] [i_1] [0] [i_11])));
                            var_33 |= (1089319426 ^ 165);
                            arr_41 [i_0] [i_1] [i_1] [i_11] [i_10] = (max(-var_5, (arr_26 [i_0] [7] [i_0] [i_0])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
