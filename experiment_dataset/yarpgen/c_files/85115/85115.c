/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
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
                            var_19 |= ((~(((((var_1 ? var_17 : (arr_5 [i_0] [i_0] [i_3])))) ? -1201965820 : (12774 <= -1201965820)))));
                            var_20 &= (arr_8 [i_3 - 1] [i_1] [i_2] [i_1 - 1]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_21 += var_3;
                                var_22 = (arr_3 [2] [i_4]);
                                arr_19 [i_6] [i_4] [i_6] [i_5] [i_0] [i_4] [i_0] = min(7407011370535345650, 71);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        {
                            var_23 = ((185 ? (max(184, 15590703492100631379)) : (((((arr_9 [i_1] [i_7] [i_1] [i_0]) || (arr_8 [i_0] [i_1] [i_7] [i_8])))))));
                            var_24 = (max(var_24, (arr_16 [i_0] [i_0] [i_1 + 1] [1] [i_8])));
                            arr_25 [i_0] [i_0] [i_1] [i_7] [i_8] = (14127 & 1201965816);
                            var_25 = arr_4 [i_1] [i_1];
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 21;i_10 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_11 = 4; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 23;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 21;i_13 += 1)
                        {
                            {
                                arr_42 [i_12] [i_13] [i_12] [i_12] [i_12] [i_12] = (max((arr_40 [i_13] [i_10] [i_12 + 1] [20] [i_11 - 4]), -1));
                                var_26 = ((!(-612165659303546336 == 2140861949)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 24;i_15 += 1)
                    {
                        {
                            arr_49 [i_9] [i_9] [i_9] [i_14] [i_9] [22] = (arr_48 [i_9] [i_10] [i_9] [i_15] [i_9]);
                            arr_50 [i_15] [i_10] [i_10] [22] [i_10] [i_9] = (2608977838239483578 && 206);
                            var_27 = ((+((var_5 ? (arr_32 [i_9] [i_9] [i_10 - 1] [i_15]) : (arr_32 [1] [i_10] [i_10 - 2] [5])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
