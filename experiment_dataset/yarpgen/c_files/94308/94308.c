/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = (max(var_15, ((39797 ? ((var_6 ? (max(11208703431066948603, var_6)) : (((~(arr_0 [8])))))) : (max((~127), (arr_1 [0])))))));
        var_16 = (max(var_16, 7585531797505833627));
        var_17 -= ((((((arr_0 [i_0]) ? ((var_8 ? 1215721330 : var_8)) : (((((arr_1 [4]) || var_13))))))) | (max((var_12 - 7585531797505833646), -0))));
        var_18 -= ((((max((arr_0 [i_0]), (max((arr_0 [i_0]), var_1))))) ? var_13 : (max(var_11, var_5))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_5 [i_1] = (min(var_6, (arr_3 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                arr_18 [i_1] [i_1] = ((((min((var_7 * 10861212276203717983), ((((arr_13 [i_1] [i_1] [0] [i_1]) / 1638282438480056470)))))) ? ((+((max((arr_12 [i_5] [i_5] [i_1] [i_1] [i_2] [i_1]), var_0))))) : ((var_0 ? var_2 : var_6))));
                                var_19 = ((~(max(((~(arr_15 [17] [i_5] [i_3] [17] [i_2]))), ((max(var_5, var_1)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_23 [i_7] [i_6] [i_1] [i_6] [i_6] [i_1] [i_7] = var_1;
                                var_20 = var_12;
                                arr_24 [i_1] [i_7] = (max((min((((4277231531 < (arr_15 [i_7] [i_7] [i_7 - 1] [i_7] [10])))), (((arr_21 [i_1] [i_7] [i_3] [9] [i_7]) ? (arr_11 [i_2] [i_6]) : (arr_6 [i_1] [17]))))), ((max((arr_13 [i_1] [i_2] [i_3 - 1] [1]), var_9)))));
                            }
                        }
                    }
                    arr_25 [i_3] [i_3] [i_3] [i_3] = (arr_17 [i_1] [i_1] [i_3] [i_3 + 1] [i_3 + 1]);
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                arr_31 [5] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((((((((arr_14 [14] [i_8] [i_8] [i_8 + 1] [i_8]) ? var_13 : var_4))) ? var_0 : (max((arr_8 [i_9]), (arr_16 [i_1]))))) | (arr_20 [i_8] [i_8 + 2] [i_1] [i_1] [i_1])));
                                arr_32 [13] [i_2] [13] [i_2] [2] [5] = var_8;
                            }
                        }
                    }
                    var_21 = (min((arr_28 [i_1] [i_1]), (max((min(var_9, (arr_26 [i_1] [i_2]))), var_2))));
                }
            }
        }
    }
    var_22 = ((~((var_12 % (((var_12 ? var_11 : var_10)))))));
    var_23 = (var_14 ? (((max(2456637681, var_4)) << ((((max(var_3, 65523))) - 65502)))) : var_3);
    #pragma endscop
}
