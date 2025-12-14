/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 + 1] |= (min((max(var_4, (arr_4 [i_0] [i_0]))), (arr_1 [i_0] [i_0])));
                var_15 = 240;
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [14] [i_1] [i_2] [20] [i_4] [i_2] = ((var_7 / ((max((arr_10 [i_0] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_2] [i_3 + 1]), (arr_6 [i_2] [i_0] [i_1 - 2] [i_1 - 2]))))));
                                arr_14 [i_2] [i_3] [i_4] = (arr_6 [i_2] [i_1] [i_1] [20]);
                                arr_15 [i_4] [i_2] [i_2 - 1] [i_2] [i_0] = ((((176 ? (!4167297531) : ((108 << (((arr_3 [i_2] [i_3] [i_4]) + 85))))))) ? (((((min(var_9, 188))) ? 20 : (arr_4 [i_1] [i_2])))) : (min(((max(215, 101))), 3659971602)));
                                var_16 = (arr_10 [i_0] [i_1] [i_2] [i_2] [i_2] [i_4]);
                                arr_16 [i_0] [10] [i_2] [i_3] [i_4] [i_0] = (min((arr_0 [i_0]), (arr_12 [i_0] [i_0] [i_0] [9] [i_2])));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    arr_21 [i_0] [i_1] [i_5] = var_7;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_17 += (((arr_28 [1] [i_1] [i_1 - 2] [i_1] [i_1] [i_1 - 1]) > (arr_23 [7] [i_1])));
                                arr_29 [i_1] = ((~(arr_2 [i_7 - 2] [i_7 - 2])));
                                arr_30 [i_0] [i_0] [i_5] [i_6] [20] &= ((~(arr_18 [i_1 - 1] [i_1] [i_7 + 2])));
                                arr_31 [i_0] [i_0] [18] [i_5] [i_6] [i_7] = var_9;
                            }
                        }
                    }
                }
                for (int i_8 = 1; i_8 < 20;i_8 += 1)
                {
                    var_18 *= (arr_17 [i_8] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            {
                                var_19 = (((arr_33 [i_9] [i_8] [i_1] [i_0]) ? ((max((arr_10 [i_10] [i_8] [i_1] [i_1] [i_8] [i_0]), (arr_3 [i_1 - 1] [i_8 - 1] [i_8])))) : (min(940432068728991360, 50))));
                                var_20 = max((arr_7 [i_10] [i_9] [i_8] [i_0]), -112806124661759826);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 21;i_12 += 1)
                        {
                            {
                                arr_43 [i_8] [i_1 - 2] [i_1] [i_1] [i_1] = (arr_24 [i_11] [i_11] [i_8] [16] [i_0]);
                                arr_44 [i_0] [i_1 - 1] [i_8 + 1] [i_11] [i_8] [i_12] [i_0] = ((((((max((arr_24 [i_0] [i_1] [i_8] [i_11] [i_12]), (arr_8 [i_0] [i_1] [i_8]))) % (arr_35 [i_0] [i_0] [12] [3] [4])))) ? (((-(arr_37 [i_0] [i_12] [i_8] [12] [16])))) : ((~(arr_28 [i_0] [i_1] [i_8 + 1] [9] [i_11] [10])))));
                                var_21 *= (max((((arr_20 [i_8 + 1] [8] [i_8 - 1]) ? (arr_20 [i_8 + 1] [i_12] [i_12]) : 141)), ((max((arr_20 [i_8 - 1] [1] [i_11]), (arr_20 [i_8 + 1] [i_11] [i_11]))))));
                                var_22 = 717431206;
                            }
                        }
                    }
                    var_23 = (((~15736439286378480874) || (arr_23 [i_0] [i_0])));
                }
            }
        }
    }
    var_24 = 260096;
    #pragma endscop
}
