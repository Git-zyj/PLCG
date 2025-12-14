/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((504 ? 7168 : var_9)) <= var_12)) ? var_1 : var_4);
    var_19 -= var_12;
    var_20 = (((((var_13 + ((64 ? var_1 : var_15))))) ? (min(var_16, var_3)) : var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                var_21 = ((((((var_12 + var_17) ? (arr_0 [i_0] [10]) : ((-(arr_5 [2] [i_0])))))) ? (((max((arr_1 [i_0]), var_15)))) : 1));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_13 [i_3] [i_0] [i_3] = ((var_9 ? (((var_8 && (arr_10 [i_0] [i_0] [1] [i_2] [i_3])))) : (arr_11 [i_0] [i_1 - 2] [i_2] [i_0])));
                        arr_14 [i_3] [10] [10] [10] |= var_5;
                    }

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_18 [i_4] [i_4] [i_2] [i_2] [i_4] [i_0] = var_3;
                        arr_19 [i_4] [i_4] [i_0] = ((~(((arr_11 [i_0] [i_1 + 1] [i_2] [14]) ? (arr_16 [i_2] [15] [15] [i_2]) : var_13))));
                    }
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        arr_22 [17] [i_2] [i_0] [i_0] = ((min(4, (arr_15 [i_5 + 1] [i_5] [16] [i_5] [i_5 - 2] [i_1]))));
                        arr_23 [i_1] = (((min((((arr_9 [i_0] [i_1] [i_0]) ^ 3)), ((((arr_11 [i_0] [i_1] [i_2] [i_1]) <= var_2))))) <= (((((var_10 ? (arr_1 [i_0]) : 1)) <= (arr_17 [i_1] [i_1] [i_1] [i_1 - 3]))))));
                        var_22 = ((min(var_6, (arr_15 [i_5 - 1] [i_1] [i_2] [i_0] [i_2] [i_1 - 3]))));
                    }
                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        arr_26 [i_6] [i_6] = ((var_14 ? ((var_5 >> (((arr_21 [i_6 - 1] [i_1 - 1] [i_1 - 1] [i_0]) + 112)))) : (((((-(arr_3 [1])))) ? ((min((arr_12 [i_6] [i_6]), var_9))) : (arr_11 [i_1] [i_1 - 3] [4] [i_6])))));

                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_23 = (((arr_2 [i_0] [i_0]) && ((((62 ? var_16 : var_5))))));
                            arr_30 [i_6] [i_1] [i_6] [i_6] [i_7] = (arr_0 [i_6] [i_6]);
                        }
                        var_24 = ((arr_29 [11] [i_6] [i_6] [i_6] [i_6 + 1]) ? ((((max((arr_10 [i_0] [i_0] [3] [i_2] [3]), var_15)) % var_11))) : (max((arr_27 [i_6 - 1] [i_1 - 4]), (((var_4 / (arr_11 [16] [i_1] [16] [2])))))));
                    }
                    var_25 |= ((((!(arr_4 [i_0] [i_0]))) ? ((~(arr_28 [i_1 - 1] [i_1] [16] [14] [16] [i_1 - 2] [i_0]))) : ((((arr_6 [i_1 - 4] [i_1 - 3] [i_1] [i_1 - 1]) != (arr_15 [i_0] [i_0] [i_2] [i_2] [i_2] [i_2]))))));
                }
                /* vectorizable */
                for (int i_8 = 3; i_8 < 17;i_8 += 1)
                {
                    arr_35 [i_0] [i_0] [i_8] [i_0] = (arr_8 [i_0]);

                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        var_26 = (((arr_11 [i_1] [i_1] [17] [i_8 + 1]) ? var_13 : (arr_37 [i_0] [i_0] [i_0] [i_8 - 1])));
                        var_27 &= (((190 ^ var_15) ? ((((23 < (arr_16 [4] [i_1 - 2] [i_8] [16]))))) : (((arr_15 [i_0] [9] [i_1 - 2] [i_8] [i_8] [i_9]) ? var_0 : var_6))));
                        var_28 = (max(var_28, (((((((arr_33 [i_0] [i_0] [i_0]) ? var_1 : (arr_24 [i_9])))) ? ((((arr_17 [i_0] [i_1] [i_8 - 1] [i_9]) && 120))) : var_7)))));
                    }

                    for (int i_10 = 3; i_10 < 18;i_10 += 1)
                    {
                        var_29 = 0;

                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            arr_43 [i_10] = (arr_24 [i_11]);
                            var_30 = (arr_36 [i_1 - 3] [i_8 - 1] [i_10 + 1]);
                            arr_44 [10] [i_10] [i_10] [i_8] [i_10] [i_1] [10] = (arr_3 [14]);
                            var_31 = ((arr_42 [i_11] [i_11] [i_10 - 2] [i_8 + 2] [i_8]) / var_6);
                            arr_45 [i_11] [i_10] [i_8] [i_10] [9] = (arr_21 [i_0] [i_1] [i_8] [i_11]);
                        }
                        var_32 ^= 0;
                    }
                    var_33 += (((arr_38 [i_8 + 1] [i_8 - 1] [i_8 - 3] [i_1 - 4]) + (arr_38 [i_8] [i_8 - 1] [i_8 - 2] [i_1 - 2])));
                    var_34 = (((var_17 ? 2745142345220134770 : (arr_25 [i_0] [11] [i_1] [i_0] [i_0] [i_1]))));
                }
            }
        }
    }
    #pragma endscop
}
