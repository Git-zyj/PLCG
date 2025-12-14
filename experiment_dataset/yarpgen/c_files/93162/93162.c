/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = var_6;
        var_14 -= ((16515072 | (((!(arr_0 [i_0]))))));
        arr_2 [i_0] = 4294967295;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] |= var_9;
        arr_7 [i_1] [i_1] = (~-1898);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_14 [i_3] [i_2] [i_3] = (((-19 || 3) | 1022534792));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_15 &= var_8;
                                arr_19 [i_1] [i_1] [i_3] [i_4] [i_4] [8] [i_4] = ((-(((arr_10 [i_1] [i_4]) ? 4818841344715593065 : (arr_4 [i_3])))));
                                var_16 &= (!var_2);
                                var_17 &= (((arr_12 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4]) | var_1));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_26 [i_1] [i_3] [i_3] [i_1] = ((((~(arr_10 [i_1] [i_2]))) >= 2881138484));
                                var_18 = 128;
                            }
                        }
                    }
                    var_19 += ((var_0 ? (arr_3 [i_2]) : 1413828811));
                    arr_27 [i_1] [i_3] = (((((-4 ? (arr_21 [i_1] [6] [i_3] [i_3]) : var_10))) ? (arr_16 [i_3] [i_2]) : (arr_13 [i_1] [i_3] [i_2] [i_3])));
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        arr_30 [i_8] = (max((((arr_13 [i_8] [i_8] [i_8] [i_8]) | (arr_25 [i_8] [i_8] [i_8]))), ((((arr_13 [i_8] [i_8] [i_8] [i_8]) ? 54282 : (arr_20 [i_8]))))));
        var_20 = (-95 ? (((-14411 ? ((max(-26, 1))) : (max(var_0, var_2))))) : (((arr_1 [i_8] [i_8]) + (((arr_3 [i_8]) ? (arr_1 [i_8] [i_8]) : 3239924708155206449)))));
        arr_31 [i_8] = ((-(arr_22 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])));
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        var_21 = (max(var_21, ((max(((((~-9624) ? (arr_17 [i_9] [i_9] [i_9] [i_9] [i_9]) : ((-(arr_11 [i_9] [i_9])))))), ((((max((arr_4 [i_9]), var_4))) ? (max(var_3, var_0)) : (arr_24 [i_9] [i_9] [i_9] [i_9] [i_9]))))))));
        arr_36 [i_9] = max(((~(arr_35 [i_9]))), ((((max(4294967295, 18586))) ? (arr_11 [i_9] [i_9]) : (max(137, 16515072)))));
        var_22 ^= ((-var_4 ? -var_10 : ((max((arr_11 [i_9] [i_9]), 83)))));
    }
    #pragma endscop
}
