/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (((((((min((arr_3 [i_0] [i_0]), (arr_5 [i_1] [i_0])))) ? var_6 : (arr_1 [i_1] [i_1])))) ? ((var_10 ? var_0 : (((arr_2 [i_1] [11]) ? -648369511 : (arr_2 [5] [i_1]))))) : ((((1747870289 < ((((!(arr_5 [i_0] [i_1])))))))))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_8 [i_0] [i_2] [i_2] [i_2] = ((((max(-36, (((var_10 || (arr_2 [i_0] [i_0]))))))) ? ((((2547097001 > (~-648369508))))) : ((var_9 ? var_11 : 1747870313))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_13 = ((~((var_11 ? (arr_4 [i_4 + 1]) : 65528))));
                                var_14 = ((((min(var_3, (arr_7 [i_4 - 1] [i_1])))) ? (arr_7 [i_4 + 1] [i_3]) : (max((arr_7 [i_4 - 1] [i_1]), 8))));
                                var_15 = (((15175407953239698745 && 1747870326) ? (((-2147483647 - 1) ? -var_7 : 16166)) : (min(-32762, ((-(arr_4 [i_2])))))));
                            }
                        }
                    }
                    var_16 = (((((1747870313 ? var_6 : var_5))) ? (((var_3 ? (arr_7 [5] [i_0]) : (arr_7 [i_1] [i_2])))) : (max(var_11, var_4))));
                    var_17 = ((((min(var_5, -var_0))) ? (((!((((arr_7 [i_0] [i_1]) ? (arr_7 [i_0] [i_0]) : 62633)))))) : var_4));
                    var_18 = ((~(max(var_9, (arr_5 [i_0] [i_0])))));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_17 [1] [i_5] = (((28 ? -4174 : 32)) * (((!(((var_7 ? var_2 : var_1)))))));
                    arr_18 [1] [i_1] [i_5] [i_5] = (--1747870329);
                }
                arr_19 [i_0] [i_1] [i_1] = (((((24345 / (arr_13 [i_0] [i_0] [i_1] [i_1])))) ? (((-(arr_13 [i_0] [i_0] [i_0] [i_0])))) : (((arr_2 [i_0] [i_0]) ? var_7 : var_11))));

                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    var_19 = (max((-1 < -10182), (min(1, 1))));
                    var_20 &= ((-var_7 ? -32765 : (~var_10)));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    arr_28 [i_1] [i_1] [i_0] = (((arr_4 [i_0]) ? var_4 : (arr_13 [i_0] [i_0] [i_1] [i_7])));
                    arr_29 [i_1] [i_7] = (1 * -27);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            {
                                arr_36 [i_7] [i_1] [i_9 + 1] [i_8] [i_0] [1] = (var_0 ? var_6 : (arr_34 [i_9] [i_9] [i_7] [i_9 + 1] [i_9]));
                                var_21 = ((((-(arr_9 [i_7] [i_7] [i_7] [9]))) & (arr_15 [1] [i_9 + 1] [7] [i_9 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_0;
    var_23 = (~2547096989);
    #pragma endscop
}
