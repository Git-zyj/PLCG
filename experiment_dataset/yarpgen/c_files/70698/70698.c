/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 -= (arr_0 [14]);
                arr_6 [i_0] [i_1] = (((((8 ? 1 : 1))) ? (arr_4 [i_1] [i_0]) : ((-var_10 ? (((arr_2 [4] [i_1] [i_1]) / var_0)) : (6702253008663034062 / 61244)))));
                var_15 = (max(((0 ? 34 : 1)), ((var_0 ? (arr_2 [i_0] [2] [i_1]) : (arr_2 [i_1] [17] [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_2] = (~var_8);

                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    var_16 &= 1;
                    arr_15 [i_2] [i_3] [i_4] = (max(-var_7, ((((1 ? 1 : 1))))));
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_17 = (max(var_17, var_10));
                                var_18 = min(((!(arr_10 [3]))), (((((arr_19 [i_2] [2] [i_5]) || (arr_18 [i_2] [i_3] [9] [i_3]))) || ((max(9303, 1))))));
                                var_19 = (((((var_0 ? 1 : (arr_17 [i_6 + 1] [12] [i_7] [i_7])))) ? ((-3630131 ? ((((arr_22 [i_2]) ? var_4 : (arr_14 [4] [i_2] [0])))) : (((arr_13 [i_2] [i_3] [7]) ^ var_1)))) : var_9));
                                arr_25 [16] [i_7] [6] [i_5] [8] [16] |= ((((min((arr_16 [7] [0] [i_5] [i_5]), (~126)))) || (arr_21 [i_3] [i_5] [i_6])));
                            }
                        }
                    }
                    arr_26 [i_2] [0] [i_5] [i_5] = ((arr_2 [1] [i_3] [9]) ? (max((((!(arr_21 [10] [9] [i_5])))), ((127 ? (arr_19 [9] [i_5] [0]) : var_1)))) : (((((arr_5 [7] [i_5]) > 1)))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    arr_29 [i_8] [i_2] = ((((arr_1 [i_3]) ? (arr_27 [i_2] [i_3] [8]) : (arr_16 [i_8] [i_8] [13] [5]))));
                    arr_30 [i_8] [7] [i_2] = (((arr_1 [i_2]) || (var_11 > 1)));
                    var_20 = (min(var_20, var_5));
                    arr_31 [12] [i_3] = (!16759990977022309611);
                }
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    arr_35 [i_2] [i_2] [i_9] [i_2] = ((32767 ? ((((-127 || (arr_22 [i_2]))))) : -3465841174850860352));
                    arr_36 [i_9] [13] [i_2] = (arr_17 [10] [0] [i_3] [i_2]);
                    var_21 = var_4;
                }
            }
        }
    }
    var_22 = ((var_2 - (min(var_1, var_7))));
    #pragma endscop
}
