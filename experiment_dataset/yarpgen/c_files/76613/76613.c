/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [1] [i_1] [i_0] = var_9;
                    arr_7 [i_0] = var_10;
                    arr_8 [i_0] [i_1] = var_6;
                }
            }
        }
        arr_9 [i_0] = var_10;
        arr_10 [i_0] = var_9;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    arr_21 [i_5] [i_5] [i_5] |= var_3;
                    arr_22 [i_3] [i_3] [18] [i_5] = var_1;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_27 [i_3] [i_3] [i_5] [i_6] [i_7] = var_1;
                                arr_28 [20] [i_5] [i_6] [4] [i_5] [i_3] = var_2;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                arr_35 [i_3] [i_4] [i_3] [i_8] [12] [i_8] [i_3] = var_3;
                                arr_36 [i_9] [i_3] [22] [i_3] [22] = var_7;
                                arr_37 [i_5] = var_6;
                            }
                        }
                    }
                }
            }
        }
        arr_38 [i_3] = var_6;
        arr_39 [0] &= var_9;
        arr_40 [i_3] [20] = var_8;
    }
    var_11 |= var_3;
    var_12 = var_6;
    var_13 = var_3;
    #pragma endscop
}
