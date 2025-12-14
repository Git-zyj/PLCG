/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_10 [i_0 - 2] [i_1] [i_2] [i_0 - 2] = 11;
                    arr_11 [i_0] = var_10;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_18 [4] [i_3] [14] = ((((!(arr_8 [i_1] [3] [9] [7]))) ? (max((arr_0 [i_0 - 3]), (((arr_1 [i_3]) ? var_8 : (arr_15 [i_0 + 2] [i_1] [3] [i_3] [i_4]))))) : (163 * 18037)));
                                arr_19 [18] [11] [i_3] = max(((254 ? (arr_3 [i_3 - 2] [i_4] [i_4 - 1]) : 18035)), ((var_0 * (arr_3 [i_3 + 2] [i_3] [i_4]))));
                                arr_20 [i_0 + 1] [i_3] = (min(84, (((!((max(var_3, 17541))))))));
                            }
                        }
                    }
                    arr_21 [i_2] [4] [i_2 + 1] = 7782527305711747311;
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_24 [i_5] = var_9;
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    {
                        arr_36 [i_5] [i_5] [i_7] [0] [i_8] [2] = (((((82 / -26) + 9223372036854775807)) >> ((47988 ? (arr_2 [i_6]) : var_0))));
                        arr_37 [i_6] [3] [i_6] [i_8] = (min((arr_28 [11] [i_7]), (-9223372036854775807 - 1)));
                        arr_38 [12] [6] [i_8] [i_8] = ((((max((arr_7 [i_8] [i_6] [i_5]), ((2147483640 ? 9223372036854775807 : var_9))))) ? ((((var_8 >= (arr_32 [i_8] [i_7] [i_6] [i_5]))))) : (((((var_5 ? (arr_8 [i_5] [i_6] [i_5] [8]) : 144115188075855872))) ? var_4 : (((var_0 ? 18034 : var_0)))))));
                        arr_39 [i_5] [i_6] [i_6] [2] [13] [i_5] = (((-var_12 >> (var_3 - 150))));
                    }
                }
            }
        }
        arr_40 [5] = var_3;

        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            arr_44 [i_5] [12] = var_7;
            arr_45 [11] [i_9] = (((((-(max(-18039, var_5))))) ? var_0 : ((((-18037 & 2147483640) ? 37 : (var_16 && 3379461955845015578))))));
            arr_46 [9] = (((max(var_15, var_1)) * ((((arr_7 [i_9] [5] [i_5]) ? (arr_6 [i_5] [i_5] [5]) : -18036)))));
        }
        for (int i_10 = 3; i_10 < 13;i_10 += 1)
        {
            arr_50 [i_10] [i_10 - 2] [i_10] = (~2);
            arr_51 [i_10 + 1] [i_5] [i_5] = (((~(arr_3 [i_10 - 3] [i_10 - 2] [i_10 - 1]))));
            arr_52 [i_5] [i_5] = ((!(((-1 && var_0) <= ((-9916 ? (arr_42 [i_5] [i_5] [7]) : var_10))))));
        }
    }
    var_17 = ((!((max(((256 ? 7936 : (-9223372036854775807 - 1))), (min(1435586284744840772, -125)))))));
    #pragma endscop
}
