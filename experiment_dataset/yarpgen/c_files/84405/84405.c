/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~((((max(var_5, 252))) - var_4))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_2] [i_1] [i_2 + 1] = ((((((arr_3 [i_0] [i_0]) >> (1 || -67)))) ? (((((arr_0 [i_2]) & (arr_3 [i_0] [i_0]))) + (arr_2 [1] [i_2]))) : ((((var_6 ? var_0 : (arr_2 [i_1] [i_2])))))));
                    var_14 = (arr_2 [i_0] [i_1]);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_15 += (((((~(arr_0 [i_3])))) ? (arr_2 [i_1] [i_1]) : -var_12));
                        var_16 ^= (1 + -0);
                        var_17 = arr_4 [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 3];
                        var_18 -= (arr_4 [2] [i_2] [i_0] [i_2 + 1]);
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        arr_13 [i_2] [i_2] = (((((arr_12 [i_0] [i_0] [i_2 + 1] [16] [i_0]) ? (arr_8 [i_4] [i_0]) : (arr_5 [i_2 + 2]))) <= (arr_4 [i_4 - 1] [i_4 + 1] [i_2] [i_4 + 1])));
                        arr_14 [i_2] = ((!(arr_10 [i_0] [i_2] [i_0])));
                        var_19 += ((arr_5 [i_2 + 2]) > (arr_5 [i_2 - 1]));
                        var_20 = ((-(arr_10 [i_2 + 2] [i_2 + 2] [i_2 + 2])));
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_21 = ((-(arr_9 [i_0] [i_0] [i_0])));
                        var_22 = (((((!(arr_1 [i_2 + 2])))) | -1));
                    }
                    arr_17 [i_0] [i_0] [i_2] [i_2] = ((+(max((arr_16 [i_2 + 1] [1] [i_2 - 1] [i_2 + 3] [i_2]), (((arr_15 [i_2] [i_2] [i_2 + 2] [i_2]) - 4))))));
                    var_23 &= ((var_1 ? (((arr_10 [i_2 + 3] [i_2 + 2] [i_2 + 2]) | 1)) : (1 % 209)));
                }
            }
        }
    }
    var_24 = ((((-var_2 ? ((0 ? var_4 : var_8)) : ((var_5 ? var_1 : var_2))))) || (((var_3 ? ((var_1 ? var_11 : var_2)) : var_11))));
    #pragma endscop
}
