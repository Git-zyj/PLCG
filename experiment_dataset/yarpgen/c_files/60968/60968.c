/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = max((arr_3 [i_0] [i_1]), (max((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_1]))));
                var_17 = (max(var_17, (((((((arr_2 [i_1] [i_1]) ^ 18446744073709551615)) < (arr_5 [i_0]))) ? (((((arr_4 [i_0] [i_1] [i_1]) && var_2)) ? (arr_1 [i_1]) : -20812)) : (!-var_6)))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] = (((arr_5 [i_2]) >= var_12));
                                var_18 = (~2749512718);
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_13 [i_4] [i_3] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 + 1]);
                            }
                        }
                    }
                    arr_17 [i_0] [i_2] [1] [9] = (arr_9 [i_0] [i_1]);
                }
                for (int i_5 = 3; i_5 < 8;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 7;i_7 += 1)
                        {
                            {
                                arr_27 [i_1] [i_0] [i_5 + 2] [i_1] [i_0] = (min(24, (((-645665972 ^ (max((arr_23 [i_0] [i_1] [i_1] [i_1] [i_7 - 1] [i_6]), 645665972)))))));
                                arr_28 [i_1] [i_5] [i_5] = 645665952;
                                arr_29 [2] = ((0 ? -1 : (((var_6 - var_2) ? (max(-1230806314, 645665957)) : (arr_23 [i_0] [i_1] [i_5 - 1] [i_1] [i_7 + 3] [i_7])))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        arr_33 [i_5 + 1] [i_5] = ((arr_2 [i_5 - 3] [i_5]) ? 645665972 : (arr_2 [i_5 + 2] [i_5]));
                        arr_34 [i_8] [i_5] [i_1] = ((9134235979540183402 + ((((arr_13 [i_1] [i_1] [i_1] [i_8] [i_0] [i_0] [i_1]) / var_16)))));
                    }
                    var_19 = ((((((29377 > (arr_21 [i_1] [i_0]))))) ? (((((arr_13 [i_0] [4] [6] [i_1] [i_5] [i_0] [1]) > 67426097)))) : 2621360739));
                }
                var_20 = -3958894256236172717;
            }
        }
    }
    var_21 = var_8;
    #pragma endscop
}
