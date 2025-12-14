/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((min(0, 14087372002989000083)))));
    var_21 = var_3;
    var_22 = ((var_2 ? var_1 : var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_7 [i_2] [i_2] = (min((((-var_11 && (arr_6 [i_1] [i_1] [7] [i_0])))), ((-100 ? -100 : -7689420282051602199))));
                    arr_8 [i_0] [i_2] [i_2] = (arr_6 [i_0] [i_0] [i_1] [i_2]);
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_16 [8] [5] [i_3] [0] [i_0] = (((!var_14) | 229));
                                arr_17 [i_5] [0] [i_3] [i_1] [i_0] &= (((((((arr_11 [i_5] [i_3] [i_1] [7]) ? 0 : (arr_3 [2] [i_5]))) & (((max(-100, var_12)))))) * (!-26373)));
                                var_23 = var_13;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_24 = (max(((((14784 ? 32468 : (arr_5 [9] [9] [i_3]))) | (arr_6 [i_0] [i_1] [i_3] [1]))), (((arr_12 [i_6 + 1] [i_6] [i_6] [i_6] [i_6 + 1]) & (arr_20 [i_6 + 1] [9] [i_6] [i_6])))));
                                var_25 = (arr_6 [i_3] [1] [i_6 - 2] [i_6 - 3]);
                            }
                        }
                    }
                    var_26 = (((arr_18 [i_0] [i_0] [i_0] [i_0] [i_1] [1]) >= (((!((((arr_12 [i_0] [0] [i_1] [i_3] [7]) ? (arr_10 [i_1] [i_0]) : -98))))))));
                    var_27 *= (min(1, (arr_10 [i_0] [i_0])));
                    var_28 *= (~-86);
                }
                var_29 = (((arr_5 [i_0] [i_0] [i_0]) ? 1520226324219324685 : (arr_6 [i_0] [i_0] [i_1] [9])));
            }
        }
    }
    #pragma endscop
}
