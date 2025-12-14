/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((((var_3 ? var_5 : var_6))), var_6));
    var_12 = ((min(var_0, var_3)));
    var_13 &= (((((~var_9) ? (var_4 >= var_2) : var_0)) == (((var_6 ? var_9 : var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = ((((((arr_5 [i_0] [i_1]) * var_10)) >= (arr_2 [i_0]))) ? var_3 : (((max(var_8, (arr_2 [i_0]))) + (arr_5 [i_0] [i_0]))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_15 = (((!((((arr_2 [i_0]) ? (arr_1 [i_0]) : var_4))))));
                                var_16 = var_0;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_17 = (((((((var_7 ? var_6 : var_6))) ? ((((arr_3 [i_0]) - (arr_11 [i_0] [i_1] [15] [i_5] [i_5] [i_6])))) : var_8)) / ((min(var_4, ((-(arr_12 [i_0] [i_0] [i_0] [13] [i_0]))))))));
                            var_18 = (((((var_1 ? (arr_11 [i_6] [i_6] [i_6 - 2] [i_6] [i_6 + 1] [10]) : (arr_11 [i_6] [i_6] [i_6 + 2] [i_6] [i_6 + 2] [i_6 + 2])))) & (~var_7)));
                            var_19 = (-((((((arr_12 [i_0] [i_1] [i_5] [i_6] [i_6]) / var_4))) ? (min(var_9, var_7)) : var_6)));
                            var_20 ^= (max(((~(arr_8 [i_5] [i_5] [i_5 + 1]))), ((((arr_8 [7] [7] [i_5 - 1]) == (arr_8 [1] [i_5] [i_5 + 1]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
