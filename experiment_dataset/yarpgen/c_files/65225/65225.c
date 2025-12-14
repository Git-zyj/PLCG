/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = ((var_2 ? ((var_12 ? var_14 : (arr_1 [i_0] [i_0]))) : -1851025318826822808));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_17 = ((((var_12 & var_5) || (((var_5 ? var_3 : -1))))));
                    arr_9 [i_2] [i_1] [i_1] [6] = (arr_2 [i_1]);
                    arr_10 [i_1] [i_1] [i_1] = ((((((196 >= var_14) > (var_11 - 8630330512733941237)))) != (((var_7 < 32751) ? var_8 : (var_11 != var_9)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 -= (min(((~(arr_0 [i_0]))), var_5));
                                var_19 = ((((-32734 / (((arr_7 [i_1] [i_3] [i_4]) ? var_10 : var_8)))) - ((((arr_3 [i_3]) <= (max(var_6, -6807360858048315592)))))));
                                var_20 = var_6;
                                arr_17 [i_1] [i_1] [i_2 + 2] [i_1] [3] [i_1] = (((((((max(var_15, 59))) + ((var_7 ? var_4 : var_6))))) ? ((var_0 / ((var_1 ? var_8 : -1675048663)))) : var_0));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        arr_20 [i_5] = (-(((var_15 && (arr_18 [i_5])))));
        arr_21 [i_5] = var_16;
    }
    var_21 = ((((((var_12 && var_12) ? (var_14 && 18446744073709551615) : (min(var_15, var_15))))) ? var_9 : var_0));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            {
                var_22 = ((((((var_13 ? 185 : (arr_25 [i_7] [i_6]))) > ((72057456598974464 ? (arr_25 [i_6] [i_6]) : -772617535)))) ? var_12 : ((((15 * 0) ? 0 : var_1)))));
                arr_26 [i_6] [i_7] = 49;
            }
        }
    }
    var_23 = ((var_16 + (((((var_10 ? 255 : 83972797))) & (var_14 % var_11)))));
    #pragma endscop
}
