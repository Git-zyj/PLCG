/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (arr_2 [i_0] [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, (1 * 126)));
                                arr_13 [i_0] [i_0] [i_0] [i_2] [i_3] [i_0] [i_4] = ((~(arr_6 [i_0] [i_2 + 3] [i_0])));
                                var_19 |= -100;
                                arr_14 [i_0] = (((((min(65535, 1))) && -var_9)));
                                arr_15 [i_0] [i_0] [i_0] [1] [i_4] = ((max(65535, ((var_11 ? var_9 : (arr_12 [i_0] [i_1] [i_0]))))) >= ((2147483630 ? (arr_10 [12] [i_0] [i_2 + 3] [i_0] [i_1 + 1]) : (((arr_2 [i_2] [8]) ? var_13 : (arr_10 [0] [i_1] [i_2] [i_0] [i_4]))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_22 [i_0] [i_5] [i_7] = var_4;
                                arr_23 [i_0] [i_1] [i_5] [13] [i_6] [i_0] [i_7] = (max(114, 39667));
                                arr_24 [i_6 - 1] [i_0] [i_0] [i_0] = ((~(1 ^ var_14)));
                                arr_25 [i_7] [i_0] [1] [i_0] [i_0] = (~41701);
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 &= ((((1 ? var_10 : var_12)) | var_6));
    var_21 = ((1 ? 1 : ((var_10 ? 1 : 248))));
    var_22 = var_5;
    #pragma endscop
}
