/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_15 = (max(var_15, (((-((((-9223372036854775807 - 1) <= 18446744073709551615))))))));
        var_16 = 5538712592952063450;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            var_17 = (!584433195);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    {
                        var_18 = (max(var_18, (arr_0 [2])));
                        var_19 *= ((((min((arr_13 [i_2 + 1] [i_4 - 1]), (arr_13 [i_2 + 2] [i_4 + 1])))) ? ((max(var_7, var_4))) : var_3));
                    }
                }
            }
            var_20 |= (((((var_7 ? var_9 : (5538712592952063442 | -13)))) ? ((((max(2311846350, var_4))) ? 1983120931 : (arr_8 [i_2 + 2] [i_2] [i_2]))) : var_3));
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_21 = var_0;
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_22 = var_5;
                            var_23 = (((((~var_14) ? var_3 : var_9))) ? (((arr_16 [i_6 - 1] [i_7 - 1]) | (var_9 & var_10))) : (((((var_5 ? var_8 : (arr_3 [i_5])))))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            arr_31 [i_1] [i_5] [0] [i_10] [i_11] = ((!(((-var_14 ? ((var_0 >> (var_11 - 1878660972))) : (5538712592952063461 >= var_7))))));
                            arr_32 [i_1] [8] [7] = ((-((39091 ? (arr_4 [i_10]) : (arr_4 [i_1])))));
                        }
                        for (int i_12 = 2; i_12 < 12;i_12 += 1)
                        {
                            var_24 = (max(var_24, (!2311846350)));
                            var_25 = (max(var_25, var_13));
                        }
                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            var_26 = (min(var_26, ((((arr_12 [i_1]) * (((arr_12 [i_10]) ? var_7 : var_11)))))));
                            var_27 = (((arr_27 [i_1]) ? -var_1 : var_14));
                            arr_39 [i_10] [4] [i_9] [i_10] [i_13] |= 1;
                        }
                        var_28 = var_3;
                        arr_40 [i_10] [i_5] [0] [1] [i_1] = (arr_12 [i_5]);
                    }
                }
            }
        }
        var_29 += (max((arr_2 [10]), ((-(arr_4 [1])))));
    }
    var_30 = (max(var_30, (!46)));
    #pragma endscop
}
