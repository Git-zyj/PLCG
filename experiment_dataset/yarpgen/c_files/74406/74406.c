/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) ? ((((arr_1 [i_0] [i_0]) || ((max(var_12, 85)))))) : (min((arr_1 [i_0] [i_0]), (arr_0 [i_0])))));
        var_14 |= (arr_0 [9]);
        arr_3 [1] = ((((!(arr_0 [i_0]))) ? (max(((-(arr_0 [i_0]))), (arr_0 [i_0]))) : (max((((arr_1 [i_0] [i_0]) ^ (arr_0 [i_0]))), ((~(arr_1 [16] [i_0])))))));
        arr_4 [i_0] [i_0] = ((!((min((arr_1 [i_0] [i_0]), ((max(var_1, var_12))))))));
        arr_5 [i_0] [i_0] = (max(((var_2 | (arr_1 [i_0] [i_0]))), (((min((arr_1 [i_0] [i_0]), (arr_1 [1] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    {
                        arr_18 [i_1] [i_2] [i_3 + 1] [i_4] [i_4 - 1] [i_2] = arr_0 [i_3];
                        arr_19 [i_1] [i_2] [i_1] [2] = (!2188982887);
                    }
                }
            }
        }
        arr_20 [i_1] = ((((((((~(arr_15 [0])))) ? (arr_14 [1] [8] [8] [i_1]) : (arr_15 [i_1])))) ? ((var_11 ? (1 & 0) : (arr_16 [i_1] [i_1] [i_1] [i_1]))) : ((((!(((arr_12 [i_1] [i_1] [i_1] [1]) >= var_2))))))));
        arr_21 [i_1] [i_1] = var_4;
        arr_22 [i_1] = -1;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_15 += (!21004);
        arr_26 [i_5] = ((-(arr_24 [i_5])));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    arr_32 [i_7] [i_6] = var_4;
                    arr_33 [i_5] [i_5] [i_5] = (((arr_27 [i_5]) ? (arr_25 [i_5] [i_6]) : (((arr_24 [i_6]) & (arr_23 [i_7])))));
                    var_16 = arr_27 [i_5];
                    arr_34 [i_5] [i_6] [i_7] = ((~(arr_30 [i_5] [i_6] [i_7] [i_5])));
                    arr_35 [1] = (arr_31 [i_5] [i_6] [16]);
                }
            }
        }
        arr_36 [i_5] = (arr_30 [i_5] [i_5] [i_5] [i_5]);
    }
    #pragma endscop
}
