/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_15 [i_0] [i_1] [i_2] [i_3] = (arr_14 [i_1] [0] [7] [i_3] [i_3 - 1]);
                            arr_16 [i_2] [i_2] |= ((-((1 ? (arr_3 [i_0] [i_2 - 2]) : (arr_3 [9] [i_2 + 2])))));

                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                arr_19 [i_1] [i_2 - 2] [i_3] [i_1] = (-(((arr_12 [14] [i_1] [i_1]) ? (max(-21, (arr_2 [i_0]))) : (arr_0 [i_4]))));
                                arr_20 [i_1] [6] [14] [i_3] [i_4] [12] [i_3 - 3] = max(((((max(4194633426438816755, var_10))) ? (arr_18 [1] [i_1] [i_2 + 4] [i_3 - 2]) : (arr_12 [i_1] [13] [i_1]))), (((~(arr_13 [2] [i_1] [i_2 - 1] [1])))));
                                var_13 = (((arr_12 [i_1] [0] [i_1]) != (7994192543172829640 ^ 7994192543172829640)));
                            }
                            for (int i_5 = 0; i_5 < 15;i_5 += 1)
                            {
                                arr_23 [13] [i_1] [i_1] [i_1] [i_5] = var_6;
                                arr_24 [i_0] [i_0] [i_1] = ((((((((arr_6 [i_1]) || var_9)) ? (((arr_17 [i_0] [i_1] [i_2 + 4] [i_3] [i_1]) ? (arr_3 [0] [i_1]) : 7994192543172829639)) : 1))) || (((arr_0 [i_0]) != (arr_4 [i_0 + 1] [i_0 + 1] [i_2])))));
                                var_14 = var_7;
                                var_15 = (arr_2 [i_3 + 1]);
                            }
                            var_16 = (((((arr_12 [i_2] [1] [i_1]) ? (arr_12 [i_0] [3] [i_1]) : 10160760876422683143)) <= (((-(arr_12 [i_0 + 2] [i_2] [i_1]))))));
                        }
                    }
                }
                var_17 = (max((((arr_6 [i_1]) | (arr_7 [i_1] [i_1]))), ((min((arr_11 [i_0] [i_1] [8] [i_1] [i_1] [i_1]), ((-7994192543172829640 ? -7994192543172829630 : 35241)))))));
            }
        }
    }
    var_18 = (min(45, 1));
    var_19 = -7994192543172829668;
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                {
                    var_20 ^= (((arr_12 [i_6] [i_6] [6]) ? (3300732946116806418 | -7994192543172829651) : (min(30295, (var_12 ^ 1)))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                var_21 = 1;
                                var_22 = ((((((arr_21 [i_10] [3] [i_10] [i_10] [i_7 + 1]) != var_0))) | var_1));
                                arr_38 [i_6] [i_9] [i_9] [i_9] [i_7 + 1] [i_6] = (max((arr_2 [i_7 + 1]), ((~(((arr_7 [i_9] [4]) ? 3333057450774594803 : var_4))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
