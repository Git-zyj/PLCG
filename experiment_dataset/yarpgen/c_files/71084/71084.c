/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = 3796490887152074190;
        arr_3 [i_0] = ((((!(arr_0 [i_0]))) ? -1 : 133));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] = -8033;
        arr_8 [i_1] [13] = ((arr_6 [i_1]) ? ((((!(arr_4 [i_1] [i_1]))))) : (arr_5 [i_1]));
        arr_9 [i_1] = (arr_6 [i_1]);
        var_15 = (((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_1])));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_21 [i_5] [6] = (arr_19 [i_2] [i_5] [i_2] [8] [i_2] [i_2]);
                        arr_22 [i_5] [i_5] = (((((arr_14 [i_3] [i_4] [i_5]) + 9223372036854775807)) >> 0));
                        arr_23 [11] [i_3] [i_5] [i_5] = (((-var_12 ? ((-(arr_12 [16]))) : (!-4294870896322221772))));
                        arr_24 [i_5] = ((+(((arr_12 [i_4]) ? var_4 : (((26820 ? var_6 : (arr_19 [4] [i_5] [i_3] [i_3] [i_4] [i_5]))))))));
                    }
                }
            }
        }
        arr_25 [i_2] = ((~(arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_16 = ((-(arr_27 [i_6] [i_6])));
        arr_28 [i_6] = ((~(23 >= 100)));
        arr_29 [i_6] = (((arr_26 [i_6]) ? (arr_27 [i_6] [i_6]) : 15950204286487092546));
        var_17 = ((var_7 ? (arr_26 [i_6]) : (((arr_27 [i_6] [i_6]) ? (arr_27 [i_6] [i_6]) : 2047))));
    }
    var_18 = ((~((var_10 << (-var_1 - 68)))));
    #pragma endscop
}
