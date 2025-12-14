/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 1;
        arr_3 [i_0] |= ((((((((var_6 ? var_18 : var_14))) ? var_0 : ((max((arr_0 [i_0]), 1)))))) ? (((13 ? (min(var_13, 1560248219)) : (-38 && 1)))) : (var_2 - var_13)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_12 [i_0 + 1] [i_0] [i_0] [i_0] = (~1);
                        arr_13 [i_0] [i_1] [i_1] [i_2] [i_2] [3] = (((((var_11 == ((1 ? var_10 : (arr_4 [i_1] [i_1])))))) <= 1));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    arr_19 [i_4] [8] [i_4] = ((~(((!((((arr_5 [i_0 + 1] [i_4] [i_5]) ? var_11 : 0))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_20 = ((((1 ? 18446744073709551597 : (arr_11 [i_0 + 1] [12] [12] [i_5] [i_4] [i_0 + 1]))) < -0));
                                var_21 = (((1538936626 ? var_13 : (arr_17 [i_0 + 1] [i_4 - 1] [i_4]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_9;
    #pragma endscop
}
