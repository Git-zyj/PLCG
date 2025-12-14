/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_13 &= (max((min((arr_3 [i_3]), (!var_11))), ((((max((arr_1 [15]), (arr_4 [i_0]))) == (((arr_3 [i_0]) ? var_6 : 197)))))));
                                var_14 |= (arr_5 [i_0]);
                                var_15 = (max(var_15, ((max(var_8, (-1951681444 < 6321916171272128381))))));
                                var_16 = (min(var_16, ((((((((arr_8 [i_0] [i_1] [i_2] [9] [14] [2]) >= var_7)) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_7)) <= (arr_7 [i_3] [0] [i_3] [i_3]))))));
                            }
                        }
                    }
                    var_17 = (min(var_17, (arr_2 [i_0] [i_0])));
                    var_18 = (max(var_18, (((((((var_0 ? var_1 : (arr_4 [i_0]))) & 54436)) != ((((arr_0 [i_1]) | 54564))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            {
                var_19 |= var_4;
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_20 *= ((((!(arr_10 [i_9] [i_8] [i_7] [i_6] [8])))));
                                var_21 -= ((!(((min((arr_12 [i_5] [i_5]), -68))))));
                                var_22 = (max(var_22, ((((((-(arr_16 [i_8])))) || (((((((-6 + 2147483647) >> (197 - 190)))) ? 95 : (((!(-2147483647 - 1))))))))))));
                            }
                        }
                    }
                }

                for (int i_10 = 4; i_10 < 16;i_10 += 1) /* same iter space */
                {
                    var_23 = (max(var_23, ((((((+(((arr_21 [i_10 - 4] [i_6] [i_6] [i_5] [i_6] [i_5]) ? (-127 - 1) : (arr_17 [i_5] [i_6] [i_6])))))) ? (max(((49 ? (arr_21 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) : (arr_18 [i_5] [i_5] [i_5] [i_5]))), (arr_22 [i_10 + 4] [i_10 + 2] [i_10 - 2] [i_10] [i_10 + 2]))) : (((((!var_5) || (arr_11 [i_10 + 4]))))))))));
                    var_24 = ((((max((((arr_23 [i_5] [i_5] [i_5] [i_5] [i_5]) > 7413685697953465352)), (arr_2 [i_5] [i_5])))) + (var_11 | var_4)));
                }
                for (int i_11 = 4; i_11 < 16;i_11 += 1) /* same iter space */
                {
                    var_25 -= ((!(arr_17 [i_11 - 3] [i_11 + 1] [i_11])));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 17;i_13 += 1)
                        {
                            {
                                var_26 += (-2147483647 - 1);
                                arr_36 [i_5] |= (max(((~(~var_11))), (((-24033 ? 4503599627370495 : (-68 ^ -1))))));
                                var_27 *= (((((~(arr_27 [i_13] [13])))) <= (~var_5)));
                                var_28 = ((var_9 ? (arr_13 [i_11 - 1]) : (arr_6 [i_13])));
                                var_29 += (~((((-6294465513648766816 ? (arr_35 [16] [i_12] [i_5] [7] [i_5]) : (arr_8 [14] [14] [i_12] [i_5] [i_6] [i_5]))) >> (((~var_3) + 227)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_30 = (max(var_30, var_2));
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 21;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            {
                var_31 -= (min((((~(~-891006422)))), ((((max(var_0, var_7))) ? -1092576312 : ((var_12 ? -6 : var_6))))));
                var_32 -= (((var_4 & var_8) >= (((!(arr_10 [i_14] [i_14] [i_14] [i_14] [5]))))));
            }
        }
    }
    #pragma endscop
}
