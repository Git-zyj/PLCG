/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [11] = var_16;

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_20 -= (((238 || (arr_1 [i_1]))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] [15] = ((-(((((!(arr_4 [8] [i_1])))) / (arr_0 [i_1])))));
                            arr_14 [i_0] [i_3] [i_0] [i_0] = var_9;
                        }
                    }
                }
            }
            var_21 = arr_5 [i_1] [i_0] [17];
            arr_15 [i_0] [i_0] [i_0] = (min(9223372036854775807, (179 & -61)));
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            arr_18 [i_5] = 8527062938123656907;
            arr_19 [i_0] [3] [i_5] = 0;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            arr_22 [i_0] [i_0] = (~var_0);
            var_22 = 157;
        }
    }
    var_23 = (!-61);
    var_24 = (max(((var_19 ? 681014592248535173 : var_18)), ((max(var_9, var_7)))));
    #pragma endscop
}
