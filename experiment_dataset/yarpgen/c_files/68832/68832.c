/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_17 ^= (((arr_1 [i_0 - 1]) ? ((var_3 ? 2 : (arr_0 [i_0]))) : -var_12));
        arr_3 [i_0 + 1] = ((268419072 ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 1])));
        arr_4 [i_0] = 16;
        arr_5 [i_0 + 1] &= (!var_3);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_10 [i_1] = (min((arr_7 [i_1] [i_1]), (min((min(17, (arr_9 [i_1]))), (arr_7 [i_1] [i_1])))));

        for (int i_2 = 3; i_2 < 23;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                arr_16 [i_1] [i_1] [i_1] = ((var_0 >= (arr_13 [i_3])));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_4] [i_5] = (arr_8 [i_1]);
                            arr_25 [i_1] = 4026548223;
                        }
                    }
                }
                var_18 = (max(var_18, ((((((-9768 ? (arr_20 [i_1] [i_1] [i_3]) : (arr_9 [i_1])))) ? (var_8 <= 2) : var_13)))));
            }
            arr_26 [i_1] = (1 ? (arr_21 [i_1] [i_2] [i_2] [i_1] [i_1]) : ((((!(arr_12 [i_1]))) ? (min(var_1, (arr_22 [i_1] [i_1] [i_2 - 1] [i_2] [i_2 - 2]))) : (var_10 <= -393573567))));
        }
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            var_19 ^= (min(var_3, (((var_6 ? (arr_28 [i_6 + 1] [i_6 + 1]) : (arr_18 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]))))));
            var_20 = (min(var_8, (((var_4 >= (arr_14 [i_1]))))));

            /* vectorizable */
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                var_21 += (((arr_6 [i_6 + 1] [i_6 + 1]) ? (((-146296597 ? (arr_17 [i_1] [i_6] [i_6] [i_1] [i_1] [i_1]) : (arr_8 [i_1])))) : (arr_21 [i_1] [i_6 + 1] [i_7] [i_7] [i_6])));
                var_22 *= ((var_14 ? (((var_16 + (arr_12 [i_1])))) : (arr_9 [i_1])));
                var_23 = (((arr_12 [i_1]) > ((((arr_6 [i_6] [i_7]) ? 9768 : var_11)))));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                arr_36 [i_1] [i_1] [i_8] &= (arr_20 [i_1] [i_1] [i_8]);
                arr_37 [i_1] = (arr_22 [i_8] [i_8] [i_8] [i_8] [i_8]);
                arr_38 [i_1] [i_1] [i_6 + 1] [i_8] = (arr_6 [i_1] [i_1]);
                arr_39 [i_8] [i_6 + 1] [i_1] = (arr_21 [i_1] [i_6] [i_1] [i_8] [i_8]);
            }
            arr_40 [i_1] [i_6] |= ((65519 ? ((((min(69, 0))))) : ((((((!(arr_28 [i_1] [i_1]))))) | ((180 ? (arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : 65519))))));
        }
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            var_24 = ((((((((var_1 * (arr_11 [i_1] [i_9])))) ? ((((arr_22 [i_1] [i_1] [i_1] [i_1] [i_9]) ? 69 : (arr_43 [i_9] [i_1])))) : (((arr_31 [i_9] [i_1] [i_1]) * 1))))) ? (min((arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), ((var_5 ? var_8 : var_9)))) : var_9));
            arr_44 [i_1] [i_9] = 17;
            arr_45 [i_1] [i_1] [i_9] = ((~(arr_32 [i_1])));
        }
        arr_46 [i_1] [i_1] = ((((!((((arr_41 [i_1] [i_1] [i_1]) ? (arr_27 [i_1]) : var_11))))) ? var_5 : ((min((arr_13 [i_1]), (arr_29 [i_1]))))));
    }
    var_25 = ((var_10 ? 146296581 : (((!((min(var_0, var_4))))))));
    var_26 ^= ((!(((var_9 ? (((var_15 ? var_15 : var_8))) : (max(var_14, 1382612359310251055)))))));
    #pragma endscop
}
