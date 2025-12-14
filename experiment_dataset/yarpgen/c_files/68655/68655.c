/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 = (((((arr_5 [i_2 + 1] [i_2 + 1] [4]) >> 0)) * (arr_5 [i_2 - 3] [i_2] [i_2])));
                    arr_6 [i_1] [i_1] [i_1] [i_2] = (((-9223372036854775807 - 1) < ((((!(arr_0 [i_1 - 1] [i_0])))))));
                    var_20 = (arr_3 [1]);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_21 = (arr_2 [i_0] [i_2 + 1] [i_2 + 3]);
                        arr_10 [i_1] [i_1] = ((var_18 || (((var_8 ? (arr_7 [i_0] [i_1] [i_1] [i_1]) : 1)))));
                        var_22 = arr_4 [i_1] [i_1] [11] [i_3];
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        arr_14 [1] [1] [1] [i_1] [2] = ((-((max((arr_4 [i_1] [i_1 + 1] [i_2 + 3] [i_1]), ((((arr_12 [8] [i_1] [i_1] [i_4] [i_1] [i_2]) <= var_4))))))));
                        arr_15 [6] [i_1] [i_1] [i_4] = (min(-151625009, ((-((((-9223372036854775807 - 1) <= 1)))))));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    var_23 = 1015808;
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                arr_34 [i_5] [i_5] [i_7] [i_5] [i_8 - 1] [i_9] = (arr_17 [i_8]);
                                var_24 = var_6;
                            }
                        }
                    }
                    arr_35 [i_5] = -1;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            {
                                arr_40 [1] [1] [i_5] [1] = -764257814799433736;
                                arr_41 [i_5] = (+-1);
                                arr_42 [i_6] [i_6] [8] [i_6] [i_6] [i_5] = -1;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
