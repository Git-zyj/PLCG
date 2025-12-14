/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_10 = (((((((((arr_3 [i_0]) & var_8))) ? (max(var_6, var_4)) : 1805361530))) || var_7));

                for (int i_2 = 3; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    arr_8 [3] [i_0] = ((~(((arr_4 [i_2 + 1] [i_2 - 2]) + (arr_4 [i_2 - 3] [i_2 - 2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_11 ^= (min(((-1579986038 ? -317495229 : (arr_10 [i_2 - 3]))), ((max(-var_9, (arr_11 [i_0]))))));
                                var_12 = ((-317495230 ? -317495215 : var_7));
                                arr_15 [i_0] [i_0] [i_3] = (((((arr_7 [i_4] [9] [i_2] [i_1]) ? (!-317495229) : (max(var_4, var_4)))) | (arr_14 [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2] [i_2])));
                                arr_16 [7] [7] [11] [11] [i_4] [i_3] = (max(var_6, (min(var_7, (-317495215 == 183)))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_0] = (((((max(var_9, (arr_3 [i_0]))) ^ var_2)) * (((((arr_14 [i_0] [9] [2] [6] [i_0]) * var_7)) * (!-317495215)))));
                }
                for (int i_5 = 3; i_5 < 11;i_5 += 1) /* same iter space */
                {
                    var_13 *= ((((min(var_1, var_4))) ? (((((2020351385 ? -317495199 : -317495196))) ? -105 : (min(var_4, var_1)))) : (arr_5 [10] [i_5])));
                    arr_21 [i_1] = var_6;
                    arr_22 [i_1] [i_1] [i_1] = (((arr_4 [i_0] [5]) && (!var_1)));
                }
            }
        }
    }
    var_14 = ((max(var_5, var_1)));

    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_15 = (+(((((var_2 ? (arr_23 [i_6]) : (arr_24 [i_6])))) ? 48 : (((arr_24 [i_6]) ^ var_0)))));
        var_16 &= (((arr_23 [6]) || var_7));
    }

    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        arr_27 [16] = (arr_26 [i_7] [i_7]);
        arr_28 [i_7] [i_7] = (!-317495215);
        var_17 = ((((((min(var_0, 66)) / (((arr_25 [i_7]) ? (arr_26 [i_7] [i_7]) : (arr_26 [i_7] [i_7])))))) ? (((!(((-(arr_25 [i_7]))))))) : ((317495214 >> (((arr_26 [15] [i_7]) + 80))))));
        var_18 |= (min((((317495215 ? 594768358 : 77679445))), (((arr_26 [i_7] [i_7]) ? -393450480971281531 : (arr_26 [i_7] [i_7])))));
    }
    #pragma endscop
}
