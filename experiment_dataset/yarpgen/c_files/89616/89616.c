/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(1, (((((var_7 ? -29073 : var_0))) ? var_9 : -var_6))));
    var_12 = (~(1111458440 >= 248));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((((max(var_2, var_5))) ? ((1111458440 ? (((var_2 ? var_6 : (arr_2 [i_1])))) : ((57 ? var_0 : (arr_1 [i_2]))))) : (arr_4 [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_13 = (min(1068987815, ((var_6 | (arr_9 [i_1 - 2] [i_1] [i_2] [10] [i_0 - 3])))));
                                var_14 ^= ((!(((-(var_6 / 3183508862))))));
                                arr_14 [i_0] [8] [i_0] [i_1] [11] [i_0] [16] = (((arr_1 [i_1 - 1]) ? 4294967295 : (((-682440804 ? (arr_10 [i_1 + 2] [i_0 - 4]) : var_5)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_15 = 149;
                                arr_20 [i_0] [i_1] [i_1] [i_0] [i_6] = ((-52 ? (((arr_2 [i_1]) ? (arr_18 [i_0 + 1] [i_1 - 1] [i_2] [i_1] [i_6]) : (arr_2 [i_1]))) : (((arr_2 [i_1]) * (arr_1 [i_1 - 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            {
                arr_25 [i_7] = ((-((((((arr_21 [i_7] [i_7]) ^ 7))) ? (min(var_10, var_8)) : -699428397))));
                var_16 = (max(var_16, ((((((-17611 ? (arr_24 [i_8]) : -682440804))) ? (((1651276577 / var_2) / ((1 ? 79 : (arr_24 [i_7]))))) : var_6)))));
            }
        }
    }
    #pragma endscop
}
