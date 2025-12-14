/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = (max(var_11, ((((((~var_1) / var_1)) ^ ((min((arr_4 [2] [i_1 - 2] [2]), var_8))))))));
                var_12 |= ((((((3354137815 ? (arr_0 [i_0 + 1] [i_0 + 2]) : 72169720)))) == (72169720 >= var_5)));
                var_13 = (min((arr_1 [i_0 - 1]), ((var_10 ? var_1 : (arr_4 [i_0 - 2] [i_1] [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                arr_11 [i_3] [i_3] &= ((-((((72169716 ? (arr_6 [i_3]) : (arr_1 [9]))) - ((min((arr_3 [i_2] [i_3] [i_3]), var_2)))))));
                var_14 = (max(var_14, (~72169703)));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_15 = min(-75, (arr_12 [i_2] [i_3] [i_4] [i_5]));
                            var_16 = (min(-4222797580, -var_6));

                            for (int i_6 = 2; i_6 < 13;i_6 += 1)
                            {
                                var_17 = ((min(var_10, (min(var_2, var_6)))));
                                var_18 = (min((((!(!13768033645236956593)))), ((var_6 / ((72169715 ? 569127628 : var_9))))));
                            }
                            for (int i_7 = 0; i_7 < 1;i_7 += 1)
                            {
                                arr_22 [i_2] [i_3] [15] = var_10;
                                arr_23 [11] [7] [i_4] [11] [i_7] [i_2] = ((!((min((arr_16 [i_2] [i_2] [i_5] [i_5]), (var_6 & var_3))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = 22;
    var_20 = ((var_9 ? (~var_1) : ((var_6 ? 1 : var_6))));
    #pragma endscop
}
