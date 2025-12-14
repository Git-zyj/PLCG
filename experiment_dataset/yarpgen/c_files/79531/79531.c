/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((var_13 ? ((var_17 ? var_10 : 1)) : ((1 ? var_9 : 1)))) ^ var_8));

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_19 = var_10;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_20 = (min(var_20, ((min(-var_0, (!255))))));
                        var_21 *= -var_10;
                        var_22 ^= (((((~var_9) ? 1023 : (((var_13 ? (arr_3 [i_0] [i_3] [i_2 - 1]) : var_8))))) >= var_8));
                        var_23 &= (((((-(63 >= 1)))) >= ((9223370937343148032 >> (-6080981988898178952 + 6080981988898178961)))));
                        var_24 *= ((((!((((arr_0 [i_0]) ? (arr_5 [i_3] [i_3]) : 1))))) ? ((min(4194304, var_13))) : ((((min(var_6, 15))) ? (0 && 18048611681110284232) : (min(var_2, (arr_2 [i_2] [0])))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_25 = (max(var_25, -1));
        arr_14 [i_4] = ((min((arr_0 [i_4 - 1]), (arr_0 [i_4 + 1]))));
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {

                    for (int i_8 = 3; i_8 < 22;i_8 += 1)
                    {
                        arr_25 [i_5] [i_5] [i_5] [i_5] = (arr_24 [i_5] [i_5] [i_5] [i_8] [i_6]);
                        var_26 = var_3;
                        arr_26 [i_8 - 1] [i_5] [i_7] [i_6] [i_5] [i_5] = (((((((var_15 ? var_11 : 2592724374636697693))))) / (((((min(var_15, 8)))) - (((arr_16 [i_5]) - 248))))));
                    }
                    arr_27 [i_5] [i_5] [i_7] = ((((((-361292747 ? var_5 : var_6)) - var_1)) <= ((-(((arr_19 [i_6]) ? var_0 : 65535))))));
                    var_27 ^= (min((var_8 && var_0), (((arr_16 [i_6]) ? (arr_20 [i_7] [i_6] [15] [i_5]) : (arr_16 [i_6])))));
                    var_28 = (min(var_28, (((8 ? ((((min(var_14, var_4))) ? (arr_21 [10] [i_6] [10]) : ((var_2 ? var_11 : var_9)))) : ((((var_3 || var_17) ? ((max(var_5, 8))) : 1))))))));

                    for (int i_9 = 4; i_9 < 23;i_9 += 1) /* same iter space */
                    {
                        arr_32 [i_9] [i_5] [i_5] [i_5] = var_10;
                        var_29 *= (min(((255 ? var_7 : 27480)), ((((~(arr_29 [i_5] [i_6] [i_9] [i_9] [i_7]))) & ((1 ? 65535 : var_14))))));
                        var_30 = (max(var_30, ((max((((arr_21 [i_5] [i_6] [i_7]) / (arr_21 [i_5] [i_6] [18]))), (((arr_21 [i_5] [i_6] [i_6]) / (arr_21 [i_5] [i_6] [i_9 + 2]))))))));
                        arr_33 [i_9 + 1] [i_5] [i_5] [i_5] [i_5] [i_5] = 536608768;
                    }
                    for (int i_10 = 4; i_10 < 23;i_10 += 1) /* same iter space */
                    {
                        var_31 ^= ((-361292727 ? (arr_31 [i_5] [i_5] [i_5]) : (min(((min(var_1, var_8))), (1 * var_12)))));
                        arr_37 [i_6] &= arr_35 [i_6];
                        arr_38 [i_5] [i_6] [i_7] = ((((((48 ? 1 : var_7)) ? (~var_1) : var_14))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
