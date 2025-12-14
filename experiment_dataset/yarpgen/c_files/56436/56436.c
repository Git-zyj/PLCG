/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = (((((((((var_9 + 2147483647) >> var_5))) ? (min((arr_0 [i_0] [i_0]), var_12)) : 51710))) ? var_4 : ((~(arr_4 [15])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_15 = var_13;
                            var_16 = (max(var_16, 1));
                            var_17 += ((~(min(18446744073709551615, 1))));
                            var_18 -= (((((((1 ? 9886 : var_7)) >> (((var_1 | var_12) - 13816565779383779238))))) ^ (((((var_9 ? var_11 : var_11))) ^ (((arr_11 [i_0] [i_1]) & (arr_9 [i_1] [1])))))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    arr_14 [i_1] [i_1] [i_1] [i_1] = (min(6911395101879852066, 11535348971829699550));
                    var_19 ^= ((!((((var_8 & -441265636) & var_8)))));
                    var_20 = (min((((!(arr_11 [i_0] [i_1])))), (min(var_13, (arr_2 [i_0])))));
                    arr_15 [20] [i_1] [i_4] = ((((var_0 ? (((55 ? var_0 : var_7))) : (max((arr_11 [i_0] [17]), var_6)))) & (((((var_13 ? (arr_13 [i_4] [i_1] [i_0]) : var_13)) + (arr_2 [i_0]))))));
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_21 += ((((((arr_8 [i_0] [i_1]) ? var_12 : var_10))) ? (arr_8 [i_0] [i_5]) : (((arr_1 [i_0]) ? var_2 : (arr_1 [i_5])))));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_22 = (min(var_22, ((min((var_1 - var_8), (arr_4 [i_0]))))));
                                arr_22 [i_0] [i_6] [i_0] [1] = (max((arr_20 [i_0] [i_0] [16] [16] [i_5] [i_6 - 1] [1]), (((arr_16 [i_5] [i_6 + 2] [i_6 - 3] [i_6 - 3]) << (((min(var_12, var_2)) - 11880))))));
                            }
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    arr_25 [i_0] [i_8] [3] [6] = (65512 || 1);

                    for (int i_9 = 3; i_9 < 18;i_9 += 1)
                    {
                        arr_29 [i_0] [i_8] [i_8] [i_9 - 2] [i_8] = ((-((var_10 ? ((min(var_5, var_9))) : (arr_11 [i_9 - 3] [i_9 - 2])))));
                        arr_30 [i_0] [i_0] [i_0] [i_0] [i_8] [i_0] = (((arr_16 [i_9 + 1] [i_9 - 1] [i_9 - 1] [i_9 + 1]) || ((((arr_1 [i_8]) ? 250 : (!1))))));
                    }
                    var_23 -= ((((((((441265640 ? 0 : -441265636))) ? 18446744073709551615 : 61))) ? var_4 : 1));
                }
            }
        }
    }
    var_24 = (max(var_24, (var_2 == var_0)));
    var_25 = (min(var_7, var_12));
    var_26 = var_7;
    #pragma endscop
}
