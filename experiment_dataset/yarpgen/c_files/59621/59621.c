/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [11] [i_1] [i_3] [i_4] = (((((479238172 ? (arr_8 [i_2 + 4] [i_4 - 1] [i_4 + 1]) : (arr_8 [i_2 + 3] [i_4 + 1] [i_4 + 3])))) ? (((arr_8 [i_2 + 1] [i_4 + 3] [i_4 - 1]) ? 13464709811349599094 : (arr_8 [i_2 + 3] [i_4 + 2] [i_4 + 1]))) : (((max(-5, var_10))))));
                                arr_17 [3] [i_2 + 2] [12] |= (min((arr_15 [i_0] [i_1] [i_2 + 2] [1] [i_4 - 1]), 0));
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = var_3;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_18 = max((((max(69269232549888, 65532)))), (arr_13 [i_5] [i_6 + 1] [8] [i_2]));
                                arr_24 [i_0] [i_1] [i_1] [i_5] [i_6 - 2] = (arr_22 [i_6 - 1] [i_2] [i_5] [i_2 + 3] [i_6] [i_5 - 3]);
                                arr_25 [i_0] [i_5] [i_1] [i_2] [i_5] [i_6] [i_6 - 2] = (((arr_21 [i_0] [i_0] [i_2] [i_6 - 3] [i_2] [i_2 + 1]) ? (arr_23 [i_0] [i_1] [i_2] [8] [6]) : (((-4632990938569637848 ? 10344 : (arr_15 [i_0] [i_0] [i_2 + 2] [i_5 - 2] [i_2]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_19 = (((((((16232011572085264312 ? (arr_19 [i_1] [i_1] [11] [i_8]) : var_5)) - (((32611 ? (arr_2 [12]) : 56)))))) ? (min(7447, (arr_23 [i_2 - 1] [i_2] [i_2 + 3] [i_2 - 1] [i_2 + 1]))) : (((var_13 >> (182 - 168))))));
                                var_20 *= (min(((((!1895944054) || var_5))), (arr_29 [i_0] [i_1] [i_1] [i_2 + 2] [i_2] [i_0] [i_8])));
                                var_21 = (min(((min(((min(255, 119))), -4870221985199023528))), 13020268031613640105));
                                arr_30 [i_8] [5] [i_1] [i_0] = (min(((((min(1, var_3))) + 950981514)), (((((min(93, (arr_26 [8] [i_1] [1] [8] [i_0] [i_8])))) > ((53 ? var_9 : var_8)))))));
                            }
                        }
                    }
                }
            }
        }
        var_22 = ((min(65535, (arr_3 [i_0]))) / ((min((arr_28 [i_0] [6] [i_0] [i_0] [i_0] [i_0] [i_0]), 1))));
        var_23 = (1 + 8164423094122388496);
    }
    var_24 = var_6;
    #pragma endscop
}
