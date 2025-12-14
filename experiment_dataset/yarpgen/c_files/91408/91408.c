/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((!var_18) << 1));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] |= ((((((((~(arr_2 [i_0])))) ? ((-(arr_0 [i_0]))) : (!1)))) ? var_17 : (arr_1 [i_0] [i_0])));
        var_21 -= ((~(((!(arr_1 [i_0] [i_0]))))));
        arr_4 [i_0] = ((~(min((max(1, var_16)), (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 8;i_2 += 1) /* same iter space */
        {
            var_22 -= ((((!(arr_9 [i_1 - 1]))) ? (min((arr_9 [i_1 - 1]), (arr_9 [i_1 - 1]))) : (arr_9 [i_1 - 1])));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            arr_18 [i_1] [i_3] [i_3] [9] [7] [i_5] = ((~(arr_7 [i_1 - 1])));
                            var_23 = ((!(arr_17 [i_3])));
                            arr_19 [i_3] [i_3] = ((((((-(arr_5 [3]))) ? ((max((arr_12 [i_2 + 2] [i_2 + 2]), var_5))) : 1))));
                            arr_20 [i_3] [1] [i_3] [i_4] [i_5] = 1;
                        }
                    }
                }
            }
        }
        for (int i_6 = 2; i_6 < 8;i_6 += 1) /* same iter space */
        {
            arr_23 [i_1] [i_1] |= (((!((((arr_8 [i_1]) ? var_5 : (arr_1 [i_1 - 1] [0])))))) ? (((((~(arr_1 [i_1] [i_6])))) ? ((((1 >= (-9223372036854775807 - 1))))) : (max((arr_13 [3] [i_1 - 1] [4] [2]), 9223372036854775807)))) : (((~var_14) ? (((arr_7 [i_1]) ? var_15 : (-9223372036854775807 - 1))) : (((arr_12 [3] [i_6 + 1]) ? var_12 : 18691)))));
            arr_24 [i_1] [6] = (max(((!((((arr_15 [8] [8]) ? var_10 : 123))))), ((!(arr_9 [i_1 - 1])))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    {
                        var_24 |= (((max(var_3, 1)) / ((((-124 >= (max((arr_17 [i_7]), var_4))))))));
                        var_25 = (arr_2 [i_8]);
                        var_26 = (max(var_26, (((~(arr_11 [i_1 - 1] [i_6 - 2]))))));
                    }
                }
            }
        }
        arr_31 [4] = var_11;
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 8;i_11 += 1)
                {
                    {
                        arr_39 [i_1] [i_11] [i_10] [i_11] [i_9] = ((((!(arr_6 [i_1] [3])))));

                        for (int i_12 = 3; i_12 < 9;i_12 += 1)
                        {
                            arr_42 [i_11] [i_11] = ((~(arr_8 [i_1 - 1])));
                            var_27 = (~var_8);
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            arr_45 [6] [1] [i_10] [i_11] [2] [i_10] = (((((arr_10 [i_1 - 1] [i_11] [1] [i_1 - 1]) - 2564407289))) ? (var_15 != -576460752303423488) : var_8);
                            arr_46 [4] [3] [0] [3] [i_11] [4] = (((arr_38 [i_1 - 1] [i_1 - 1] [i_11] [i_11 + 2] [i_13]) ? (arr_8 [i_1 - 1]) : (arr_38 [i_1 - 1] [i_1 - 1] [i_11] [i_11 + 1] [i_11 - 1])));
                            arr_47 [i_11] [i_11] [9] [3] [7] = (~var_12);
                            var_28 *= ((!(arr_9 [i_11 + 2])));
                        }
                    }
                }
            }
        }
    }
    var_29 = var_3;
    #pragma endscop
}
