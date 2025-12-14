/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (~var_10);

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = 126;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        var_16 = ((!(24576 != -1157973872)));
                        var_17 ^= (((((arr_9 [i_3 + 1] [i_0 - 2]) ? var_0 : (arr_9 [i_3 + 1] [i_0 + 1])))) ? (arr_9 [i_3 + 1] [i_0 - 2]) : ((((arr_4 [i_0 - 2]) == (arr_9 [i_3 + 1] [i_0 - 1])))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                var_18 = (((((arr_16 [i_4 + 3]) == (arr_12 [i_4]))) ? (arr_14 [i_4 + 1] [i_4 + 1]) : 196237737));
                var_19 = ((-((max((arr_16 [i_4 - 1]), (arr_16 [i_4 - 1]))))));

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_20 = (~-4724683403787077149);
                    var_21 = (((((((((-2147483647 - 1) ? var_12 : (arr_17 [i_5] [i_5])))) ? 1226218011 : (arr_13 [i_4] [i_4])))) ? (((((arr_16 [i_4 + 1]) != ((41999 ? var_4 : 445354096)))))) : ((30428 ? (arr_12 [i_4]) : (arr_12 [i_4])))));
                }
                for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                {
                    var_22 = (min(var_22, 1875));
                    var_23 = (max(var_3, 4201418842));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                {
                    var_24 &= ((((((arr_13 [i_4] [i_5]) ? (arr_17 [9] [i_5]) : 13815))) ? (arr_24 [i_4] [i_5] [i_4] [i_4]) : 213366741));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 17;i_10 += 1)
                        {
                            {
                                arr_30 [i_4 + 3] [i_4] [i_4 + 2] = (!23495);
                                arr_31 [i_4] [i_8] [2] [i_9] [i_10 - 1] |= 8176;
                                var_25 *= (((arr_25 [i_4] [i_9] [i_8]) ? ((((arr_25 [i_4 + 3] [i_4] [1]) == (arr_26 [i_9] [i_10])))) : (47196 == 7882923406359027830)));
                            }
                        }
                    }
                }
                var_26 = max((((arr_23 [i_4] [i_4 + 3] [i_4]) ? -7393845024413310659 : var_6)), (max((arr_23 [i_4] [i_4 + 3] [i_4 - 1]), (arr_23 [i_4 + 1] [i_4 - 2] [1]))));
            }
        }
    }
    #pragma endscop
}
