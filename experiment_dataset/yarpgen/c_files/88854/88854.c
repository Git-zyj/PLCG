/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, -242));
    var_18 = (var_9 / var_6);
    var_19 = (max((((242 ? 242 : 14))), var_16));
    var_20 = ((1561330395 ? 2733636906 : -119283546276080301));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0 + 1] = (((arr_0 [i_0 - 1] [i_0 - 1]) / (~1)));
        var_21 ^= 264442807;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_22 ^= ((4286 ? var_12 : 1561330418));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    var_23 = ((max(511, -691730135)));
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_24 = ((~(arr_15 [i_2])));
                                var_25 = (min((((!((min(-1, (arr_9 [i_1] [i_2] [i_1]))))))), (max(242, 1))));
                                arr_16 [i_1] [i_4] [i_3] [i_4] [i_4] [i_4 - 1] = ((-(((!691730136) | (~var_11)))));
                                arr_17 [i_1] [10] [i_3] [7] [i_3] |= ((~(max((var_2 / 96054018), (arr_14 [i_4 - 1] [i_4 + 1] [i_4 - 2] [i_4] [i_4 - 2] [i_4] [i_4 + 1])))));
                            }
                        }
                    }
                    var_26 = ((!((max((~var_3), var_11)))));
                }
            }
        }
        arr_18 [i_1] [i_1] = (max(30, 543165792));
    }
    for (int i_6 = 3; i_6 < 21;i_6 += 1)
    {
        arr_22 [i_6 + 3] = -1;
        var_27 = ((-((var_11 & (max(691730135, var_10))))));
        var_28 = (arr_20 [i_6 + 4] [3]);
    }
    #pragma endscop
}
