/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (1708174563789255770 % 1)));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_6 [i_1] [i_0] = (((arr_5 [20] [20] [i_2]) ? (arr_5 [i_0] [i_1] [i_2]) : (arr_5 [i_2] [i_1] [i_0])));
                    var_18 = (var_6 < -2147483630);
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 23;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 23;i_5 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_4] [i_4] [i_5] &= -55492;
                            arr_17 [i_0] [i_0] [i_1] [i_3] [i_3 - 1] [i_0] [i_5] = (var_15 | 5204720278522707597);
                            var_19 |= (arr_15 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_0] [i_5 + 1]);
                            var_20 = ((arr_14 [i_4] [i_4] [i_4] [i_5 - 1] [16] [i_5] [i_3]) ? 3307239078014181958 : (arr_14 [i_4] [11] [i_4] [i_5 + 1] [15] [i_5] [i_3]));
                            arr_18 [i_0] [i_1] [17] [i_3] [i_3] [i_5] = 8139038465676726288;
                        }
                        var_21 = (arr_2 [i_3 + 1] [1] [i_3]);
                        var_22 = 3057045642457031068;
                    }
                    var_23 = (min(var_23, (((!(arr_13 [i_3 + 1] [i_3 - 3] [i_3 + 1] [i_3 - 1]))))));
                    arr_19 [i_0] [22] [i_3] [i_3 - 1] = -5940655843703833727;
                    arr_20 [i_3] [i_3] = -7652902732008136481;
                    var_24 = (arr_2 [i_0] [i_1] [i_3 + 1]);
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {

                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        var_25 = (max(var_25, -5940655843703833727));
                        arr_25 [i_6] [1] [i_6] [i_7] = 7652902732008136481;
                        var_26 = ((((-(arr_8 [i_7] [i_1] [i_7])))) ? (((arr_8 [i_1] [22] [i_7]) ? (arr_8 [i_0] [i_1] [i_7]) : (arr_8 [i_6] [i_6] [i_7]))) : ((-(arr_8 [i_0] [i_6] [i_7]))));
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        arr_30 [i_0] [i_0] = (~2147483644);
                        arr_31 [i_0] [i_0] [i_0] = (!3438850505095224961);

                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_27 = (arr_34 [18] [20]);
                            var_28 = 2147483647;
                            arr_36 [i_0] [i_1] [i_8] [i_8] [i_1] = (arr_22 [5] [i_6] [i_8] [i_6]);
                            var_29 = (arr_14 [i_0] [i_1] [i_6] [i_0] [18] [i_8] [i_9]);
                        }
                    }
                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 22;i_10 += 1)
                    {
                        var_30 ^= -5;
                        var_31 = (~12);

                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            arr_41 [i_11] [i_11] [i_6] [i_11] [11] [i_0] [i_11] = 5;
                            var_32 = (max(var_32, -1343534614));
                        }
                    }
                    for (int i_12 = 3; i_12 < 23;i_12 += 1)
                    {
                        arr_46 [i_0] [i_1] [4] [i_12] = 39207;
                        var_33 = (max(var_33, 7652902732008136479));
                    }
                    arr_47 [i_0] = (~0);
                }
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    var_34 = (max(var_34, ((~((max((!1), (arr_5 [i_0] [i_0] [8]))))))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 22;i_15 += 1)
                        {
                            {
                                var_35 = var_4;
                                var_36 += (arr_9 [2] [i_1] [7] [3]);
                                arr_57 [i_15] [i_15] [i_1] [i_15] [22] = (!-101);
                                var_37 ^= (!1015808);
                            }
                        }
                    }
                }
                arr_58 [i_0] [i_0] &= (((max(var_1, -2147483638)) > 8196));
                var_38 = (arr_37 [i_0] [i_1] [i_1] [i_1]);
            }
        }
    }
    #pragma endscop
}
