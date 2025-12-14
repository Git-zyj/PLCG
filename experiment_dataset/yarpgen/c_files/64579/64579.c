/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_11 [i_2 - 3] [i_2] [1] [i_4] [i_3] = (arr_10 [i_0] [i_2] [i_1 + 1] [i_3] [i_2] [1] [i_1]);
                                arr_12 [i_3] [i_3] [i_3] [i_3] [16] [i_3] [i_3] |= var_14;
                                var_15 = (min(var_15, (arr_1 [i_4])));
                                var_16 = (max((arr_6 [i_4] [i_2 + 3] [i_2] [i_3]), ((((arr_7 [i_2] [i_2 - 1] [i_2] [i_3]) | (arr_7 [i_0] [i_2 + 3] [16] [i_3]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_19 [i_6] [i_5] [9] [i_2] [i_1] [i_1] [i_0] = (arr_10 [i_0] [1] [i_1] [i_2] [1] [i_1] [3]);
                                arr_20 [i_0] [i_1 - 1] [1] [1] [i_6] [i_6] = ((((-243 ? (((arr_7 [i_2 + 3] [i_1] [i_5] [i_0]) ? var_3 : var_8)) : ((((arr_18 [i_0] [9] [i_0] [1] [13]) & 1))))) != (arr_18 [1] [1] [i_2] [i_5] [i_6])));
                                var_17 = (arr_3 [i_2] [i_1]);
                                arr_21 [i_0] [4] [16] [i_1] [i_1] [i_0] [i_0] = (arr_13 [i_0] [i_1] [i_5 - 2]);
                            }
                        }
                    }
                    var_18 = ((((((((arr_5 [i_1]) ^ (arr_17 [15] [i_1] [i_2]))) & ((~(arr_18 [8] [i_1] [i_1] [i_0] [8])))))) ? ((((arr_15 [i_2] [9] [i_2] [0] [i_1 + 2] [i_0]) & (arr_18 [i_0] [i_0] [i_1] [i_0] [i_1])))) : (((var_2 & 1) ? (max((arr_5 [i_2]), var_10)) : (((arr_7 [i_0] [16] [i_2] [16]) | var_3))))));
                }
            }
        }
    }
    var_19 = var_3;
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 22;i_9 += 1)
            {
                {
                    arr_31 [i_7] = (1 << 0);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 19;i_11 += 1)
                        {
                            {
                                arr_38 [i_7 + 2] [16] [i_7] [7] [i_7] = (arr_27 [i_7]);
                                arr_39 [i_7] [i_7] [i_9 + 1] [i_10] [i_7] = (max(((-7 ? (((65527 ? 1 : 0))) : ((0 ? 925731706 : 63)))), ((min((arr_32 [i_7] [i_8] [i_10] [i_11 + 4] [i_11] [16]), (arr_32 [15] [i_8] [14] [i_11 + 1] [i_11 + 1] [i_11 + 4]))))));
                            }
                        }
                    }
                    var_20 = (max(var_20, (arr_33 [10] [i_7])));
                    arr_40 [i_7 + 1] [i_8] [i_9] [i_7] = ((((((arr_34 [i_7] [1] [i_7] [i_8] [i_7] [i_9 + 1] [i_9 - 1]) ? (((var_9 || (arr_33 [12] [12])))) : (((arr_32 [i_7 + 1] [i_7] [i_8] [i_8] [i_9] [i_9]) ? (arr_25 [i_7]) : (arr_34 [i_7] [i_7] [i_7] [i_9] [i_7] [i_8] [i_7])))))) != ((((arr_23 [16]) ? (arr_28 [i_7]) : 2515161920)))));
                }
            }
        }
    }
    #pragma endscop
}
