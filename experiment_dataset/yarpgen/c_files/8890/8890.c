/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_10 [i_1 - 2] [i_2] = (min(((+((((arr_2 [i_0] [i_2]) || 63))))), (min((!var_7), (arr_9 [i_3] [i_3] [i_3] [i_2 + 1] [i_2] [i_1 - 1])))));
                        var_16 = (min((min(var_2, ((~(arr_7 [i_1 - 2] [1] [i_2 + 2]))))), (((arr_1 [i_3]) & (min(1558307422, 255))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_20 [i_0] [11] [i_0] [i_6] = ((~(arr_5 [i_0] [i_0] [4])));
                                var_17 = arr_12 [i_5];
                            }
                        }
                    }
                    var_18 *= var_4;
                }
            }
        }
        arr_21 [i_0] = (arr_0 [i_0]);
        var_19 = ((((((!(arr_2 [i_0] [4]))) ? var_11 : (var_8 / var_8))) >= (max(1, (min((arr_17 [i_0] [i_0] [i_0] [i_0]), (arr_7 [i_0] [9] [9])))))));
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 16;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 15;i_12 += 1)
                        {
                            {
                                var_20 = (min((((!var_13) ? (45127 ^ -976510042) : (arr_27 [i_12 + 1] [3] [i_9] [i_8]))), (arr_27 [i_8] [i_9] [12] [6])));
                                arr_34 [i_8] [i_9] [0] |= ((((var_8 || (arr_28 [i_8] [i_10 - 1]))) ? ((min(var_13, -1760318388490780900))) : (((((41986 ? var_3 : var_13))) ? (arr_26 [i_12]) : (!var_2)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 14;i_14 += 1)
                        {
                            {
                                arr_39 [15] [i_9] [15] [15] [i_14 - 2] = (arr_36 [i_10 + 2] [i_13] [i_14 + 1] [i_14 + 3]);
                                var_21 = ((-(--65533)));
                                var_22 |= ((((arr_38 [i_14 + 3] [i_10 + 2] [i_10 + 1] [i_10] [i_10]) | (arr_27 [i_10 - 1] [i_9] [i_9] [i_9]))));
                            }
                        }
                    }
                    var_23 = ((var_3 ? (arr_37 [5] [i_9] [1] [i_9] [i_9] [i_9] [i_8]) : ((((arr_29 [i_10] [i_9] [i_8]) != (arr_28 [i_8] [i_10]))))));
                    arr_40 [2] = ((!(((7791 ? (arr_27 [i_8] [i_9] [i_10] [7]) : 124)))));
                }
            }
        }
        var_24 = var_13;
    }

    /* vectorizable */
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        arr_44 [i_15] = (var_12 < var_4);
        var_25 = ((var_13 ? ((((arr_42 [i_15]) / 96))) : var_1));
    }
    #pragma endscop
}
