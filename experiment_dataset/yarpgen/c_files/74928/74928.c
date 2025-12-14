/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_10 &= ((~(arr_5 [6] [i_0 - 2])));
                    arr_8 [i_2] [2] [i_2] = (((arr_2 [i_0 + 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 1])));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_13 [0] [8] [1] [0] = ((~(arr_6 [i_0 - 2] [i_0 - 1] [i_0 - 2])));
                        var_11 = -113;
                    }
                    var_12 = ((-(arr_0 [i_0 + 1])));
                }
                var_13 = (min(((min((arr_5 [10] [14]), (arr_0 [i_0])))), ((-((max((arr_12 [0] [2] [1] [12]), (arr_12 [12] [12] [13] [12]))))))));
                var_14 = (max(var_14, ((((arr_11 [10] [10] [0]) ? ((min(-1, -112))) : ((min((arr_2 [13]), (max((arr_1 [12]), (arr_4 [9] [3] [3])))))))))));
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_22 [i_5] = (min(((~(arr_16 [i_0 - 2]))), (arr_17 [i_0 + 1] [i_0] [i_0])));
                                var_15 = (max((min((arr_18 [i_5] [i_0 + 1] [9] [i_5]), (arr_18 [i_5] [i_0 - 2] [i_0 + 1] [i_5]))), (min((arr_18 [i_5] [i_0 + 1] [4] [i_5]), (arr_18 [i_5] [i_0 - 2] [i_0 - 2] [i_5])))));
                                arr_23 [14] [14] [9] [2] [7] [i_5] = (((((5 ? (arr_12 [5] [3] [3] [11]) : 4))) ? -1705 : -110));
                                var_16 ^= -56062;
                                arr_24 [10] [7] [9] [i_5] [7] [9] = (arr_16 [i_0 - 2]);
                            }
                        }
                    }
                }
                var_17 -= (arr_15 [14] [12] [14] [7]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            {
                arr_31 [i_7] [i_7] = (arr_27 [i_7] [10]);
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        {
                            var_18 = (min((~-109), ((min((arr_26 [i_7]), (arr_26 [i_7]))))));
                            var_19 = (min(((min(-6055, 111))), ((11 ? -50 : 5))));
                        }
                    }
                }
                arr_37 [i_7] [4] = ((~((min((arr_32 [11] [11] [12] [i_7]), (arr_35 [i_7] [i_7] [1] [i_8] [i_8]))))));

                for (int i_11 = 1; i_11 < 17;i_11 += 1)
                {
                    var_20 = (max(var_20, 112));
                    arr_41 [13] [i_7] [16] [13] = (arr_40 [i_7] [i_11 + 1] [10] [i_11 - 1]);
                    arr_42 [i_7] [15] [4] = (arr_38 [1] [17]);
                }
                for (int i_12 = 1; i_12 < 17;i_12 += 1)
                {
                    arr_45 [i_7] [i_7] [15] = (min((((arr_40 [14] [14] [10] [i_12 + 1]) ? (arr_40 [9] [9] [9] [i_12 + 1]) : (arr_40 [2] [2] [2] [i_12 - 1]))), ((max((arr_40 [16] [16] [16] [i_12 + 1]), (arr_40 [i_7] [9] [9] [i_12 - 1]))))));
                    arr_46 [i_7] = (max(((~(((!(arr_27 [i_7] [3])))))), (((arr_27 [i_7] [i_12 + 1]) ? (arr_27 [i_7] [i_12 + 1]) : (arr_27 [i_7] [i_12 - 1])))));
                    var_21 = (arr_43 [i_12 - 1] [13] [i_12 - 1]);
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    var_22 = arr_38 [i_13] [17];

                    for (int i_14 = 1; i_14 < 17;i_14 += 1)
                    {
                        var_23 = ((-44 ? 42100 : -43));
                        var_24 = arr_29 [i_14 - 1] [i_14 - 1] [7];
                        arr_51 [i_7] = ((~(arr_50 [i_7] [i_14 - 1] [i_14 - 1] [8] [10])));
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 18;i_16 += 1)
                        {
                            {
                                var_25 = arr_36 [9] [9] [7] [i_13] [6];
                                var_26 = ((-(arr_44 [i_13] [i_13] [3] [i_7])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 18;i_17 += 1)
                    {
                        for (int i_18 = 3; i_18 < 14;i_18 += 1)
                        {
                            {
                                arr_64 [i_7] [14] [i_7] [13] [13] = ((!(arr_50 [1] [i_18 - 2] [i_18 - 1] [i_18 - 2] [0])));
                                var_27 = (arr_49 [2] [2] [2] [2] [10]);
                                var_28 = arr_34 [i_18 - 2];
                            }
                        }
                    }
                    arr_65 [8] [6] [i_7] = (arr_61 [i_7] [7] [i_8] [i_13] [i_13]);
                }
            }
        }
    }
    var_29 = (max(var_5, ((-((max(var_3, var_4)))))));
    #pragma endscop
}
