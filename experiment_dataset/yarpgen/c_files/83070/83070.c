/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_3] &= (--50);
                            var_17 = (min(var_17, (((((max((max((arr_6 [i_0] [i_1 - 3] [i_0]), (arr_2 [i_0] [3] [3]))), 412985890))) ? ((5 ? 5 : -1659886498)) : (((+((((arr_9 [i_3] [2] [i_0] [i_0]) == (arr_4 [i_0] [i_1] [i_0] [i_3]))))))))))));
                            var_18 = (max(var_18, (!var_0)));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    var_19 = var_9;

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        arr_16 [i_0] [i_1] [i_1] [i_4] [i_5] [10] &= 4294967295;

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            arr_20 [i_0] = ((3571466708 ? 4294967291 : 119));
                            var_20 = ((-((var_10 ? var_2 : (arr_18 [i_0] [i_1] [i_4] [i_5] [i_6])))));
                        }
                        arr_21 [i_0] [2] [i_1] [i_4] [i_5] = 1610612736;
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_25 [i_0] [i_1] [i_1] [2] = var_12;
                        var_21 = ((62 ? 51 : -771939810));
                        arr_26 [i_0] = (((var_13 % 2684354551) * var_6));
                        var_22 ^= var_7;
                        var_23 &= ((62 >= (arr_8 [0] [i_1 + 1] [i_4 + 2] [i_4])));
                    }
                    arr_27 [i_4] [i_0] [i_0] [i_0] = (((((arr_0 [i_1]) ? (arr_12 [i_1] [i_4]) : 3571466722))) ? (((arr_6 [10] [i_1] [i_4 + 1]) ? 134184960 : (arr_12 [i_4 + 1] [i_1]))) : var_0);
                }
                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    arr_30 [i_0] [i_1] [i_8] = 210;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            {
                                var_24 = (((arr_5 [i_9] [i_0] [i_8 + 2]) > (((max(var_8, var_5))))));
                                arr_35 [i_0] [13] [i_8] [3] = (arr_32 [i_8] [i_8 - 2] [i_9] [i_10]);
                                var_25 = arr_29 [i_9] [i_9] [4] [0];
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        for (int i_13 = 4; i_13 < 12;i_13 += 1)
                        {
                            {
                                var_26 = (max(var_26, ((((3571466707 < -66) ? var_11 : var_1)))));
                                var_27 = (arr_15 [i_0] [9] [12] [i_12] [i_13 - 1] [i_11]);
                                arr_44 [i_13] = var_4;
                                var_28 = (arr_11 [i_1 + 1] [i_13] [i_13 + 2] [i_13 + 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = ((((((((var_1 ? var_12 : var_6))) ? (max(255, -258336307)) : (~-258336326)))) ? 1885331049 : var_14));
    var_30 = var_4;
    var_31 = var_15;
    #pragma endscop
}
