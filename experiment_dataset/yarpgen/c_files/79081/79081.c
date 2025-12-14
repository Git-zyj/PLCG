/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [3] &= -27273;
        var_19 = ((!(arr_0 [6])));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_20 = 34;
        arr_6 [i_1] [i_1] = (min((min(1, 25)), (((54341 / (arr_5 [i_1] [i_1]))))));

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_21 *= (min(6960263733619958105, 27274));
            var_22 = (min(((min((((!(arr_4 [i_1] [24])))), (arr_7 [i_2])))), (((arr_8 [i_1] [i_2] [i_2]) ? (arr_7 [i_1]) : 1))));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_23 = (!11281);
            var_24 = (!50951);
            var_25 = -94;

            /* vectorizable */
            for (int i_4 = 3; i_4 < 24;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            var_26 = (arr_15 [i_1] [9] [i_3] [i_4] [i_3] [i_6] [i_6]);
                            arr_17 [i_1] [i_3] [i_4] [i_5] [i_6] = var_0;
                            var_27 = 127;
                            var_28 += 50951;
                            var_29 = ((67108848 ? 1 : 1689993646));
                        }
                    }
                }
                arr_18 [i_4 - 3] [i_3] [i_1] [i_1] = (((arr_13 [i_1] [i_3] [i_4 - 3] [i_1] [i_1]) ? (!0) : 1282254996));
            }
        }
        arr_19 [i_1] [i_1] = ((((min((arr_7 [i_1]), (arr_7 [i_1])))) == (((arr_7 [i_1]) ? (arr_7 [i_1]) : (arr_7 [i_1])))));
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            arr_27 [i_8] [i_8] [i_7] = var_16;
            var_30 -= var_12;
            var_31 = 93;
        }
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 22;i_11 += 1)
                {
                    {
                        var_32 = (arr_16 [i_10 - 1] [i_11 - 1] [i_11] [i_11] [i_11 + 1] [i_11] [i_11]);
                        arr_35 [18] [i_11] [i_11] [i_10] [i_9] [i_7] = (min((arr_13 [i_10] [i_10] [i_10] [i_10 + 3] [i_10 + 1]), ((min((arr_22 [i_9] [i_11 - 1]), var_18)))));
                    }
                }
            }
            arr_36 [i_7] [i_9] [i_9] = (!1);
            var_33 |= ((~(arr_13 [i_7] [i_7] [i_7] [i_9] [i_9])));
            var_34 = 1;
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 0;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 21;i_15 += 1)
                        {
                            {
                                arr_46 [i_7] [i_7] [i_7] [i_7] [i_7] = (((((arr_7 [i_15 + 2]) ? (arr_7 [i_15 - 1]) : 0)) ^ 109));
                                var_35 = -2147483647;
                                arr_47 [i_7] [i_12] [i_13] [i_7] [i_15] = (((arr_22 [i_15 + 1] [i_15 + 2]) + ((min((arr_42 [i_13 + 1]), (arr_42 [i_13 + 1]))))));
                                var_36 = (arr_26 [i_13 + 1] [i_14] [i_15 + 1]);
                                arr_48 [7] [i_7] [7] [i_13] [8] [14] = var_6;
                            }
                        }
                    }
                    arr_49 [i_7] [i_7] [i_7] [i_7] = (((min((((arr_10 [i_7]) ? -32761 : 1)), (2147483647 - 0))) == -27788));
                    var_37 = 0;
                }
            }
        }
        var_38 = -238;
        var_39 = ((~(((arr_43 [1] [1] [i_7] [i_7] [i_7]) | 0))));
        var_40 = 98304;
    }
    var_41 = var_5;
    #pragma endscop
}
