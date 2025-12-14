/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= ((-(var_8 <= -var_5)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_16 += (arr_10 [i_4]);
                            arr_14 [i_0] = ((-(58 + -1673401892)));
                            arr_15 [i_0] [i_1] [i_0] [4] = ((!-1673401882) ? (-32767 - 1) : (~var_3));
                        }
                        arr_16 [i_0] [i_1] [i_0] = -var_10;
                    }

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_17 ^= var_12;
                            var_18 = -610654606001253978;
                            var_19 = (!-1673401879);
                        }
                        arr_23 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = (((!var_3) + ((((arr_7 [i_0] [1] [i_0] [i_5 + 1]) < var_12)))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_20 = ((((var_12 ? 9223372036854775797 : var_14)) < (((10459 ? var_1 : var_1)))));
                        var_21 = (((arr_19 [i_0 + 3] [17] [12] [i_7] [i_7]) ? var_14 : (arr_19 [i_0 + 3] [i_7] [3] [i_7] [i_0 + 3])));
                    }

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            var_22 = var_10;
                            arr_32 [i_0 + 3] [i_0] [i_2] [i_8] [i_8] [i_9] [i_9] = (~-1673401917);
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_37 [i_0] [i_1] [i_0] [i_8] [i_8] [13] = (~1673401881);
                            var_23 = (17 < 85);
                            var_24 = ((((-24280 ? (arr_13 [i_8] [i_0]) : -2710160762679261783)) - ((((!(arr_24 [i_0] [i_1] [i_2] [i_8] [i_10] [i_1])))))));
                            arr_38 [i_0 + 1] [i_1] [i_0] [4] = (!var_10);
                        }
                        for (int i_11 = 1; i_11 < 17;i_11 += 1)
                        {
                            var_25 -= (((arr_11 [i_0 + 2] [i_0]) ? (arr_18 [i_0] [i_0 + 3] [6] [i_8] [i_11 - 1] [i_2]) : var_11));
                            var_26 = (((9223372036854775778 > 21363) | (((arr_31 [i_0 + 2] [i_0] [i_2] [i_8] [i_11 + 1] [12] [i_2]) & 0))));
                            var_27 *= ((-(arr_26 [i_0 - 1] [4] [i_8] [i_11])));
                            var_28 = (((~65) ? (((var_2 ? (arr_6 [i_0] [i_1]) : 1))) : ((var_12 ? 9223372036854775796 : 102))));
                        }
                        var_29 |= ((1 ? 16494431774459361133 : 610654606001253996));
                        arr_42 [i_0] [1] [i_2] [i_8] = 19;
                    }
                }
            }
        }
    }

    for (int i_12 = 0; i_12 < 11;i_12 += 1)
    {
        var_30 = (((((-(((arr_40 [i_12] [2] [2] [i_12]) ? (arr_28 [i_12] [i_12] [i_12]) : var_14))))) ? ((-((var_8 ? var_9 : var_11)))) : (!5103858248400981017)));
        arr_45 [i_12] = (~-1);
    }
    var_31 += ((((var_12 ? ((var_14 ? 0 : var_3)) : ((var_13 ? var_8 : 1673401882)))) & (((-9223372036854775797 < (((var_8 ? var_7 : var_11))))))));
    #pragma endscop
}
