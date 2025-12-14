/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!0);
    var_21 = 3;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_4 [i_0] [i_1] [i_0] = 1;
            arr_5 [i_0] [i_0] [i_1] = (arr_2 [i_0 + 4] [i_0] [i_1]);
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_9 [6] [i_0] [i_2] = var_10;
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [i_0] [i_3] [i_4] [i_5] = (((arr_13 [i_0 + 4] [i_3 + 1]) | (arr_13 [i_0 + 3] [i_3 - 2])));
                            arr_19 [i_0] [i_2] [i_3] [i_4] [i_3] [i_5] [i_4] = -var_10;
                            arr_20 [i_0] [i_0] [i_3 + 1] [i_5] = -9;
                        }
                    }
                }
            }

            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            arr_29 [i_0] [i_7] [i_6] [i_2] [i_2] [i_0] = (((((min(var_19, -32104)))) ? (!14764) : var_7));
                            arr_30 [i_8] [i_7] [i_6] [i_7] [i_0] = ((var_7 / (min(var_4, 5199))));
                        }
                    }
                }
                arr_31 [i_0] [i_0] [i_6] = var_7;
                arr_32 [i_0] [i_6] [i_6] &= (arr_22 [i_0] [i_0 - 1] [i_6]);
            }
        }
        /* vectorizable */
        for (int i_9 = 1; i_9 < 14;i_9 += 1)
        {
            arr_35 [i_0] [i_9] [i_9] = (14764 / var_2);
            arr_36 [14] [i_9] &= ((!(((var_18 ? (arr_10 [i_0] [i_9 - 1] [i_9] [i_9]) : -10744)))));
            arr_37 [i_0] [i_9] [i_0] = 15;
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    {
                        arr_45 [i_11] [i_10] [i_11] [i_11] [i_9 + 2] [i_0] |= (14764 / (arr_27 [i_0 + 1] [i_9] [i_11] [i_10] [i_11]));

                        for (int i_12 = 4; i_12 < 15;i_12 += 1)
                        {
                            arr_49 [i_10] [i_9] [i_10] [i_10 - 1] [i_0] [i_0] [i_0 + 1] = (arr_2 [i_11] [i_9 - 1] [i_10 + 3]);
                            arr_50 [i_0] [i_9] [i_0] [i_10] [i_11] [i_12] = (arr_0 [i_0] [i_12]);
                        }
                        arr_51 [i_0] [i_0] [i_0] [i_0] = (arr_15 [i_0] [i_11] [i_10 + 2] [i_9] [i_0 + 1] [i_0]);
                    }
                }
            }
        }
        arr_52 [i_0] = ((-(var_4 || 1)));
        arr_53 [i_0] [i_0] = (arr_38 [i_0] [i_0 + 4]);
        arr_54 [i_0] = (arr_24 [i_0] [i_0] [i_0]);
    }
    var_22 = var_2;
    #pragma endscop
}
