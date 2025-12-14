/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 = (arr_8 [i_0 + 2] [4] [6]);
                    var_12 = 11285854541395538954;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_13 = (((!((max((arr_4 [5]), (arr_12 [i_0] [i_0] [i_0 + 1])))))));
                    arr_16 [i_0] [1] [11] = (min(7160889532314012662, (((((arr_1 [i_3] [10]) || (arr_5 [i_4] [i_3])))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    var_14 = ((-(arr_6 [i_0])));
                    arr_21 [i_5] [i_5 - 2] [i_6] &= ((~((((((arr_7 [i_0] [i_5] [i_5] [1]) >> (((arr_8 [i_6] [i_5] [i_0]) - 5808353389371883887)))) < 1)))));

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        arr_24 [i_0] [8] [i_6] [i_7] = ((-(((arr_1 [i_0 - 1] [i_0 + 1]) ? (arr_5 [i_0 + 1] [i_5 - 1]) : (arr_5 [i_0 + 2] [i_5 - 2])))));
                        arr_25 [i_0] [11] [i_6] [4] = (((arr_1 [i_5 + 1] [i_0 - 1]) ? (arr_14 [i_0] [7] [i_6] [i_7]) : (~var_6)));
                        var_15 &= (max(((~(arr_3 [i_0 - 1] [8] [i_5 - 2]))), ((-(arr_3 [i_0 + 2] [9] [i_5 + 1])))));
                        var_16 = ((min(((max((arr_17 [i_0]), 14732))), (arr_8 [i_0] [0] [i_0 + 1]))));
                    }
                    arr_26 [i_0] = var_6;
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        var_17 = -22894;
        var_18 -= (arr_29 [i_8] [3]);
        var_19 &= (max((arr_28 [16]), ((((arr_28 [16]) > var_5)))));
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
    {
        arr_32 [i_9] [i_9] = (max((var_7 + var_10), ((max((arr_29 [i_9] [i_9]), (arr_29 [i_9] [i_9]))))));
        var_20 = min(var_2, (max(1, (((arr_29 [12] [i_9]) ? 11285854541395538954 : var_6)))));
    }
    #pragma endscop
}
