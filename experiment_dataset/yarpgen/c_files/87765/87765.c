/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0 + 1]) != 35249));
        var_13 += ((((35249 ? var_9 : -24986)) >= var_9));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_14 = 173;
        arr_7 [i_1] = var_3;
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            {
                var_15 = -var_11;

                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    arr_16 [i_2] [i_3] [i_4 + 1] [i_4 + 1] = (((arr_8 [i_2 + 1]) + -858901463));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_23 [i_6] [i_5] [i_4] [i_3] [i_6] = (max(((((!var_5) >= ((24986 ? 16555517523567663994 : (arr_15 [i_2] [i_3] [i_3])))))), ((18189589244188902823 ? -7930 : 24986))));
                                var_16 = (min(var_16, -var_11));
                            }
                        }
                    }
                    var_17 -= (0 && 4294967295);
                }
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    arr_28 [i_2 + 1] [i_2 + 1] [i_7 - 1] [i_7] = 15698732617763966335;
                    var_18 = var_2;
                    var_19 = var_12;
                }
                for (int i_8 = 1; i_8 < 22;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 24;i_10 += 1)
                        {
                            {
                                var_20 = (min((arr_31 [i_10] [i_8 - 1] [i_3 - 1] [i_2 + 1]), (max(((3840 ? (arr_27 [i_2 + 1] [i_3] [i_2 + 1] [i_2 + 1]) : (arr_24 [i_8] [i_8] [i_8] [4]))), (arr_24 [i_2] [i_3 + 2] [i_8] [i_9])))));
                                arr_37 [11] [i_3] [11] [i_3] [11] [i_8] = (max(18189589244188902823, 1));
                                var_21 = ((!(arr_21 [i_2] [i_3 + 3] [i_8] [i_9] [i_10])));
                                arr_38 [i_8] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (min(((~((13732 ? (arr_27 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]) : 11291)))), ((~(var_0 & var_9)))));
                            }
                        }
                    }
                    var_22 = ((((max(((-(arr_21 [i_8 + 3] [i_3 + 3] [i_3 + 3] [i_3 + 3] [i_2]))), var_1))) && var_6));
                    var_23 = (min(var_23, (((arr_21 [i_8 + 1] [i_3] [i_3 + 1] [i_2 + 1] [i_2]) != -32))));
                    var_24 = (max(var_24, var_2));
                }
            }
        }
    }
    #pragma endscop
}
