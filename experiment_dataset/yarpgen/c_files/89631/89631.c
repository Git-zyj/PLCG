/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_11 -= (min(8388576, (((arr_1 [i_0 + 2]) ? var_6 : 144115188075855808))));
                arr_4 [i_0] [i_0] [6] = 18302628885633695807;

                for (int i_2 = 3; i_2 < 22;i_2 += 1) /* same iter space */
                {
                    var_12 = (min((((arr_7 [i_0 + 1] [i_0 - 3]) ? var_4 : 1)), ((~(arr_7 [i_0] [i_0])))));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            arr_13 [i_4] [i_3] [i_2] [i_1] [i_0] [i_0] [i_0] = (min(-var_3, 18302628885633695807));
                            arr_14 [i_0] [i_0] [i_0] [i_3] [i_0] = ((50765 ? (((arr_1 [i_1 - 2]) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 + 1]))) : ((((var_9 + (arr_0 [i_4 + 2] [i_2]))) / (arr_9 [i_0] [i_1] [i_3] [i_3])))));
                            var_13 *= arr_7 [i_2 - 3] [i_1 + 1];
                            var_14 -= (min(((144115188075855814 ? (arr_8 [i_0 - 2] [i_1 - 2] [i_2 - 1] [i_4 + 2]) : var_7)), (((var_2 != (min((arr_2 [i_0] [i_1 - 2] [i_4]), var_4)))))));
                            var_15 *= var_8;
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_16 = (min((-9223372036854775807 - 1), -1596265930));
                            var_17 = (~-4294967295);
                        }
                        var_18 = (max(var_18, 18302628885633695804));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        arr_19 [i_0] [i_0] = var_7;
                        var_19 = (18302628885633695807 || var_7);
                        var_20 = (arr_10 [i_1 - 3]);
                        arr_20 [i_0] [i_1] [i_6] [i_1] [i_0] [i_1] = 26563;
                        arr_21 [i_1] [i_1] = ((~(arr_2 [20] [i_0] [i_1 - 1])));
                    }
                    var_21 = (((((arr_17 [i_0] [i_0 - 1] [i_0 - 2] [i_0]) ? var_4 : (arr_10 [i_0 - 2]))) & ((min((1484689513849229133 == 1277693232), (arr_1 [i_2]))))));
                }
                for (int i_7 = 3; i_7 < 22;i_7 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_22 *= (max((((min(321227152, var_3)))), (min(((var_3 ? var_10 : 144115188075855813)), var_8))));
                                arr_30 [i_7 - 2] [i_7 - 2] [14] [i_8] [i_7] = (min((~var_4), ((((var_6 <= var_3) ? 8 : 1386)))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        var_23 = (var_2 + -321227167);
                        arr_35 [i_0] = (((var_5 ? var_4 : var_7)));
                        arr_36 [i_10] [i_0 - 4] [i_0 - 4] [i_0 - 4] = var_9;
                        var_24 = (arr_18 [i_0] [i_0] [i_0] [i_1 + 2] [i_0]);
                    }
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        var_25 = (((var_0 & (arr_40 [i_0] [i_1 + 2] [i_7] [i_7 - 3] [i_7]))));
                        var_26 = (max(-1277693232, (min(var_4, var_2))));
                    }
                }
            }
        }
    }
    var_27 = var_10;
    var_28 = var_5;
    #pragma endscop
}
