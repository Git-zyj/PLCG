/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= 196;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [8] [i_4] [i_0] [i_0] = var_2;
                                arr_13 [i_0] [9] [i_3] [i_0] = ((((max(var_0, var_9))) ? 196 : ((min(2752, -2754)))));
                                var_11 = (var_4 * var_0);
                                var_12 = ((!((max(2754, var_0)))));
                            }
                        }
                    }
                    var_13 = (min(var_13, ((var_7 ? (max(var_8, 524032)) : ((2761 ? 1763289880 : var_3))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_1] [i_2] [i_5] [i_5] [i_0] = var_1;
                                arr_20 [0] [i_1] [i_2] [i_5] [i_6] = (max(1103876265, -2759));
                            }
                        }
                    }
                    arr_21 [i_0] [i_1] [i_2] [i_2] = (~var_6);
                }
            }
        }
    }
    #pragma endscop
}
