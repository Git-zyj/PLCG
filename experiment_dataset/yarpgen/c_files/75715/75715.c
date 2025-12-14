/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_10 = (min(var_10, ((((((arr_2 [6] [i_3]) == var_6)) ? (max((arr_5 [i_0 + 1] [i_3 - 2]), (arr_0 [10]))) : var_7)))));
                            arr_8 [i_0] [i_3] [i_3] [i_3] [i_0 - 1] = (209 && 105);
                            arr_9 [i_3] = ((var_0 ? (arr_5 [i_3] [i_0]) : var_9));
                            var_11 = (!var_0);
                            arr_10 [i_2] [i_3] |= (((((var_4 > (var_7 - var_1)))) == (arr_4 [i_0] [i_0] [i_0 + 1] [i_3 - 2])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_17 [i_4] [i_0] [i_1] [8] [i_4] [1] = ((((max((arr_5 [i_0 + 1] [i_0 + 1]), var_5))) || var_0));
                            var_12 = var_0;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_13 = (min(var_13, (arr_22 [i_0] [i_1] [i_6] [i_6] [i_1])));
                            var_14 = ((((var_7 * (arr_22 [i_0] [i_1] [i_6] [i_7 + 1] [i_0 + 1]))) <= (arr_7 [i_0 + 1] [i_6] [i_6] [i_7])));
                            arr_24 [8] |= (var_1 % var_2);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            {
                                var_15 = (min(var_15, ((((((((arr_6 [i_0 + 1] [i_9] [i_9] [i_9] [i_1] [i_0 + 1]) / (arr_15 [i_0] [i_9] [i_8] [8] [i_10]))) % (arr_29 [i_0] [i_1] [i_8] [i_9] [i_9]))) * -520906013)))));
                                var_16 = var_8;
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 |= ((((var_4 != ((var_4 ? var_3 : var_3)))) ? var_4 : var_2));
    /* LoopNest 2 */
    for (int i_11 = 2; i_11 < 17;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 19;i_12 += 1)
        {
            {
                arr_38 [i_11] = arr_11 [i_11] [i_11 - 1];
                /* LoopNest 2 */
                for (int i_13 = 3; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 16;i_14 += 1)
                    {
                        {
                            var_18 -= ((((((((arr_30 [i_12] [2] [i_12] [i_12]) != var_7)))) & var_7)));
                            arr_45 [i_11 - 2] [i_12] [i_13 - 2] [i_11] = ((520906013 ? -57 : -17));
                            var_19 ^= (((4840 & ((-2111437574 ? 2111437574 : 36028794871480320)))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 12;i_15 += 1)
    {
        for (int i_16 = 1; i_16 < 11;i_16 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_17 = 1; i_17 < 11;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 11;i_18 += 1)
                    {
                        {
                            var_20 = (((((~520906013) >= var_4)) ? (arr_40 [i_17] [i_17]) : (arr_2 [i_16 - 1] [i_18 + 1])));
                            var_21 = (min(var_21, (((((arr_23 [i_17 - 1] [i_17 - 1] [i_17 + 1] [i_16 + 1]) ? (arr_23 [i_17 - 1] [i_17 - 1] [i_17 + 1] [i_16 + 1]) : (arr_23 [i_17 - 1] [i_17 - 1] [i_17 + 1] [i_16 + 1])))))));
                        }
                    }
                }
                arr_55 [i_15] = (min((var_6 != var_2), (var_9 == var_7)));
                var_22 = (((arr_37 [0] [i_16] [i_16 - 1]) | (arr_15 [i_15] [i_15] [18] [i_15] [i_15])));
            }
        }
    }
    #pragma endscop
}
