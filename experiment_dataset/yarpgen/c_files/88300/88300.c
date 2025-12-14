/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = (arr_2 [i_0] [i_0]);
                arr_5 [i_1] = ((min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_1]))));
                var_14 = -var_11;
                var_15 = (max(var_15, (arr_4 [i_0] [i_0] [i_0])));
                arr_6 [i_1] = ((!(arr_3 [i_1] [i_1])));
            }
        }
    }
    var_16 = (!0);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 16;i_6 += 1)
                            {
                                arr_20 [1] [i_3] [i_3] [1] [7] [i_3] [i_3] = 0;
                                var_17 *= ((!(arr_12 [i_6])));
                                var_18 = (arr_17 [i_2] [i_3] [i_4]);
                                var_19 = (max(var_19, (((!((!(arr_15 [14] [i_5 + 1] [14] [i_5 + 1]))))))));
                                var_20 -= (((arr_12 [9]) && (arr_19 [i_3] [i_5 - 1] [10] [6] [i_5 + 1])));
                            }
                            for (int i_7 = 0; i_7 < 16;i_7 += 1)
                            {
                                arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_3] [i_2] = 3;
                                var_21 *= (arr_4 [i_2] [i_3] [i_5 - 1]);
                                var_22 = 0;
                            }
                            arr_25 [i_2] [i_3] [i_3] [i_2] [i_4] [i_5] = (((((-(0 >= var_6)))) ? (((arr_21 [i_5] [15] [i_5 - 1] [i_3] [i_5 + 1] [i_5] [i_5 + 1]) - (arr_21 [i_5] [9] [i_5] [i_3] [i_5 + 1] [13] [i_5 - 1]))) : ((var_1 ? (arr_18 [i_2] [i_3] [i_4] [i_5 - 1] [14] [i_3] [i_3]) : 12))));
                            arr_26 [i_2] [i_2] [i_4] [i_3] = max((-9223372036854775807 - 1), 9223372036854775798);
                            var_23 = (((arr_15 [i_3] [i_3] [i_3] [i_5 - 1]) ? ((min(var_2, var_4))) : (arr_15 [1] [i_5] [i_3] [i_5 - 1])));
                        }
                    }
                }
                arr_27 [i_3] = ((((((!231) ? (arr_23 [i_2] [i_2] [i_2] [i_3] [i_3]) : (((7225730308129824121 ? (arr_14 [i_3] [i_3]) : var_9)))))) ? var_9 : var_12));
                arr_28 [i_3] = arr_22 [i_2] [15] [3] [3] [15];

                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    arr_32 [3] [0] [i_3] = ((((((arr_19 [i_2] [i_2] [i_3] [i_2] [i_2]) % (arr_4 [i_2] [i_2] [i_2])))) ? 9223372036854775807 : (arr_0 [i_8])));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            {
                                arr_38 [i_2] [i_3] [12] [i_2] [i_2] = 2147483647;
                                var_24 *= (((((-2147483637 / (arr_21 [i_2] [i_3] [1] [i_9] [1] [i_9] [i_9])))) ? (((113 <= ((65515 ? -24328 : 65507))))) : 65515));
                                var_25 = (((-((var_10 >> (var_8 + 146))))));
                                arr_39 [i_3] [i_3] = var_2;
                                arr_40 [i_3] [i_10] [15] [i_10] [i_10] [i_10] [7] = (min(((min(var_8, (arr_8 [i_2] [i_2])))), var_12));
                            }
                        }
                    }
                }
                for (int i_11 = 3; i_11 < 14;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 0;i_13 += 1)
                        {
                            {
                                arr_48 [i_3] [i_3] [i_11] [i_12] [i_13] = (((arr_47 [i_11] [i_11 - 2] [i_11 - 2]) ? -219 : (((!(-127 - 1))))));
                                var_26 = (((((((arr_11 [i_2] [10] [i_2] [i_3]) || var_2)))) ? (((229 ? (arr_0 [i_11 - 3]) : 216))) : (min(((-2079342391 ? (arr_11 [i_2] [4] [i_11] [i_3]) : (arr_3 [i_3] [i_3]))), var_4))));
                                var_27 = (arr_0 [i_12]);
                            }
                        }
                    }
                    var_28 = (((((((var_2 ? (arr_4 [5] [5] [i_11]) : var_3))) ? ((65535 ? (arr_8 [i_2] [i_2]) : 2147483647)) : var_1))) ? (((0 ? 255 : 0))) : 143);
                }
            }
        }
    }
    var_29 = var_2;
    #pragma endscop
}
