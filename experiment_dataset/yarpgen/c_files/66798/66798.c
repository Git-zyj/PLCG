/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_20 = (min(var_20, var_11));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_21 -= (!var_6);
                        var_22 += (1 + var_3);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_21 [i_0] [i_4] [i_5] [i_6] [i_6] [i_7] = (((!var_14) ? 1093892194 : var_7));
                                arr_22 [i_0] [i_7] [i_5] [i_5] = (i_7 % 2 == zero) ? ((((((((var_18 << (((arr_5 [i_4] [i_5] [i_7] [i_7 - 1]) - 1296592228))))) ? 1093892194 : 1))) != (max(var_19, 1093892183)))) : ((((((((var_18 << (((((arr_5 [i_4] [i_5] [i_7] [i_7 - 1]) - 1296592228)) + 1275571982))))) ? 1093892194 : 1))) != (max(var_19, 1093892183))));
                                arr_23 [i_7] [i_7] = 215258777;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_23 -= ((1133833300 ? (arr_16 [i_9] [i_9] [i_8 + 1] [i_4 + 1]) : (((max((arr_27 [i_0] [i_4] [i_5] [i_8] [i_9]), (!var_9)))))));
                                var_24 -= arr_11 [i_4] [i_5] [i_4];
                                var_25 = (((~var_9) ? (arr_15 [i_0] [i_0]) : (((((arr_18 [i_9 - 1] [i_8] [i_5] [i_0] [i_0] [i_0 - 2]) ? (arr_28 [i_9] [i_5] [16]) : 32763)) - (arr_7 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_0 - 1])))));
                                arr_29 [i_9] [i_8] [i_5] [1] [1] = (arr_8 [i_0 - 1] [i_8 + 1] [i_8 + 1] [12]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 2; i_10 < 19;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 1;i_12 += 1)
            {
                {
                    var_26 = var_8;
                    var_27 += ((((arr_13 [i_10 - 2] [i_10 - 1] [i_10] [i_10]) + (arr_15 [i_10 + 2] [i_10 - 2]))));
                }
            }
        }
    }
    var_28 = (var_2 | ((-1093892197 & ((max(-32752, var_0))))));
    #pragma endscop
}
