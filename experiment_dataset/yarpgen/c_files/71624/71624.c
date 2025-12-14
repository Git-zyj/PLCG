/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_12 = (-(!-1048575));
                                var_13 ^= max((max((~-1056189284), (((-2147483647 - 1) ? var_3 : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_4] [i_2]))))), 2147483647);
                                var_14 = (1 | 4);
                                var_15 = (min(var_15, (arr_9 [i_0] [i_1] [22] [i_0] [i_4] [22])));
                                var_16 ^= 29;
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_0] [i_0] = (~(!-1));
                    var_17 &= (max(0, 644042589));
                    arr_15 [11] [20] [i_2 - 1] &= (18 + ((((max((arr_1 [i_0]), -1))) ? (((!(arr_11 [i_2 + 2] [i_1] [i_1] [i_1] [i_0] [i_0] [i_0])))) : (max(29, (-2147483647 - 1))))));
                }
            }
        }
    }
    var_18 &= var_3;
    var_19 = 86776252;

    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        var_20 = 2147483647;
        var_21 = arr_19 [i_5] [i_5];
    }
    for (int i_6 = 3; i_6 < 19;i_6 += 1)
    {
        var_22 = ((((max(-2147483638, var_8)))) ? (arr_0 [i_6]) : (min((~268431360), (max(-268431364, 1318700811)))));

        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            arr_25 [i_6] [i_7] = (-2147483647 - 1);
            arr_26 [i_6 - 2] = -2147483647;
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                {
                    var_23 = -2088045053;
                    var_24 = arr_22 [i_9];
                    arr_32 [i_6] [i_8] [i_9] = ((!(((max(var_7, var_2))))));
                    arr_33 [i_6] [i_8] [i_9] = (((!(((-(arr_12 [i_8] [i_9] [i_8] [6] [i_6])))))) ? ((1318700818 ? var_7 : (arr_1 [i_6]))) : ((2147483647 ? -1 : (arr_0 [i_8]))));
                }
            }
        }
        var_25 &= 2147483632;
    }
    #pragma endscop
}
