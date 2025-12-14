/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_16 = (arr_0 [i_0]);
        arr_2 [i_0] = var_14;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [19] = (((arr_8 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_0]) ? (arr_4 [i_0 + 1] [i_0 - 2]) : var_6));
                    arr_10 [i_0 - 2] [i_1 - 1] [i_0] = var_10;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0 - 2] [i_0] [i_5] [i_0] = (((arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0]) ? 10373690675425314029 : (arr_14 [i_0])));
                                var_17 = var_5;
                                arr_20 [i_0] [19] [i_5] [i_5] = var_10;
                            }
                        }
                    }
                    arr_21 [i_4 + 1] [i_0] [i_0] [i_0] = -var_12;
                    var_18 = arr_11 [4] [i_0];
                    arr_22 [i_0] [i_0] [i_3] [i_0] = (-580305458 & -1392012190);
                }
            }
        }
        arr_23 [i_0] = (arr_6 [i_0 - 1]);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_26 [i_7] [i_7] = var_2;
        var_19 = var_14;
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_20 = min(756150, 252);
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 22;i_10 += 1)
            {
                {
                    arr_34 [i_8] [i_8] [i_10] = 95;
                    arr_35 [i_8] [i_8] [i_10 - 1] = (min(((min((arr_32 [i_10 - 1] [i_8] [i_10 + 1]), (arr_32 [i_10 - 1] [i_8] [i_10 + 1])))), (((arr_32 [i_10 + 1] [i_8] [i_10 - 1]) % (arr_32 [i_10 + 1] [i_8] [i_10 + 1])))));
                }
            }
        }
    }
    var_21 = var_3;
    #pragma endscop
}
