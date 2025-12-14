/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] = (29 <= 4);
                                arr_14 [i_1] [i_2] [i_0] [i_4] = (29 / 9223372036854775791);
                            }
                        }
                    }
                    arr_15 [i_0] [11] [i_0] = ((var_0 ^ ((9223372036854775807 ? (arr_12 [i_0] [i_1] [0] [i_0 - 1] [i_2]) : (((var_10 == (arr_9 [i_0] [i_1] [i_1] [i_0] [i_1]))))))));
                    arr_16 [i_0] [4] [i_2] = ((-127 - 1) ? ((((!((((arr_10 [i_2]) ? (arr_8 [i_0] [i_1] [0] [9]) : (arr_2 [i_0])))))))) : -9223372036854775807);
                    arr_17 [i_0] [i_0] [i_0] = (((min(9223372036854775807, 125)) & (((((arr_1 [i_0 + 1] [i_0 + 1]) < (arr_1 [i_0 + 1] [3])))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_14 = ((var_1 ? var_13 : (min(((((arr_3 [i_0] [11] [11]) / var_5))), ((1 / (-9223372036854775807 - 1)))))));
                                var_15 = (min((((((var_6 ? (arr_10 [i_0]) : var_12))) && (arr_19 [i_0] [18] [18] [i_0]))), ((!(arr_9 [i_0] [i_6 + 1] [i_6 + 3] [i_0 + 1] [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 += (~var_9);
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 4; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            {
                                arr_32 [i_7] [i_7] [10] [i_7] [i_7] [i_7] = (((arr_23 [i_7] [i_8 - 3]) ? var_13 : (arr_23 [i_8] [i_8 - 4])));
                                var_17 = (var_7 > 49);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 11;i_13 += 1)
                        {
                            {
                                arr_39 [i_7] [i_13] [i_12] [3] [10] [0] [i_12] = var_6;
                                var_18 = (min(var_18, (((62128 / -5) ? (arr_19 [i_7] [13] [i_7] [i_7]) : (max(-20, (arr_5 [i_8 + 1] [i_9] [i_13 + 1])))))));
                                arr_40 [i_13] [i_13] = 13;
                            }
                        }
                    }
                    var_19 = (min(var_19, var_10));
                }
            }
        }
    }
    var_20 = (~var_7);
    var_21 = var_9;
    #pragma endscop
}
