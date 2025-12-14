/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = var_15;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_18 = (max(var_18, (((var_2 ? var_12 : (arr_7 [2] [i_3]))))));
                        var_19 = (min(((min(((((arr_3 [i_3] [i_3] [i_3]) ? (arr_7 [i_1] [i_2 + 1]) : (arr_6 [i_2 + 1] [i_1] [i_2] [i_3] [i_3] [i_2])))), (arr_1 [i_2 - 1])))), (max(((6072798687343339915 & (arr_0 [i_3] [i_1]))), (arr_3 [i_2 + 1] [i_3] [i_3])))));
                        var_20 = (min(var_20, (arr_5 [i_2] [i_2 + 1] [i_2 + 1])));
                        arr_9 [i_0] [i_0] [1] [3] [8] [0] = (((arr_1 [3]) ? (min((((arr_4 [i_3] [i_3]) ? (arr_3 [7] [2] [i_2]) : (arr_8 [i_0] [i_1] [5] [i_1]))), (arr_3 [7] [i_1] [7]))) : ((((arr_6 [i_2] [i_2] [i_2] [i_2 + 1] [6] [i_2 + 1]) < (arr_8 [i_2 + 2] [1] [i_2] [i_2 + 2]))))));
                    }
                }
            }
            var_21 = (arr_0 [i_0] [i_1]);
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_13 [i_4] = (arr_11 [i_4] [0]);
        var_22 = (((((arr_10 [i_4]) ? (arr_12 [i_4]) : (arr_11 [i_4] [i_4])))) ? ((min((arr_12 [i_4]), (arr_11 [i_4] [i_4])))) : ((-(((arr_11 [i_4] [i_4]) << (9908813849437878871 - 9908813849437878854))))));
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {
                        arr_22 [i_4] [i_5] [5] [i_6] [19] [i_7] &= ((((max(63, (arr_18 [i_5 - 3] [i_5 + 1])))) ? (((!(arr_18 [i_5 - 1] [i_5 - 2])))) : (((arr_21 [i_5 - 2] [i_5 - 3] [i_5] [i_5 - 2]) ? (arr_18 [i_5 + 2] [i_5 + 2]) : (arr_18 [i_5 + 1] [i_5 + 1])))));
                        var_23 = (((arr_11 [i_5 + 1] [i_5 + 1]) - (arr_19 [i_4] [1] [i_4] [1])));

                        for (int i_8 = 3; i_8 < 22;i_8 += 1)
                        {
                            var_24 = (max((min((arr_14 [17] [3]), (arr_19 [i_4] [i_5 - 3] [i_6] [i_8 - 1]))), var_8));
                            arr_26 [i_4] [1] [i_6] [i_7] [i_8 + 2] [i_8 - 3] = -var_9;
                        }
                        for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                        {
                            var_25 = (min(var_25, (arr_11 [i_4] [i_9])));
                            arr_29 [i_4] [i_4] [1] = (arr_27 [i_4] [i_4] [i_4]);
                            var_26 = ((((min(((((arr_19 [5] [16] [i_6] [i_6]) && (arr_18 [i_4] [i_4])))), (((arr_18 [i_4] [i_4]) / (arr_19 [i_4] [i_4] [20] [i_4])))))) ? (((((8537930224271672731 - (arr_10 [i_7]))) > (arr_11 [i_5] [i_5 + 1])))) : ((((arr_20 [i_4] [i_5] [i_7] [i_7]) || (arr_17 [i_5] [15] [i_9]))))));
                            arr_30 [14] [i_5] [i_5] [14] [i_7] [i_9] &= (min((arr_11 [i_5 + 1] [i_5 + 2]), (((arr_11 [i_5 + 4] [i_5 - 3]) ? (arr_27 [i_5 + 4] [i_5 - 1] [i_5 - 3]) : (arr_20 [i_5 + 1] [i_5 + 3] [i_5 + 3] [i_5 + 4])))));
                        }
                        for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                        {
                            var_27 ^= (arr_18 [i_5 - 3] [i_5 + 2]);
                            arr_33 [i_4] [i_4] [i_6] [1] [1] = (max((((((arr_20 [i_4] [i_5] [i_6] [i_4]) ? (arr_20 [i_4] [i_4] [i_4] [i_4]) : -27)) / ((~(arr_11 [i_4] [i_5]))))), ((((arr_11 [i_4] [8]) || (arr_31 [i_4] [i_5 + 2] [i_5] [17] [1]))))));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        arr_38 [i_11] [i_11] |= (((arr_10 [i_11]) > (arr_4 [i_11] [i_11])));
        var_28 = (min(var_28, ((((arr_32 [0] [i_11] [i_11] [i_11] [i_11] [i_11]) ? (arr_2 [i_11] [i_11] [i_11]) : (arr_18 [i_11] [i_11]))))));
    }
    var_29 = (((!((((-32767 - 1) ? var_12 : 46))))));
    #pragma endscop
}
