/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = (max(var_15, (((-(((((arr_1 [i_0] [i_0]) / (arr_1 [14] [i_0]))))))))));
        arr_3 [i_0] [i_0] = ((-17135 || 229085752) >> (((((((arr_0 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))))) - 46)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    {
                        var_16 = (((((((arr_8 [i_0] [i_1] [i_2 - 1] [i_3 - 1]) ? 66 : 34))) ? (((arr_4 [i_1] [i_1] [i_1]) & (arr_7 [i_0] [i_0] [i_0]))) : -120)));

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_17 ^= ((~((64 ? (arr_0 [i_4]) : ((0 / (arr_7 [i_1] [0] [i_4])))))));
                            var_18 += (1 + -27668);
                            var_19 = ((-(arr_12 [i_2 - 3] [i_3 + 1] [i_2 - 1] [i_2 - 1] [i_4])));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {
        arr_16 [i_5] [i_5] = (((arr_13 [i_5 - 2] [i_5 - 2]) - 34));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 16;i_7 += 1)
            {
                {
                    arr_23 [i_5] [4] [i_5] [i_7] |= (arr_21 [i_5] [i_6] [i_5] [i_5]);

                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        var_20 = (min(var_20, 25));
                        arr_27 [i_5 + 2] [i_5 + 2] [i_5 - 1] [i_5 + 2] = (arr_15 [i_7] [i_7]);
                        arr_28 [i_5 + 2] [i_5] [5] [5] [i_5] = -37;
                        arr_29 [13] [13] [10] [i_6] [10] [i_8 - 2] = -73;
                    }
                    var_21 = (((((arr_26 [i_5] [i_6] [i_7]) ? 255 : 1864106635)) - -54));
                }
            }
        }
    }
    var_22 |= (((~-17139) ? var_12 : var_9));
    #pragma endscop
}
