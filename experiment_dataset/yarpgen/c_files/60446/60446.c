/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = ((1 > ((-(1 & 1)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_19 = ((1 ? ((1 ? 1 : 1)) : ((min((arr_0 [i_0 + 2]), (arr_4 [i_0 + 1] [i_0 - 1]))))));
                    arr_9 [i_2] [i_0] = ((-((1 ? var_15 : (arr_6 [i_0] [i_1])))));
                    var_20 = (arr_2 [i_1] [i_0]);
                }
            }
        }
        arr_10 [i_0] = (((((arr_2 [i_0 + 1] [i_0 + 1]) ? (arr_2 [i_0 + 1] [i_0 + 2]) : (arr_2 [i_0 + 1] [i_0 + 2]))) >> 1));
        var_21 = ((((((arr_1 [i_0 - 1]) ^ var_18))) ? (min(1, ((max(1, 1))))) : (((~(~1))))));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_13 [9] [i_3] = (((min(1, (arr_12 [i_3] [i_3])))));
        var_22 = (arr_11 [i_3]);
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 7;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 6;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 6;i_6 += 1)
            {
                {
                    var_23 = var_4;
                    arr_20 [i_4 + 1] [i_4] [4] [0] = arr_15 [i_5];
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_24 = ((var_14 || (arr_4 [i_5 + 4] [i_6 - 1])));
                                arr_27 [i_4] [i_6] [i_7] = ((!(arr_2 [i_5 - 3] [i_5 - 3])));
                            }
                        }
                    }
                    var_25 = (((arr_7 [i_4 + 2] [i_5 + 1] [i_6 + 3]) / (arr_7 [i_4 + 1] [i_5 - 1] [i_6 + 3])));
                }
            }
        }
        arr_28 [i_4] = (1 ^ var_15);
    }
    var_26 = (var_2 | var_14);
    var_27 = (-(max(var_5, (((1 ? var_17 : var_11))))));
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 10;i_10 += 1)
        {
            {
                arr_37 [i_9] [i_10] [8] = (min(((min(var_1, (arr_6 [i_10 + 1] [i_9])))), (arr_36 [i_9])));
                /* LoopNest 3 */
                for (int i_11 = 1; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 8;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 8;i_13 += 1)
                        {
                            {
                                arr_46 [i_9] [i_9] [i_9] [i_11] [i_9] = (((min(1, 1)) ? (arr_30 [6]) : ((max(1, var_1)))));
                                arr_47 [i_9] [i_10] [i_11] [i_11] [i_13] = (~1);
                                var_28 ^= (!var_10);
                                var_29 = 1;
                                arr_48 [i_9] [i_11] [7] [1] [1] = (arr_35 [1] [1] [1]);
                            }
                        }
                    }
                }
                var_30 = ((-1 * 1) + (((1 ? (arr_44 [i_9] [i_9] [i_9] [i_9] [i_9]) : (((min(1, 1))))))));
                var_31 = (max(var_31, (~1)));
            }
        }
    }
    var_32 = var_17;
    #pragma endscop
}
