/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_12, 3130171855046470345));
                                arr_11 [i_0] [i_0] [i_2] [i_3] [i_4] = arr_6 [i_0] [i_1] [8] [i_2 + 1] [1] [i_4];
                                arr_12 [i_0] [i_0] [i_2 + 1] [i_2 + 1] [i_4] = (max(((max(var_1, 1370531587))), (min((arr_8 [i_3 - 3] [1] [i_0] [i_4]), -1))));
                                arr_13 [i_0] [i_1] [i_1] [i_2 + 1] [i_3] [i_0] [i_4] = (max((1 - var_4), var_6));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_22 [i_0] = (245 ? -var_0 : var_0);
                                arr_23 [i_0] [i_1] [i_5] [i_6] [i_7] [i_1] |= ((var_9 | (max((var_4 < -11), (min(4, 233))))));
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_8 = 1; i_8 < 11;i_8 += 1)
    {
        arr_27 [i_8] = ((var_10 + (arr_18 [i_8 - 1] [i_8])));
        var_13 = -17;
    }
    var_14 = (((((max(16, var_0))) ? 61398 : 12931847878321005891)));
    var_15 = 1;
    #pragma endscop
}
