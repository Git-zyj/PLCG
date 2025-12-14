/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_4, 7583418173003289284));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = -19946;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_15 = arr_2 [i_3] [i_1];
                                var_16 = ((~((var_8 ? (arr_4 [i_0]) : (arr_8 [i_0] [i_1] [i_1] [i_0] [i_3] [i_4])))));
                                var_17 = (min(var_17, -19950));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_18 = (((max((161 | 94), ((-(arr_6 [i_0]))))) | ((((-32767 - 1) * var_2)))));
                        var_19 = ((((((((var_8 >> (var_7 + 9310)))) ? (((var_0 || (arr_8 [i_0] [i_1] [i_1] [i_2] [i_2] [i_5])))) : (max(0, -2100993407))))) ? (((!(arr_6 [i_0])))) : 32765));
                        arr_16 [i_0] [i_1] [i_0] [i_5] = (max((arr_2 [i_1] [i_2]), ((max((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), var_11)))));
                        arr_17 [i_0] [i_1] [i_2] [i_0] = ((-(arr_13 [i_2] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        var_20 = (max(var_20, (102 > -32766)));
                        var_21 = (min(var_21, (((-var_8 ? (var_8 >= var_6) : 0)))));
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        var_22 = (arr_22 [i_7] [i_7]);
        arr_24 [i_7] = ((((var_6 ? (-127 - 1) : 32765)) >> (9223372036854775803 - 9223372036854775790)));
    }
    #pragma endscop
}
