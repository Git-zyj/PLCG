/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_13 ? var_14 : ((20528 ? 20527 : 20505))))) ? var_10 : var_3));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] = 1146237688427101617;
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_17 ^= (arr_12 [i_4] [i_3] [i_2] [i_0] [i_0]);
                                var_18 = (((arr_11 [i_0 - 1] [i_1] [i_2 + 1] [i_2 + 1]) ? (((arr_11 [i_0] [i_2] [i_2 - 1] [i_3]) ? (arr_8 [i_3] [i_0 - 1] [i_0]) : (arr_8 [i_0 + 1] [i_0 + 1] [19]))) : (arr_11 [i_0 + 1] [i_1] [i_2 - 2] [i_1])));
                            }
                        }
                    }
                }
                arr_14 [i_1] [i_0] [i_1] = (arr_13 [i_1] [i_0] [i_0]);
                arr_15 [i_0] [i_0] = ((2382473615 ? 20537 : 24287));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    var_19 = (arr_21 [i_5] [i_5]);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                arr_26 [i_5] [i_5] [i_5] [i_8] [i_9] [i_7] [i_5] = (arr_21 [i_5] [i_5]);
                                arr_27 [i_5] = var_6;
                                var_20 = 20514;
                                arr_28 [i_5] [i_5] [i_7] [i_8] [8] = ((105 ? 20519 : -72));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
