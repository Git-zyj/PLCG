/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 7552;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 |= (max((max((((var_3 || (arr_5 [6] [0])))), (((arr_5 [i_1] [i_0]) / var_8)))), (((var_8 || var_5) ^ ((var_1 ? var_0 : var_3))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_12 -= (max((arr_0 [i_0]), (((202 & var_4) ? var_3 : ((min(-7543, var_6)))))));
                                var_13 = (min(var_13, (arr_3 [i_1 + 1])));
                            }
                        }
                    }
                    var_14 = (min(var_14, (((((((((var_9 ? var_7 : var_0))) ? (arr_1 [i_0] [i_1]) : var_7))) && -7553)))));
                    var_15 = (((((~((min(var_5, var_7))))) + 2147483647)) << (var_3 - 16374));
                }
            }
        }
    }
    var_16 -= (((((((min(var_0, var_3))) ? var_6 : (~var_9)))) ? (((max(var_8, 1)))) : var_1));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 9;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 9;i_7 += 1)
            {
                {
                    var_17 = (arr_0 [i_5]);
                    var_18 = ((+(((~7552) ? var_8 : var_0))));
                    var_19 = (44 || var_5);
                    arr_20 [i_5] [i_7 + 2] |= (((((max(36149, var_4)))) != (((((var_3 ? 4115115792 : var_5))) ? var_0 : (var_4 <= var_8)))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 9;i_9 += 1)
                        {
                            {
                                var_20 = ((((max(-5217, var_8))) ? (((var_4 > (arr_23 [i_9 + 1])))) : ((var_8 ? ((var_7 >> (7552 - 7528))) : var_2))));
                                var_21 = var_4;
                                arr_27 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = var_8;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
