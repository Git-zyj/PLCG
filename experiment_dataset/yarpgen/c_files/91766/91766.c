/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 = 3808;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 = ((!(((~(arr_8 [i_2 + 1]))))));
                                arr_13 [i_2] [i_2] [i_2] [i_0] [i_2] [i_2] = ((+(max((((arr_2 [i_2 + 1]) ? 7464746903012169407 : 1182723454)), (((var_6 ? -1 : var_8)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_2 - 1] [i_6] [i_5] [i_5] [i_0] [i_1] |= (max(((~((((arr_0 [i_5]) != (arr_7 [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2])))))), ((((!var_6) != (arr_16 [i_5]))))));
                                var_19 *= ((((((arr_1 [i_5]) ? (arr_1 [i_5]) : (arr_1 [i_5])))) ? (((arr_1 [i_6]) ? (arr_1 [i_5]) : (arr_1 [i_6]))) : (((arr_1 [i_5]) | 2365960401))));
                                var_20 -= 150;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        var_21 = ((((((var_16 ? var_6 : var_11)))) ? (((!(arr_11 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))) : (arr_15 [i_7] [i_7] [i_7] [i_7] [i_7])));
        var_22 = ((((arr_8 [i_7]) < (arr_8 [i_7]))) ? (((var_4 * 9367) ? (((max((arr_6 [i_7] [i_7]), (arr_14 [14] [10] [i_7] [i_7] [i_7]))))) : ((var_3 ? var_2 : 4319813796781470053)))) : (arr_10 [4] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]));
    }
    var_23 = ((~(((var_2 < (var_11 || 33050))))));
    #pragma endscop
}
