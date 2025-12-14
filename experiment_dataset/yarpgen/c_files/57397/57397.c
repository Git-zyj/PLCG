/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_6));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = (max(var_18, (arr_0 [0])));
        arr_2 [i_0] [9] = (~-1);
        var_19 = (min(var_19, ((min(24, -1)))));
        arr_3 [i_0] = (max((((((arr_0 [i_0]) ? (arr_1 [i_0]) : 15129451440171348260)))), ((16 ? 3317292633538203356 : (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_8 [i_1] = (((arr_4 [i_1] [i_1]) & ((((((!(arr_5 [i_1] [i_1]))))) % (min((arr_5 [i_1] [i_1]), (arr_6 [9])))))));
        var_20 += (arr_4 [i_1] [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_21 = (arr_5 [i_2] [i_2]);
        var_22 = (((arr_1 [i_2]) | (arr_1 [i_2])));
        var_23 = (arr_11 [i_2] [i_2]);
        arr_13 [i_2] = ((~(arr_9 [i_2])));

        for (int i_3 = 2; i_3 < 7;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        var_24 = (((arr_17 [i_3 + 4]) | (arr_10 [i_4 - 2])));
                        arr_23 [i_2] = 15129451440171348260;
                        arr_24 [i_4] [6] = (~((-28164 ? -38 : (arr_0 [i_4]))));
                    }
                }
            }
            var_25 = (((arr_22 [i_3 - 2]) ? (arr_22 [i_3 - 1]) : (arr_22 [i_3 + 4])));
            var_26 = (((arr_22 [i_3 - 2]) ? (arr_22 [i_3 + 2]) : (arr_19 [i_3] [i_3 - 1] [i_3] [i_3 - 1])));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    {
                        var_27 = (((arr_1 [i_6]) || var_0));
                        arr_31 [i_6] [i_6] [i_6] [i_7] = (arr_0 [i_6]);
                        var_28 = var_5;
                        var_29 = (((arr_22 [i_6]) > var_11));
                    }
                }
            }
        }
        for (int i_8 = 1; i_8 < 9;i_8 += 1)
        {
            arr_35 [i_2] [i_8] = (((arr_33 [i_8 - 1] [i_8]) && (arr_33 [i_8 - 1] [i_8])));
            var_30 = arr_22 [i_2];
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 8;i_11 += 1)
                    {
                        {
                            arr_42 [i_9] [i_9] [i_9] [i_8] [i_9] = (((arr_40 [i_8] [i_2] [9] [i_8] [i_8]) ? (arr_40 [i_8] [i_9] [i_9] [i_9] [3]) : (arr_40 [i_8] [10] [10] [i_9] [i_11 + 1])));
                            var_31 ^= (arr_7 [i_8 - 1]);
                            var_32 = (arr_15 [i_8 - 1]);
                            arr_43 [i_8] [i_8 + 1] [i_9] [i_10] [i_11 + 3] = var_1;
                            var_33 = (~20);
                        }
                    }
                }
            }
            var_34 += (arr_5 [i_8 - 1] [i_8 + 2]);
        }
    }
    for (int i_12 = 0; i_12 < 18;i_12 += 1)
    {
        var_35 = (arr_46 [i_12]);
        var_36 = (min(var_36, (((!(arr_45 [8]))))));
    }
    #pragma endscop
}
