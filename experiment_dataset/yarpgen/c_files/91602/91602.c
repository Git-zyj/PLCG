/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 = var_5;

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = 32767;
        arr_4 [i_0] = (max((arr_0 [i_0 - 1] [i_0]), (arr_0 [i_0 - 1] [i_0])));
        var_17 = var_12;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    var_18 = (max(var_18, ((((~(arr_6 [i_2]))) & (arr_6 [i_2])))));

                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_19 = (min(var_19, -16424));
                        arr_16 [i_4] [13] [i_2] = ((!(arr_2 [i_2])));
                        var_20 = (min(var_20, var_11));
                    }
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        var_21 = (min(var_21, ((641492530 ? 669011296 : (arr_15 [i_1] [i_1])))));
                        var_22 = min((arr_15 [i_1] [i_3]), (((arr_11 [i_5] [i_5] [i_5 - 1] [i_5]) ? ((32767 ? (arr_9 [i_5]) : var_12)) : (max(var_6, (arr_6 [i_5]))))));
                    }

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        arr_22 [i_1] [i_2] [i_6] [i_3] [i_6] = (arr_20 [i_3]);
                        arr_23 [i_1] [i_3] [i_2] [i_1] |= (((arr_8 [i_1]) ? var_8 : (arr_13 [i_1] [i_2] [i_3])));
                    }
                    var_23 = (max(var_23, (arr_6 [i_3])));

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_27 [i_1] [i_1] [i_1] [i_1] = (!var_3);

                        for (int i_8 = 1; i_8 < 11;i_8 += 1) /* same iter space */
                        {
                            arr_32 [i_3] [i_3] [i_3] [i_3] [i_3] = (arr_25 [i_8 + 2] [i_8 + 3] [i_8 + 1] [i_8 + 2]);
                            arr_33 [10] = (arr_17 [i_1] [i_2] [i_3] [8] [i_8] [i_3]);
                        }
                        for (int i_9 = 1; i_9 < 11;i_9 += 1) /* same iter space */
                        {
                            arr_36 [i_1] [i_1] [i_3] [i_3] [i_9] = ((!(arr_28 [i_1] [i_2] [i_2] [11] [i_9 + 2] [4] [4])));
                            arr_37 [i_1] [i_1] [i_1] [i_1] [i_9] = (-(arr_28 [i_9 + 2] [i_2] [2] [9] [3] [i_9 + 1] [i_2]));
                            arr_38 [i_9] = arr_26 [i_3] [i_3] [i_3] [i_3];
                            arr_39 [i_9] [i_2] [4] [i_2] [i_1] &= (arr_35 [i_2]);
                        }
                        var_24 |= (32767 / (arr_9 [7]));
                    }
                }
            }
        }
        arr_40 [i_1] = 1133705383;
    }
    #pragma endscop
}
