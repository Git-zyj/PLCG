/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    var_13 = 73;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [8] [i_0] = (((-74 ? (arr_9 [i_2 - 1] [5] [i_2 + 2] [i_2 - 1] [i_4 - 2]) : (arr_11 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2] [i_4 - 2]))));
                                var_14 -= ((7533952648129098072 ? -568754022 : 0));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        {
                            arr_17 [8] [i_1] [i_1] = var_8;

                            for (int i_7 = 0; i_7 < 22;i_7 += 1)
                            {
                                var_15 = (min(var_15, (((((((arr_10 [i_5]) ? (arr_1 [i_1]) : -2))) ? (arr_8 [i_6] [i_7]) : ((30 ? (arr_10 [i_5]) : (arr_8 [i_6] [i_6]))))))));
                                arr_20 [i_0] [18] [18] [i_6] [1] = ((max(((-1775568067 ? 32 : 2147483647)), ((1791853901 ? 81 : (arr_9 [i_0] [i_0] [2] [2] [i_0]))))));
                                arr_21 [8] [19] [19] [1] [i_7] [19] [i_7] = var_9;
                                var_16 = ((~(((((arr_14 [i_0] [i_1] [i_7]) ? 73 : var_3))))));
                            }
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((arr_19 [i_6 + 2] [i_6] [i_6] [i_6] [i_6] [i_6 - 2]) * (arr_19 [i_6 - 1] [10] [i_6] [i_6] [i_6] [i_6 + 1]))));

                            for (int i_8 = 0; i_8 < 22;i_8 += 1)
                            {
                                arr_26 [i_8] [i_0] [i_5] [i_1] [i_0] [i_0] [i_0] = ((((((max(174, -672671479))) ^ (max((arr_1 [i_5]), var_2)))) != ((7533952648129098072 ? (arr_25 [i_6 + 1] [i_6] [i_6 + 1]) : 43))));
                                arr_27 [2] = (min(((((min((arr_14 [i_0] [i_5] [i_8]), 1)) <= 119))), (((var_2 ? 20101 : 0)))));
                            }
                        }
                    }
                }
                arr_28 [i_0] = ((((max(-1775568067, 360551280))) - (((min(255, (arr_2 [i_0])))))));
                arr_29 [i_0] |= ((((((arr_8 [6] [i_0]) ? 255 : -3827404503541089201))) ? (arr_8 [i_1] [i_0]) : -var_6));
            }
        }
    }
    var_17 ^= var_8;
    var_18 += (min(((-1 / ((var_4 ? -20102 : var_12)))), var_3));
    #pragma endscop
}
