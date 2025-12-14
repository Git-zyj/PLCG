/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = var_0;

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_16 = ((~(((arr_9 [i_1 + 1] [i_3] [i_1] [i_1] [i_3] [i_1 + 1]) ? (arr_9 [i_1 + 1] [i_3] [i_1] [i_1 + 1] [i_3] [i_1 + 1]) : (arr_9 [i_1 + 1] [i_3] [i_1 + 1] [i_1 + 1] [i_3] [i_1 + 1])))));
                        arr_11 [i_3] [i_2] [i_1] [i_3] = var_6;
                        arr_12 [3] [i_3] = (((arr_3 [i_3] [i_2] [i_1]) == ((var_11 + (arr_2 [1] [i_1 + 1] [i_2])))));

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_17 = (max(var_17, 1610));
                            var_18 = ((~(((max(var_8, var_6))))));
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_19 ^= var_6;
                            var_20 ^= (((max((arr_8 [i_1 + 1]), (arr_8 [i_1 + 1])))) ? ((var_7 << (2855 - 2839))) : (((((var_9 << (var_1 - 54321)))) ? ((2855 ? var_14 : var_8)) : -2856)));
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            arr_20 [i_0] [i_1] [i_3] [i_0] [i_6] = ((-(((arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1]) ? var_3 : 112))));
                            var_21 = (((((-(arr_14 [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1])))) ? var_13 : (max(((var_0 ? 56 : 2855)), var_7))));
                            var_22 = (max(var_22, (((~(((!var_13) | (arr_4 [i_0] [i_6] [i_0]))))))));
                        }
                    }
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        var_23 = ((((-(arr_9 [i_0] [i_1 + 1] [i_7 - 1] [i_7 + 1] [i_0] [i_1 + 1]))) | (!var_13)));
                        var_24 = (!((((arr_17 [i_2] [i_7] [6] [i_2] [0] [i_1] [i_2]) ? (arr_17 [i_2] [i_1] [i_2] [2] [i_2] [i_7 + 1] [1]) : var_12))));
                    }
                }
            }
        }
    }
    var_25 = ((-((((!537273460) <= var_0)))));
    #pragma endscop
}
