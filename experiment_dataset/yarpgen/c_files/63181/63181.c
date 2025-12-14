/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = -69;
                    var_18 = (min(var_18, (((((min(-69, 1))) < var_0)))));
                }
            }
        }
        var_19 = (min(var_19, ((max((((arr_3 [i_0] [i_0]) ? ((((var_3 && (arr_0 [i_0]))))) : (min(var_10, 1075328822338310880)))), var_13)))));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_20 = (arr_8 [i_3] [i_3]);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 21;i_5 += 1)
            {
                {
                    var_21 -= (arr_10 [i_5 - 3] [i_5 - 1] [i_5 + 1]);
                    var_22 = 0;
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_23 = var_0;
                                var_24 ^= (arr_18 [i_3] [0] [i_3]);
                                var_25 = (~69);
                            }
                        }
                    }

                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        arr_24 [i_4] = (max(-var_14, ((min((arr_9 [i_5 - 1]), (arr_9 [i_5 - 3]))))));
                        arr_25 [i_3] [i_4] [i_3] [i_3] [i_3] = ((min((((602424490 ? -816 : -1))), var_4)));
                        var_26 = (max(var_26, (((var_11 ? (((0 ? (arr_7 [i_4]) : (arr_19 [i_3] [i_3] [i_8] [i_5 + 1] [i_3])))) : ((((arr_9 [i_3]) <= ((12918 ? -1 : (arr_17 [20] [i_3] [i_5] [17] [i_3])))))))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                {
                    var_27 &= ((-(min(69, 0))));
                    var_28 ^= (arr_28 [i_9] [i_3]);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            {
                                var_29 = (max(var_29, (((((((arr_23 [i_12] [i_11] [i_10] [i_10] [i_9] [i_3]) / (arr_20 [i_9] [i_11])))) ? 127 : ((((arr_20 [i_3] [i_11]) ? (arr_20 [i_11] [i_12]) : (arr_23 [i_3] [i_9] [i_10] [i_11] [i_11] [i_12])))))))));
                                var_30 = var_6;
                            }
                        }
                    }
                    var_31 = ((+(((arr_33 [i_3] [i_3] [i_9] [i_9] [i_10] [i_3]) ? (arr_11 [i_3]) : 127))));
                }
            }
        }
    }
    var_32 = ((var_6 ? (((((0 ? var_3 : 66))) ? var_11 : var_15)) : ((((var_1 * var_14) ? var_4 : var_3)))));
    var_33 = ((((-((var_10 ? 0 : -1)))) % ((((var_3 - var_13) || (137438953471 > 69))))));
    #pragma endscop
}
