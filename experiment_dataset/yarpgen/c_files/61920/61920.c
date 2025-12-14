/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(-2026514057, 1117103900));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    var_18 += (arr_5 [i_2 + 3]);
                    arr_8 [4] [4] [i_0] = (arr_1 [i_0]);
                }
            }
        }
        arr_9 [i_0] = (((arr_1 [i_0 + 1]) + (((arr_1 [i_0]) ^ (arr_4 [i_0] [i_0] [i_0 + 4] [i_0])))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    {

                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            arr_24 [i_6] [i_6] [i_6] = ((((var_7 ? (arr_21 [i_4] [i_5] [i_5] [i_6] [i_6] [i_7 + 1]) : (arr_21 [12] [i_7] [12] [i_7] [i_7 + 1] [i_7 - 1]))) & ((max((arr_11 [i_7 + 1]), (arr_11 [i_7 + 1]))))));
                            arr_25 [i_3] [i_4] [i_3] [i_5] [i_6] [22] [i_7 - 1] |= (((arr_19 [i_6]) ? 245 : ((max(11216, (arr_21 [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7] [i_7 + 1] [i_7 - 1]))))));
                            var_19 = (((max((arr_21 [i_7 + 1] [i_7 + 1] [15] [i_7] [i_7 - 1] [i_7]), (arr_21 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7]))) && (((arr_21 [i_7 + 1] [i_7 + 1] [i_7] [i_7] [i_7 - 1] [i_7]) < (arr_21 [i_7 + 1] [i_7 + 1] [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1])))));
                        }
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            arr_28 [i_6] [i_6] [i_6] [i_6] [i_4] [i_3] = (~28);
                            arr_29 [i_3] [i_6] [i_6] [16] = ((((((arr_18 [i_3] [i_4] [1] [i_6]) ^ (arr_18 [i_3] [i_4] [i_5] [i_6])))) ? ((var_16 ? (arr_22 [i_3] [i_3]) : (arr_22 [i_3] [i_3]))) : ((min((arr_22 [i_4] [i_5]), (arr_22 [i_8] [i_5]))))));
                        }
                        var_20 += ((+(((((arr_22 [i_6] [i_3]) + 2147483647)) >> (((arr_22 [i_5] [i_4]) + 30663))))));
                    }
                }
            }
        }
        var_21 = min((max((arr_13 [i_3] [17] [i_3]), 41)), (((~(arr_15 [i_3] [i_3] [i_3])))));
    }
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        arr_34 [i_9] = (max((((arr_21 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) & (arr_30 [i_9] [i_9]))), ((max((arr_21 [i_9] [16] [i_9] [i_9] [i_9] [i_9]), (arr_21 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))));
        var_22 = (min(var_22, (((!(max(1, (arr_31 [i_9]))))))));
        var_23 = (min(var_23, ((((max(3584222115, 83)) + (!7405972994729517029))))));
        arr_35 [i_9] [i_9] = 0;
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        arr_39 [i_10] = (arr_19 [i_10]);
        arr_40 [i_10] [1] = (arr_14 [i_10]);
        var_24 = (((arr_11 [i_10]) ? (arr_11 [i_10]) : (arr_10 [i_10])));
    }
    #pragma endscop
}
