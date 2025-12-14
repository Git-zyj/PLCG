/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, (((var_11 ? ((((min(var_5, var_4))))) : ((9 / (arr_7 [i_0] [i_1] [8] [i_0]))))))));
                            var_15 = var_2;
                            var_16 &= (max((((((((arr_8 [i_0]) && var_7))) - (arr_2 [i_3] [i_2 - 1] [i_2])))), ((202 ? var_3 : var_3))));
                        }
                    }
                }
                var_17 += ((((((min(54, 1))) ? 2216615441596416 : -1)) * var_4));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {
                    arr_19 [i_4] [i_4] = (((~(arr_7 [17] [i_4 - 2] [i_4] [i_6]))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_18 = ((arr_8 [i_4]) ? ((~(arr_8 [i_6]))) : (arr_4 [i_4] [i_6] [i_4 + 4]));
                                var_19 = (max(((18444527458267955198 ? ((2216615441596436 ? 0 : (-127 - 1))) : (arr_1 [i_8 - 1]))), 0));
                                arr_27 [i_6] [3] [i_6] [i_6] [i_4] = 9690;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            {
                                var_20 = (var_6 ? ((~(min(var_1, var_11)))) : ((var_13 ? var_7 : (((!(arr_6 [i_4 - 1] [i_5])))))));
                                var_21 = (((((min((arr_28 [i_9] [i_5] [1] [i_4]), var_5)))) < 7036104605326306210));
                                var_22 = (min(var_22, ((((((var_3 ? (var_2 <= 0) : var_12))) ? var_7 : (((arr_20 [i_4 - 1] [i_4 - 1] [i_6] [i_9] [i_9 + 1] [i_4 - 1]) / (arr_20 [i_4 - 2] [i_6] [11] [1] [i_9 - 2] [9]))))))));
                                var_23 = (((max((arr_9 [i_4 + 3]), (arr_9 [i_4 - 1])))) ? (((arr_20 [i_9 + 1] [i_6] [i_9 + 1] [1] [0] [i_9 + 1]) * (arr_20 [i_9 - 2] [13] [i_6] [i_9 - 3] [i_10] [i_9 - 2]))) : (arr_8 [i_6]));
                                var_24 = ((((arr_3 [i_6]) != (arr_3 [i_6]))));
                            }
                        }
                    }
                    var_25 = (max(var_25, 1614889731));
                }
            }
        }
    }
    #pragma endscop
}
