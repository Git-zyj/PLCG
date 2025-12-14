/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_10 = (((var_4 * (min(var_3, var_6)))) <= (((226 / ((max(511, 55)))))));
                                arr_14 [7] [i_3] [i_2] [5] [0] [5] = var_1;
                                arr_15 [i_2] [i_1] [i_2] [7] [i_4] = (((!(max(var_4, var_9)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 7;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 8;i_6 += 1)
                    {
                        {
                            arr_22 [i_0] [8] [i_5] [i_5 - 1] [i_6 - 1] [i_6] = (min((((((var_9 ? var_7 : var_2))) ? var_6 : (max(var_2, var_5)))), var_1));
                            arr_23 [4] [i_5] [i_5] [i_6] = var_6;
                            arr_24 [i_5] [i_5] [i_1] [i_5] = (max((((((var_3 ? var_5 : var_7))) ? (max(var_1, var_0)) : ((var_4 ? var_4 : var_7)))), -var_4));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_11 = ((var_5 ? (((var_9 >> ((((var_7 ? var_0 : var_8)) - 6805))))) : ((var_7 ? var_3 : ((var_2 ? var_8 : var_3))))));
                            arr_30 [i_0] [i_1] [i_8] [i_7] = (((((-((var_3 ? var_8 : var_3))))) ? ((1 ? ((1 ? 0 : 0)) : ((1 ? 1 : 255)))) : var_0));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 4; i_11 < 15;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 16;i_13 += 1)
                        {
                            {
                                var_12 = ((((~(min(var_1, var_9)))) & var_7));
                                arr_44 [i_9] [i_10] [i_11] [i_13] [i_13] [i_10] [i_11] = (max(var_5, var_4));
                                arr_45 [4] [i_13] [i_13] [i_13] [i_13] = (((var_3 * var_6) ? (min(var_5, var_7)) : ((max(var_0, var_1)))));
                                var_13 = var_1;
                                var_14 = ((var_8 ? (((min(((max(var_8, var_8))), (max(var_6, var_6)))))) : (((var_2 ? var_0 : var_5)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 16;i_15 += 1)
                        {
                            {
                                var_15 = ((((min(((var_4 ? var_3 : var_6)), (((var_2 ? var_8 : var_2)))))) ? ((var_8 ? (max(var_6, var_2)) : (((var_0 ? var_0 : var_9))))) : (((var_6 ? var_2 : var_5)))));
                                arr_52 [i_11] [i_11] [i_11 - 2] [i_11] [i_11] [11] = (min((var_0 / var_3), var_9));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 16;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 16;i_17 += 1)
                        {
                            {
                                var_16 = (max(var_0, (!var_1)));
                                var_17 = ((var_4 % (((max(var_7, var_3)) ^ -var_4))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
