/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-116 + var_1);
    var_12 = 32717;
    var_13 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_2] = (max((arr_0 [i_2]), ((1629189215325399155 ? 1770377404 : (arr_0 [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, (max((min((arr_2 [i_0] [i_0] [i_3 - 1]), (arr_2 [i_0] [i_1] [i_3 + 1]))), (((-116 ? 17064 : (arr_9 [i_4] [i_3 - 1] [i_2] [i_2] [i_4] [i_2]))))))));
                                var_15 = var_0;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_16 ^= ((~-2147483638) ? ((-96 ? var_9 : -688415046)) : (arr_8 [i_0] [i_0] [i_0] [i_0]));
                        arr_16 [i_2] [12] = ((255 ^ (arr_13 [i_0] [3] [1] [i_5])));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_17 = var_9;
                        var_18 = ((17072 - ((-(arr_8 [i_0] [i_1] [i_0] [i_6])))));
                    }
                    arr_20 [i_2] = (min((min((arr_2 [i_0] [6] [16]), (arr_2 [i_0] [i_1] [i_2]))), ((18446744073709551602 ? (arr_14 [i_0] [i_1] [i_0] [i_2]) : (arr_14 [i_0] [i_0] [i_0] [i_0])))));
                    var_19 = (arr_10 [14] [i_1] [14] [i_1] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
