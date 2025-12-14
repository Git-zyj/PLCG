/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1 - 1] = ((2897 != (arr_3 [i_0 + 1] [i_0 + 1] [i_1 + 1])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_17 [6] [i_2] [i_2] [i_2] [i_2] [7] = ((((((((7006582708235666054 ? (arr_13 [i_4] [1] [i_2] [i_2] [i_1] [i_0]) : 2897))) ? var_17 : ((2897 ? (arr_6 [1]) : var_7))))) ? (((arr_9 [i_0 + 1] [i_1 + 1] [i_1 + 1]) ^ var_15)) : ((var_3 ? 2902 : var_1))));
                                arr_18 [i_0] [i_2] [6] [i_2] [7] = ((((arr_13 [i_0] [i_0 + 1] [i_1 - 1] [i_1 + 4] [0] [i_4 - 1]) ? (arr_4 [i_0 + 1]) : 1)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 6;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                arr_23 [0] [i_6] |= ((((((arr_16 [i_5] [i_5] [i_5 - 1] [i_5] [i_5 + 4]) || var_15))) >= (((arr_16 [i_5] [i_5] [i_5 - 1] [i_5] [i_5 + 4]) - (arr_16 [i_5] [i_5] [i_5 - 1] [0] [i_5 + 4])))));
                var_20 = (((var_10 ? var_10 : var_19)) != ((var_15 ? 31525197391593472 : var_0)));
                var_21 = ((((130944 ? var_1 : (arr_16 [i_5 + 1] [10] [i_5 + 1] [i_5 - 1] [9]))) * ((((-31525197391593480 == (arr_16 [i_5 - 1] [i_5] [i_5] [i_5 - 1] [i_5])))))));
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 8;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                arr_31 [i_5] [i_6] [i_7] [i_8] [i_9] = (((((7468 + (arr_29 [i_7 + 1] [i_5 + 2] [i_5 - 1] [i_5 - 1])))) ? (arr_29 [i_7 + 2] [i_5 + 3] [i_5 + 4] [i_5 + 2]) : ((-31525197391593471 ? -31525197391593473 : 2996956487043907348))));
                                var_22 = (max(var_22, (arr_5 [i_5 + 1])));
                                var_23 = (var_11 | 31525197391593479);
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = var_17;
    var_25 = var_17;
    #pragma endscop
}
