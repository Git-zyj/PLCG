/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_3 ^ ((((var_0 ? var_7 : var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_15 = (min((((arr_7 [i_2]) ? -101 : (arr_4 [i_1]))), (arr_0 [i_3 - 1] [i_0])));
                            arr_9 [i_0] [i_1] [i_1 - 2] [i_0] [20] [i_3] = (arr_8 [i_0] [i_1] [i_2] [i_2]);
                            var_16 = (min(var_16, 1074));
                        }
                    }
                }
                var_17 = (max(var_17, (((((arr_7 [i_1 + 1]) ? (arr_7 [i_1 - 2]) : 1))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            {
                var_18 = (arr_4 [i_4 + 1]);
                arr_15 [i_4] [i_4] [i_4] = (((((arr_4 [i_4 + 3]) ? (arr_4 [i_4 + 2]) : (arr_4 [i_4 + 1])))) || ((min((arr_4 [i_4 - 1]), 16383))));
                arr_16 [i_4] [3] = (max(((15759 ? (arr_12 [i_5 - 1] [i_5 - 1]) : (arr_12 [i_5 - 1] [i_5 - 1]))), (!-7)));
                var_19 = (min((arr_12 [i_4] [i_4]), 2));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 24;i_10 += 1)
                        {
                            {
                                var_20 = (((((((-127 - 1) & (arr_17 [i_6]))) + (-83 / 241))) == (((((((arr_21 [i_6]) ? var_8 : (arr_18 [i_9] [i_8])))) || ((((-127 - 1) ? (arr_22 [i_6] [i_7]) : 193))))))));
                                var_21 |= ((min((!215), ((176 || (arr_20 [i_7] [i_8]))))));
                                arr_29 [i_7] [i_7] = (i_7 % 2 == 0) ? ((max((16383 ^ 1), (min((arr_20 [i_10 + 1] [i_10 - 2]), (((((arr_28 [i_6] [i_6] [i_6] [i_6] [i_7]) + 2147483647)) << (40 - 40)))))))) : ((max((16383 ^ 1), (min((arr_20 [i_10 + 1] [i_10 - 2]), (((((((arr_28 [i_6] [i_6] [i_6] [i_6] [i_7]) - 2147483647)) + 2147483647)) << (40 - 40))))))));
                            }
                        }
                    }
                    var_22 = ((min((max(58, 255)), (arr_21 [i_6]))) % -109);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            {
                                arr_34 [i_12] [i_11] [i_7] [i_7] [i_7] [i_6] [i_6] = 1;
                                var_23 = (min((((((arr_17 [i_8]) == 1)))), (arr_30 [0] [23] [i_7] [i_11] [i_12] [i_12])));
                                arr_35 [i_6] [i_6] [i_6] [i_6] [i_6] [i_7] = ((((((((arr_22 [i_12] [i_6]) ? -88 : var_13))) ? 65514 : (!1))) < ((185 ? ((((arr_30 [i_6] [i_7] [i_7] [i_7] [i_12] [i_7]) && (arr_28 [i_6] [i_7] [i_7] [i_11] [i_7])))) : (((arr_25 [i_6] [i_7] [i_11] [i_12]) ? (arr_19 [12] [i_8] [12]) : 125))))));
                                arr_36 [i_6] |= (max(168, (((32744 >= (arr_26 [i_11] [i_11] [i_11] [i_12]))))));
                                arr_37 [i_7] [i_6] [i_7] [i_6] [i_6] [i_6] = ((max((arr_21 [i_7]), 4093556688)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
