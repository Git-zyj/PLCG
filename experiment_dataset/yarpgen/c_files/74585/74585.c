/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((((((((arr_2 [i_1] [i_0] [i_0]) % var_14))) ? (max(var_11, var_4)) : (((min((arr_4 [i_1] [i_0] [i_0]), (arr_4 [i_0] [4] [i_1]))))))) >> ((((var_4 & (((var_9 ? var_8 : var_1))))) - 297869764)))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_11 [i_2] [i_2] [i_2] = var_11;
                                var_18 += (max(var_0, (max((!var_7), (max((arr_3 [i_0] [i_2]), var_7))))));
                                var_19 |= (~16425248396395352423);
                                var_20 = (max(var_20, (((((((var_9 + (arr_2 [i_3] [i_1] [i_1]))))) >= var_1)))));
                                var_21 = (min(var_21, (((max((((var_6 << (var_3 - 6119095689114783262)))), (max(var_11, var_15))))))));
                            }
                        }
                    }
                }
                arr_12 [i_0] [i_1] = ((((((arr_5 [i_1] [i_1] [i_1]) && var_13)) ? (arr_7 [i_1] [i_0] [i_0]) : (min(var_10, (arr_5 [i_0] [i_0] [i_0]))))));
                var_22 |= (max((max(var_5, var_12)), (max((max((arr_1 [i_1] [i_1]), var_4)), var_0))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    var_23 = ((-var_15 <= ((max((max((-9223372036854775807 - 1), 1668387289)), (max((arr_6 [3]), (arr_1 [i_5] [i_5]))))))));
                    arr_19 [i_5] [i_6] [i_5] [i_5] = (((min((arr_1 [i_5] [i_6]), (arr_2 [i_6] [i_6 - 1] [i_5 + 1]))) & ((((var_12 && var_14) & (max(var_14, var_7)))))));

                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_24 = ((var_9 ? (((((((arr_17 [i_7] [5] [i_7] [i_7]) < (arr_2 [i_5] [i_6] [i_5])))) >= var_10))) : (1668387289 && 2626580022)));
                        arr_22 [i_5 - 3] [i_5] [i_7] [i_5] = var_14;
                        var_25 = (+(((arr_15 [i_5] [i_5] [i_5]) ? (arr_8 [i_6 - 2] [i_5 + 1] [i_6 - 2] [i_6] [i_5 + 1]) : (arr_15 [i_5] [i_5] [i_5]))));

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            arr_25 [i_6] [i_5] = (((((var_2 ? var_14 : var_15))) ? ((-(arr_15 [i_5] [i_6] [i_6]))) : (var_16 > var_4)));
                            var_26 = ((((((arr_5 [i_5] [4] [i_5 - 1]) < var_5))) == (arr_2 [i_6] [i_7] [i_9])));
                            arr_26 [i_9] [i_9] [i_5] [6] [i_5] [i_6] [i_5] = (arr_1 [i_6 + 3] [i_6]);
                        }
                        var_27 = arr_5 [i_5] [6] [i_7];
                    }
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        arr_29 [i_7] |= (-((-((var_2 ? (arr_28 [8] [8] [8] [i_7]) : var_13)))));
                        var_28 |= (max((((((arr_8 [i_6] [i_6] [i_7] [i_7] [i_6]) || var_4)) || ((min(var_15, (arr_28 [i_5] [i_7] [i_6] [i_7])))))), ((((max(var_1, var_11))) && (arr_8 [i_5] [i_6 - 2] [i_7] [i_5] [i_10])))));
                        arr_30 [i_5] [i_5] [i_5] [4] [i_10] [i_10] = ((((max((arr_10 [i_5] [i_6 + 2] [i_5] [i_5 + 2]), (arr_10 [i_5] [i_6 + 2] [i_7] [i_5 + 2])))) ? (((arr_10 [i_5] [i_6 + 2] [i_5] [i_5 + 2]) - var_7)) : (arr_10 [i_5] [i_6 + 2] [i_7] [i_5 + 2])));
                        var_29 = (((1 <= -735211767) - ((((arr_8 [i_5] [i_6] [i_7] [i_10] [i_7]) == ((max((arr_2 [i_5 - 1] [i_5] [i_5]), var_1))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
