/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((~((var_6 ? var_12 : ((min(var_0, 23213)))))));
    var_21 = (min(var_21, var_11));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] [i_2] [i_2] [10] = var_9;
                            arr_11 [23] [i_1] [7] = (((arr_4 [16] [i_1] [i_2] [9]) ? ((((((arr_2 [i_0] [i_1] [i_1]) | (arr_1 [i_0] [i_1])))) ? (~2018560364) : (arr_7 [i_2] [i_1]))) : (arr_0 [17])));
                            arr_12 [i_0] [i_1] [i_2] [i_3 - 1] = ((((max(2018560369, 2018560337))) && ((((arr_0 [i_3 + 2]) ? (((((arr_6 [i_0] [9] [i_0] [0]) + 9223372036854775807)) << (((((arr_7 [3] [22]) + 32653)) - 34)))) : (((((arr_6 [16] [4] [14] [i_3]) < (arr_1 [i_0 + 1] [i_2]))))))))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    arr_16 [i_0] &= ((~(arr_15 [i_0 + 1] [i_0] [12])));
                    arr_17 [i_4] [i_4] = (((arr_0 [i_0]) ? 2018560391 : (!var_14)));
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    var_22 = (max(var_22, ((((arr_14 [i_5] [i_5] [i_5]) >= (arr_4 [i_0] [15] [i_1] [i_5]))))));
                    arr_20 [6] [i_1] [20] = 2018560368;
                    var_23 = -2018560365;
                    var_24 = (-114 ? ((var_0 << (arr_15 [i_0 - 1] [i_5] [2]))) : (arr_18 [i_0 + 1]));
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    arr_23 [4] [11] [i_6] = (((arr_19 [i_0] [i_0] [i_0] [i_0]) >= (arr_0 [i_0])));
                    var_25 = ((+(((arr_1 [i_0] [i_0]) * (arr_14 [i_6] [i_0 + 3] [1])))));
                }
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_26 = var_6;
                                var_27 = (((arr_9 [i_9] [22] [i_7] [i_1] [15] [22]) || ((((arr_21 [i_0 + 1] [i_1] [7]) % (arr_21 [i_0 - 2] [22] [23]))))));
                                arr_30 [i_7] [i_7] = ((((((arr_26 [i_7] [i_1] [i_7] [18] [i_8] [i_9]) ? (arr_21 [i_0] [8] [i_0]) : (32767 || 94)))) ? (max(-92, (arr_25 [i_0] [8] [i_7]))) : (((((((arr_18 [i_0 + 3]) >> (((arr_21 [15] [6] [i_7]) - 4767981417608489118)))) < (arr_15 [i_0] [i_7] [14])))))));
                            }
                        }
                    }
                    var_28 = (min(var_28, (((-2018560369 < (arr_3 [i_0 + 1] [i_1] [i_7]))))));
                    var_29 = max((arr_19 [i_0] [1] [i_0 + 3] [1]), ((min((arr_27 [i_0 - 2] [i_0] [i_0 + 3] [i_0 - 1]), (arr_27 [i_0] [i_0 + 2] [i_0 + 3] [i_0])))));
                    var_30 = ((~(min((arr_0 [i_0 + 3]), (~114)))));
                    arr_31 [i_7] [i_1] [i_7] = min((arr_15 [i_0] [i_7] [2]), (~-963387750718419046));
                }
                var_31 = 0;
                arr_32 [19] = ((-963387750718419046 - (arr_0 [i_0 - 1])));
            }
        }
    }
    #pragma endscop
}
