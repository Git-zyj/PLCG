/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((var_1 ? -var_7 : var_0)), ((var_19 ? var_11 : (min(var_18, var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, var_3));
                                var_22 = (max(var_22, ((((max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]), var_8)) + (arr_7 [9] [9] [9] [9] [6]))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        arr_15 [i_0] [8] [i_0] [i_5] = (((arr_11 [6] [6] [6] [6]) ? (arr_11 [10] [10] [10] [8]) : (arr_11 [i_0] [i_0] [i_0] [i_0])));

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_23 ^= (((arr_11 [i_5 + 3] [i_5 + 2] [i_5 + 3] [i_5 - 1]) && 0));
                            var_24 = (((arr_6 [i_5 + 2]) ? (arr_6 [i_5 + 1]) : (arr_6 [i_5 + 2])));
                            var_25 = (((arr_11 [12] [i_5 + 3] [i_5 + 3] [i_5 + 3]) || (((-219855320 | (arr_11 [8] [8] [i_1] [i_1]))))));
                        }
                    }

                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_26 = (max(var_26, (arr_19 [11] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        var_27 = ((var_19 ? (arr_5 [i_1] [i_1] [i_1]) : (((arr_8 [i_0] [i_0] [5] [i_0] [i_0]) ? var_15 : (max(4, (arr_5 [i_0] [i_0] [i_0])))))));
                    }
                }
            }
        }
    }
    var_28 = (min((max((0 | 288212783965667328), (~var_4))), ((max(var_8, (var_14 == var_8))))));
    var_29 += ((var_9 > (max(-118, (max(var_11, var_4))))));
    #pragma endscop
}
