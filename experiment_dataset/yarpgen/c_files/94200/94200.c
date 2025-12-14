/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_13 = (arr_3 [i_0] [i_1 - 3]);
                            var_14 = (min(65535, ((((arr_4 [i_2] [i_3 + 1] [i_2 - 1]) ? (0 & 7) : (arr_3 [i_0] [i_0]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_15 = (((((var_11 << (((((arr_11 [i_1] [i_4] [i_5]) ? 65535 : -3605601151798154798)) - 65521))))) <= (((arr_1 [14] [i_1 - 2]) / (arr_11 [4] [1] [i_4])))));
                            var_16 = (((arr_0 [i_4]) ? (arr_11 [13] [i_1] [i_0]) : var_0));
                            var_17 = var_10;
                            var_18 = (arr_1 [i_0] [i_0]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        {
                            arr_26 [i_7] = (arr_24 [i_9] [i_8 - 3] [i_7] [i_7] [i_6]);
                            arr_27 [i_7] [i_7] [i_7] = (((arr_16 [i_6]) ^ ((~(arr_24 [i_8] [i_8 - 1] [i_8 + 1] [10] [i_8 - 1])))));
                            var_19 = (arr_19 [i_7] [i_8 - 1] [i_9 - 1] [i_9 - 1]);
                            var_20 = ((-((+(((arr_15 [1] [i_9]) ? -3605601151798154798 : 1002160014))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        {
                            var_21 = ((var_5 <= (~var_9)));
                            arr_34 [i_7] [i_7] [1] [i_11] = (((((9 + (arr_28 [i_7] [i_10] [18])))) ? (((-((21 ? (arr_19 [i_6] [i_7] [i_10] [i_11]) : var_12))))) : (((arr_22 [i_11] [i_10] [i_6] [i_6]) ? var_9 : ((((arr_19 [11] [11] [i_10] [i_11]) ? var_7 : var_1)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
