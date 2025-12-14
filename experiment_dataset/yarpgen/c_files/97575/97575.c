/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_13 &= var_4;
        arr_4 [i_0] = ((~((var_10 ? (arr_0 [i_0]) : (arr_2 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        arr_18 [i_1] [i_4] [i_3] [i_2] [i_2 + 1] [i_1] = (~(((((max((arr_11 [i_1] [i_1] [i_1] [i_1]), (arr_13 [i_1] [i_1] [i_4])))) <= (((arr_10 [i_1] [i_3]) ? var_3 : (arr_17 [i_1 + 2] [i_2] [i_3] [9] [9] [i_3])))))));
                        arr_19 [i_1] = ((((((arr_11 [i_1 - 1] [1] [i_3] [i_4]) ? var_10 : var_0)) / ((var_11 % (arr_11 [i_1 - 1] [i_2 - 1] [i_3] [i_4]))))));
                        var_14 += ((((((arr_6 [8] [8]) ? (((arr_5 [i_4]) ? var_9 : (arr_11 [i_3] [i_3] [1] [i_3]))) : ((-(arr_10 [8] [i_3])))))) && (((-((-(arr_9 [i_1] [i_4]))))))));
                    }
                }
            }
        }
        var_15 = (arr_6 [8] [i_1]);

        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_16 += ((((((var_10 ? var_0 : var_1))) ? (!var_3) : ((var_7 ? var_10 : (arr_11 [i_1 - 1] [i_1] [i_5] [i_5]))))));
            arr_22 [i_1] [i_5] [i_5] = (arr_21 [11] [i_5] [i_5]);
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            arr_25 [6] [6] |= (min(((((~(arr_10 [1] [i_6]))))), (((((var_0 ? (arr_11 [i_6] [i_6] [i_1] [i_1]) : (arr_12 [12])))) ? ((max(var_11, var_11))) : (var_1 - var_0)))));

            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                var_17 += ((var_2 ? (((var_9 & (max(var_10, var_9))))) : (~-var_12)));
                var_18 = ((~((~(var_4 ^ var_2)))));
            }
            var_19 = ((~((((((arr_10 [i_1] [i_6]) ? (arr_24 [i_6] [i_1] [i_1]) : (arr_14 [i_1 + 1]))) != var_0)))));
        }
    }
    /* vectorizable */
    for (int i_8 = 3; i_8 < 15;i_8 += 1)
    {
        var_20 *= ((~((-(arr_5 [i_8])))));
        arr_31 [i_8] = ((-var_5 ? (((((arr_26 [i_8] [i_8]) && var_8)))) : (((arr_8 [i_8]) ? var_2 : (arr_6 [i_8] [i_8])))));
    }
    var_21 += var_1;
    var_22 ^= var_7;
    #pragma endscop
}
