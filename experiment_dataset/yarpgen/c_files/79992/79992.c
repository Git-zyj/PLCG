/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 = (max(((max(var_10, (arr_6 [i_2])))), (max((arr_3 [i_1 - 4]), (arr_6 [i_2])))));
                            var_15 = var_1;
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_16 = ((((((arr_5 [i_4] [i_1] [i_4] [i_5]) ? (arr_5 [i_1] [i_1 - 1] [i_4] [i_5]) : (arr_5 [i_4] [i_1] [i_1] [i_1 - 1])))) ? (((arr_5 [i_4] [i_0] [i_0] [i_0]) ? (arr_5 [i_4] [i_4] [i_1 - 1] [i_4]) : (arr_5 [i_5] [20] [i_4] [i_5]))) : (((arr_5 [i_5] [i_5] [i_1 - 3] [i_5]) ? (arr_5 [i_1] [i_4] [i_1] [i_1]) : (arr_5 [i_1] [i_1] [i_4] [i_1])))));

                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            var_17 |= (arr_11 [i_0] [i_0]);
                            var_18 = (((((((((arr_15 [12] [i_1 - 2] [i_4] [i_5] [i_5]) ? (arr_1 [i_5]) : (arr_8 [i_0] [i_0] [i_4] [i_5] [8] [i_4])))) ? (max((arr_16 [i_5]), var_12)) : (arr_6 [i_1])))) ? ((max(4294967280, 15))) : (arr_12 [i_0] [i_1] [i_4] [i_6 - 1])));
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_19 ^= (arr_17 [i_0] [i_1] [i_1] [i_5] [i_1] [i_7]);
                            var_20 = ((17 ? 4294967280 : -1947));
                            var_21 = (arr_5 [i_1] [i_1 - 1] [i_1 + 2] [i_1 - 2]);
                            var_22 = var_2;
                        }
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            var_23 = ((arr_13 [i_0] [0]) ? (((arr_7 [i_1 - 1] [i_1 - 3] [i_1 + 1]) ? (arr_7 [i_1 - 4] [i_1] [i_1 - 4]) : (arr_7 [i_1 - 2] [0] [i_1 - 1]))) : (max(var_2, var_4)));
                            var_24 = (arr_15 [i_4] [i_1 - 3] [i_1 - 2] [11] [i_8]);
                            var_25 = (arr_2 [7] [i_0]);
                            var_26 = (max((((arr_24 [i_1 - 2] [i_1 - 1] [i_1 - 3]) ? var_4 : (arr_21 [i_1 + 2] [i_1] [i_1] [i_1] [18] [i_1 + 1] [i_1 + 1]))), ((var_0 ? (arr_21 [i_1 - 2] [i_1 - 3] [i_1] [i_1] [i_1] [i_1 + 2] [i_0]) : (arr_18 [i_1 - 3] [i_1] [i_1 + 1])))));
                            var_27 = (max(var_6, ((max((arr_23 [i_1 - 2] [i_1] [i_1 - 4] [17] [20]), (arr_23 [i_1 - 2] [i_1] [i_1 - 3] [i_1] [i_5]))))));
                        }
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            var_28 = var_7;
                            var_29 = ((((((arr_11 [i_0] [i_1 - 2]) ? (arr_1 [i_0]) : (arr_2 [i_0] [i_1])))) ? ((var_11 ? (arr_13 [i_1 - 2] [i_9]) : (arr_13 [i_1 - 2] [i_1]))) : ((((max(var_3, var_7))) ? ((((arr_24 [i_0] [i_1] [i_5]) ? (arr_21 [i_9] [i_9] [i_5] [i_4] [i_0] [i_0] [i_0]) : (arr_20 [i_0])))) : (arr_10 [i_4] [i_1 - 4] [i_4] [i_1 - 4] [16])))));
                            var_30 = arr_20 [i_0];
                            var_31 = (arr_10 [i_1] [i_1] [i_1] [i_1 - 1] [i_1]);
                            var_32 = max(var_6, (((var_8 ? (arr_19 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 4] [i_1] [i_1 - 2]) : ((var_13 ? var_5 : (arr_9 [4] [i_4] [i_4] [i_0])))))));
                        }
                        var_33 = var_5;
                    }
                    for (int i_10 = 2; i_10 < 20;i_10 += 1)
                    {
                        var_34 = max(var_10, var_11);
                        var_35 = ((arr_16 [i_0]) ? (max((arr_27 [i_1 - 1] [i_10 + 1] [i_1 - 1]), (arr_27 [i_1 + 2] [i_10 - 1] [i_10]))) : ((var_8 ? (arr_14 [i_10 + 1] [i_10 - 2] [i_10 - 1] [i_1 + 2] [i_1 + 1] [i_1 + 1]) : (arr_12 [i_1 - 1] [i_1] [i_0] [i_0]))));
                        var_36 ^= var_8;
                    }
                    /* vectorizable */
                    for (int i_11 = 2; i_11 < 19;i_11 += 1)
                    {
                        var_37 = (((arr_31 [i_1 - 4] [i_1] [6] [i_1 - 4] [6]) ? (arr_21 [i_11 + 1] [i_1 + 2] [i_1] [i_1] [i_1] [i_1 - 4] [i_1]) : (arr_30 [i_1 - 4] [i_0])));
                        var_38 = (max(var_38, (arr_13 [i_1] [i_4])));
                        var_39 = ((var_2 ? var_7 : (arr_21 [i_0] [i_0] [i_1] [i_4] [i_4] [i_4] [i_11])));
                    }
                    var_40 = (((arr_9 [i_1 - 4] [i_1 + 1] [i_4] [i_1 - 2]) ? (max((arr_27 [i_0] [i_1 - 1] [i_1]), (arr_14 [i_0] [i_1 + 1] [18] [i_1] [i_1] [i_4]))) : (max((arr_25 [i_1 - 1] [i_1 - 1] [i_1 - 3]), (arr_17 [i_0] [i_0] [i_1 - 2] [i_1 + 2] [i_1 - 4] [18])))));
                }
            }
        }
    }
    var_41 ^= var_1;
    var_42 = (var_6 ? var_7 : var_10);
    var_43 = var_13;
    var_44 ^= var_6;
    #pragma endscop
}
