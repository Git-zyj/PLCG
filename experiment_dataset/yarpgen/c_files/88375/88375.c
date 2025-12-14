/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_1] = (max((((9214364837600034816 < (arr_1 [i_0] [i_0])))), ((9214364837600034816 ? ((9214364837600034816 ? 9214364837600034816 : (arr_0 [i_0]))) : (((((-2147483647 - 1) || var_3))))))));
                var_14 = (max((2185 % 9214364837600034816), (-32767 - 1)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_15 = ((-(((var_1 + 65535) ? ((((!(arr_0 [i_3]))))) : (((arr_0 [i_3]) ? var_8 : 9214364837600034816))))));
                    arr_14 [i_2] [i_2] [i_2] [i_4] = (min((min(((((arr_5 [i_3]) ? 2185 : var_3))), (var_5 ^ 64))), ((min((var_13 + 1), ((min(2181, 39))))))));
                    arr_15 [i_2] [i_3] [i_4] = var_10;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_21 [9] [9] [i_4] [i_5] [i_4] [i_4] = (((var_3 ? var_8 : 2184)));
                                var_16 = (min(6119559361052292109, (!var_5)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            {
                                arr_26 [i_3] [i_4] [2] = (((((((var_0 ? var_13 : 232))) || ((((arr_24 [i_4] [i_4]) ? (arr_22 [i_2] [i_2] [i_2] [i_2]) : var_12))))) || (~var_5)));
                                arr_27 [i_4] [i_3] [i_4] [i_7 + 1] [i_8] = ((118 ? (((min(var_11, -17)))) : ((-(var_4 & -9214364837600034817)))));
                                arr_28 [i_2] [i_3] [i_4] [i_4] [i_3] |= (((min(var_2, var_7)) > ((max((arr_3 [i_7 + 1]), (arr_3 [i_7 + 1]))))));
                                var_17 = (max((((arr_25 [i_2] [6] [i_4] [i_7] [i_7 - 1] [i_3] [i_2]) ? ((var_3 ? var_4 : -4974495233607021119)) : (((var_9 ? 15842 : 1))))), (~-4974495233607021119)));
                                arr_29 [3] [i_4] [9] [i_4] [i_4] [i_2] = (((arr_18 [1] [1] [i_4] [1]) ? (((~var_4) ? var_4 : (min(7200271409313785243, (arr_11 [i_7]))))) : (((((arr_22 [i_8] [i_7] [i_4] [5]) > 0)) ? (arr_22 [i_7 + 1] [i_8] [i_7 + 1] [i_7 + 1]) : (!var_2)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
