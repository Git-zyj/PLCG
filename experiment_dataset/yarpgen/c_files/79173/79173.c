/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [7] = var_9;
        arr_3 [1] [i_0] = (arr_0 [2]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] [6] = (3215858140174232537 / -1946150213115288602);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_4] [6] [1] = (((((((arr_0 [i_0]) && (arr_11 [i_0] [i_0] [i_0] [i_3] [i_4 + 1]))))) + (arr_4 [i_0] [i_0] [3])));
                                arr_16 [i_0] [5] [i_2] [i_4] [8] [i_4 - 1] = (max(var_14, (!12582912)));
                                arr_17 [i_0] [i_3] [i_2] [i_1] [i_0] = (!1);
                            }
                        }
                    }
                    arr_18 [1] = 3226188276;
                }
            }
        }
        arr_19 [i_0] = ((7 ? -33 : 106));
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 18;i_6 += 1)
        {
            {
                arr_28 [i_6] [i_6] = 1416416643;
                arr_29 [i_5] [i_5] = (arr_21 [i_6] [i_5]);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {
                            arr_37 [i_5] [i_6] [i_5] [i_5] [i_6] = 244;
                            arr_38 [i_8] [i_8] [i_8] [i_5] = 67108863;
                        }
                    }
                }
            }
        }
    }
    var_17 = 24;
    #pragma endscop
}
