/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_16 = var_13;

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_17 = (max(((max(2147483647, (-2147483647 - 1)))), var_3));
                                var_18 = ((-((((max((arr_3 [i_1]), 3))) ? (arr_0 [i_0]) : (((((arr_2 [i_0 - 1] [i_1] [i_3]) && (-2147483647 - 1)))))))));
                                arr_13 [i_0 + 1] [i_1] [i_1] [i_2] [i_3] [i_4] = 7774441769535295791;
                                var_19 = (max((arr_12 [i_1] [i_1]), (min(65287, 255))));
                                arr_14 [i_1] = (65260 || 2607401514999154751);
                            }
                            for (int i_5 = 2; i_5 < 16;i_5 += 1)
                            {
                                var_20 = ((-(var_7 == var_6)));
                                arr_17 [i_1] [i_1] [i_2] [i_1] [i_5] [i_3] [i_1] = -1;
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 17;i_6 += 1)
                            {
                                var_21 = ((var_15 ? 225 : var_9));
                                var_22 = (7774441769535295804 > 33554431);
                                arr_21 [i_0] [i_0 + 1] [i_0] [i_0 - 2] [i_1] [13] [1] = (((arr_6 [i_1] [i_3 - 2]) + 2147483647));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 17;i_7 += 1)
                            {
                                arr_24 [i_1] [i_1] [i_1] = 116;
                                var_23 = (!var_4);
                                var_24 = (arr_1 [i_1]);
                            }
                            var_25 = (((-var_4 ? (max(255, var_11)) : (8592366983104981310 >= 8388607))) << (((max((arr_1 [i_0 - 2]), -3438946066122145200)) - 1736367322)));
                            arr_25 [i_0] [i_1] = -7999705396575118455;
                        }
                    }
                }
                var_26 = (((arr_16 [i_0 + 1] [3] [i_0 - 2] [i_0 + 1] [i_1] [i_0 + 1] [i_0 - 2]) + -var_12));

                for (int i_8 = 1; i_8 < 15;i_8 += 1)
                {
                    arr_28 [16] [i_1] [16] = (max(var_15, (466654077404418735 % 1053638992)));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            {
                                var_27 = (max(1259641559, ((max(var_10, (min(-31052, 200)))))));
                                var_28 = (min(0, 2989821102));
                            }
                        }
                    }
                    arr_35 [8] [i_1] [1] [i_8 - 1] = (max((var_4 || -24), (min((min(var_10, (arr_16 [i_0] [i_0] [i_0] [i_0] [i_1] [3] [i_8]))), var_11))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            {
                                var_29 = (((((arr_20 [i_0 - 1] [i_0] [i_8 + 1] [i_8] [i_12] [8] [i_8 + 1]) - (arr_20 [i_0 - 2] [i_0] [i_8 + 2] [i_0 - 2] [i_12] [i_8] [1]))) + (((~1) ? var_9 : (min(var_8, var_10))))));
                                arr_43 [i_0] [i_0] [i_1] [0] [i_1] [i_0] = (var_5 == -127);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 16;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 17;i_15 += 1)
                        {
                            {
                                arr_51 [i_0] [i_1] [i_1] [i_14 + 1] [i_14 + 1] [11] [i_15] = var_15;
                                arr_52 [2] [2] [i_14 - 1] [i_1] [i_15] [i_0] = (52538 ^ var_7);
                            }
                        }
                    }
                    var_30 = (min(var_30, ((15045070237860223669 ? 0 : var_1))));
                    var_31 = (43802 * 116);
                }
                for (int i_16 = 0; i_16 < 17;i_16 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_17 = 1; i_17 < 13;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 17;i_18 += 1)
                        {
                            {
                                var_32 = ((((max(-3438946066122145200, (arr_27 [i_18] [i_1] [i_17 + 4])))) ? (arr_33 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_16] [i_1]) : var_11));
                                var_33 = ((((-((~(arr_41 [i_0] [i_1] [i_16] [15] [i_18]))))) > 15730));
                            }
                        }
                    }
                    arr_60 [i_1] [i_16] [i_1] [i_1] = var_6;
                    var_34 = (max(var_34, (((((max(3808733477984489541, var_13))) ? (((arr_16 [i_0] [12] [i_0 + 2] [i_0] [i_16] [2] [i_1]) ? -6274983122958842235 : ((min(var_11, var_11))))) : (((1224349794 ? (arr_41 [16] [i_0 - 1] [13] [i_1] [i_16]) : (arr_38 [i_0 - 1] [i_1] [i_16] [i_16])))))))));
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 17;i_20 += 1)
                        {
                            {
                                var_35 = (((max(var_1, (arr_50 [i_0] [6] [11] [i_0] [11]))) != ((((arr_55 [i_0 - 1] [i_0 - 2]) ? -var_7 : ((max(31051, 48808))))))));
                                var_36 = var_13;
                                var_37 *= 1;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_21 = 1; i_21 < 15;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 1;i_22 += 1)
                        {
                            {
                                var_38 = ((max(102, 3)));
                                arr_74 [i_1] [i_1] = var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_39 = var_5;
    #pragma endscop
}
