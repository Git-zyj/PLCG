/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_1, ((var_12 ? var_1 : ((max(var_7, var_10)))))));

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0]);
        arr_4 [12] &= ((((!(arr_2 [i_0 + 1])))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_2] [i_0] [i_1] = var_15;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] [i_4] [i_4] [i_4] = (min(-5258339176358541526, 1));
                                arr_17 [i_1] = ((((58625 ? 12 : -8181064300080363597))) ? ((((((4211 ? var_11 : 65517))) && (((65510 ? 5258339176358541526 : 11313961210680661423)))))) : -5);
                            }
                        }
                    }
                }
            }
        }
        arr_18 [i_0] = ((((max((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0 - 1] [i_0 - 3] [i_0 - 2])))) ? ((((!(arr_8 [12] [4] [12]))))) : (min(((((arr_13 [14] [4] [4] [2]) ? (arr_14 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_0 - 2]) : 4074))), 6407774673150730647))));
    }
    var_17 = (min(var_17, ((-1 ? (min(247349780844758349, var_7)) : var_0))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            {
                arr_23 [2] |= (max((arr_9 [18]), ((min((((arr_21 [i_5] [8] [8]) ? -6753 : -12)), ((max(32750, (arr_5 [i_5] [i_5] [i_5])))))))));
                arr_24 [i_5] [i_5] [i_5] = (-((var_2 ? (arr_15 [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6] [i_6 + 1]) : (arr_15 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]))));
                arr_25 [i_5] [i_5] [i_5] = ((arr_6 [i_6]) | ((((87 != (-9223372036854775807 - 1))))));

                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 11;i_9 += 1)
                        {
                            {
                                arr_36 [i_5] [i_5] [i_7] [i_8] [i_8] = (((((56 ? 16 : -29)) / ((-9290 ? -13378 : 1)))));
                                arr_37 [i_5] [i_7] [i_7] = var_7;
                            }
                        }
                    }
                    arr_38 [i_5] [i_5] [i_6] [2] = ((var_5 ? (arr_11 [i_5] [i_5]) : (arr_19 [i_5] [i_5])));
                    var_18 ^= ((((!(arr_34 [12] [i_6] [i_6] [12] [12])))));
                }
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    var_19 = var_13;
                    var_20 *= (~var_11);
                    var_21 = (max(var_21, (((!((var_8 && (arr_14 [i_10] [i_10] [15] [i_10] [i_10] [i_10]))))))));
                    arr_42 [i_5] [i_5] [i_5] [i_5] = (arr_9 [i_5]);
                }
                /* vectorizable */
                for (int i_11 = 3; i_11 < 13;i_11 += 1)
                {
                    arr_45 [i_5] [i_5] = var_11;

                    for (int i_12 = 1; i_12 < 12;i_12 += 1)
                    {
                        var_22 = (!-80);
                        var_23 ^= ((1 / (arr_14 [i_5] [i_5] [i_5] [i_6] [7] [i_6 + 1])));
                    }
                    for (int i_13 = 2; i_13 < 13;i_13 += 1)
                    {
                        var_24 &= (var_15 * var_5);

                        for (int i_14 = 2; i_14 < 11;i_14 += 1)
                        {
                            arr_54 [i_14] [8] [i_13] [6] [6] &= (((!var_10) ? ((((arr_5 [i_5] [i_6] [i_6]) << (arr_11 [i_5] [i_5])))) : (var_6 & var_0)));
                            var_25 &= (arr_11 [i_5] [i_5]);
                        }
                        for (int i_15 = 2; i_15 < 13;i_15 += 1)
                        {
                            var_26 = (arr_39 [i_15 + 1] [i_6 + 1]);
                            arr_58 [i_5] [1] [i_5] [i_5] [i_5] = var_3;
                        }
                    }
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    var_27 = (((arr_55 [9] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]) ? (arr_55 [i_6] [i_6 - 1] [12] [i_6] [i_6]) : 1));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 14;i_18 += 1)
                        {
                            {
                                arr_67 [i_5] [i_6] [5] [5] [i_16] [i_6] = ((var_4 ? -5258339176358541526 : (((5258339176358541539 ? (arr_30 [i_5] [i_6] [i_6]) : 1)))));
                                var_28 = (!(arr_56 [i_5] [i_5] [i_5] [12] [6] [i_6 + 1]));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
