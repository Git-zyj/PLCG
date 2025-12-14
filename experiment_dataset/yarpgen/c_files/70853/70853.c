/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= 903223203;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = ((~(((min(961762255, (arr_1 [i_0] [i_0])))))));
        var_20 |= 1;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        var_21 = (!62316);
                        var_22 = (max(var_22, (arr_5 [i_4])));
                        var_23 = (max(var_23, (((~((((-(arr_9 [i_1] [i_1] [i_1] [i_1]))) - ((min((arr_0 [i_2 - 1] [i_3]), 1))))))))));
                    }
                }
            }
        }
        var_24 = (max(var_24, (~92)));
        arr_11 [1] |= (((((1 ? (arr_4 [i_1] [1]) : (arr_10 [i_1] [i_1] [i_1] [10] [i_1])))) ? ((+(min((arr_6 [i_1] [i_1] [i_1]), (arr_1 [i_1] [i_1]))))) : -93));
        arr_12 [6] |= (~-1152921504606846975);
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_25 = ((+(((!32766) ? ((((arr_16 [i_5] [i_6] [i_6]) - (arr_4 [6] [i_6])))) : var_4))));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_26 -= (arr_3 [i_8]);
                                arr_25 [i_6] = 1;
                                var_27 = (166935355 | 92);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            {
                                var_28 ^= ((1 ? (((5264056287551728842 ? -1 : var_6))) : (max((arr_19 [i_12] [i_12]), (4503599627370495 - -8)))));
                                var_29 = (((arr_8 [9]) & (arr_13 [6] [i_10])));
                            }
                        }
                    }
                }
                var_30 = ((((((arr_23 [i_5] [7] [i_5] [i_6] [i_6]) ? (max(var_17, var_14)) : ((((arr_27 [0]) - (arr_13 [i_5] [i_6]))))))) ? (arr_27 [i_5]) : (((~(~1))))));
                var_31 = ((2147483647 - (((!(arr_13 [i_5] [i_5]))))));
            }
        }
    }
    var_32 &= ((-((max(var_5, 9223372036854775807)))));
    #pragma endscop
}
