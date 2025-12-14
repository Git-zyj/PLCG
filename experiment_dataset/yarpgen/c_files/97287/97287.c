/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_3 == var_2) ? var_10 : (((!(((var_3 ? var_3 : var_12))))))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_19 = (((arr_1 [i_0] [i_0]) <= (((63 - 15732653224426906653) & var_2))));
        arr_2 [i_0] = (((arr_0 [i_0]) ? ((((var_3 + 2147483647) >> (((arr_0 [i_0 + 1]) - 51))))) : (((var_12 * var_2) ? (((-1 ? -19181 : (arr_0 [i_0])))) : var_3))));
    }

    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        var_20 = (min(var_20, var_15));
                        var_21 ^= var_16;
                    }
                }
            }
        }
        var_22 = 533;
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_23 = ((((((2714090849282644968 * (arr_3 [15])) != 2714090849282644944)))));
        var_24 = var_7;
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    {
                        var_25 = (((((max(var_15, (arr_15 [i_8]))))) == (min((arr_22 [i_9]), (max(var_11, var_0))))));
                        var_26 = ((-102 ^ ((((var_8 ? (arr_3 [i_8]) : 71)) ^ (arr_21 [i_6] [i_7])))));
                        var_27 += (((!var_14) && var_13));
                    }
                }
            }
        }
        var_28 = var_7;
    }
    for (int i_10 = 1; i_10 < 20;i_10 += 1)
    {
        var_29 = ((var_0 ? (((arr_30 [i_10]) & 19180)) : (((arr_12 [i_10] [i_10 + 1]) ? (arr_11 [2] [i_10 - 1] [i_10 + 1] [20] [i_10] [2]) : var_4))));
        var_30 = (((((arr_8 [i_10 + 1] [i_10 + 1] [i_10 + 1]) ? (arr_8 [i_10 + 1] [i_10] [i_10 - 1]) : var_14)) > (((arr_8 [i_10 - 1] [i_10 + 1] [i_10 + 1]) & (arr_8 [1] [20] [i_10])))));
    }
    #pragma endscop
}
