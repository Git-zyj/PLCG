/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_18 = (max(var_18, 67));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_19 -= (((arr_0 [i_0 - 1]) ? var_7 : (arr_9 [i_0] [i_1 + 1] [i_3])));
                        var_20 = ((arr_0 [i_0 - 1]) == (arr_0 [i_0 - 1]));
                        var_21 -= (((((1 ? 134 : 32763))) ? (arr_5 [i_0 - 2] [i_0 - 2]) : (((arr_4 [i_3] [10] [i_0 + 1]) ? (arr_7 [i_0 - 1] [i_1] [1] [i_3]) : (arr_4 [i_0] [i_2] [i_3])))));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            arr_13 [i_0 + 1] [i_0] |= (((((((arr_9 [1] [i_4] [i_4]) || (arr_4 [i_4] [i_4] [7]))))) == (arr_0 [i_0])));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_22 = (max(var_22, var_16));
                            var_23 = (((((arr_2 [i_4]) ? (arr_12 [i_0]) : (arr_16 [i_5] [i_7]))) >= ((((arr_7 [i_0 - 2] [1] [10] [i_6 - 1]) ? (arr_2 [i_0 + 1]) : var_13)))));
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            var_24 -= (arr_5 [i_8] [i_0]);
            arr_28 [i_8] [12] = 8157;
        }

        for (int i_9 = 1; i_9 < 11;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        {
                            var_25 = (max(var_25, ((((var_11 << (((arr_30 [i_0] [i_0]) - 40))))))));
                            arr_44 [i_9] [i_11] [i_10] [i_10] [i_11] [i_0] = (arr_22 [6] [4]);
                        }
                    }
                }
            }
            arr_45 [i_0 - 1] [i_9] = var_0;
            arr_46 [i_0] = ((-var_7 * ((((var_10 && (arr_32 [i_0 - 2] [i_0] [i_0])))))));
        }
    }
    var_26 -= var_13;
    var_27 = (((((25591 | 3596995341851159406) >= var_13)) ? ((min(var_11, (var_6 || var_6)))) : ((((var_17 ? var_7 : var_13)) - var_2))));
    #pragma endscop
}
