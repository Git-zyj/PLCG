/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [i_1] [i_1] = (var_4 && -48406);
                            var_16 = (min(var_16, ((min(var_3, var_12)))));
                            arr_11 [i_0 + 2] [i_1] [i_1] [i_2 + 2] [i_0 + 2] [i_3 + 1] = (min(((((max(var_4, -7638784023251107582))) ? var_9 : -var_5)), (var_12 - var_7)));
                        }
                    }
                }

                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    var_17 = (((max(var_9, (arr_9 [i_4 - 1] [i_4 + 1] [i_4 - 2] [i_4 - 1] [i_4 - 1]))) > (~var_13)));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_19 [i_0 - 1] [i_5] [i_5] [i_5] [i_6] = (arr_2 [i_4 - 1]);
                                arr_20 [i_4 - 1] [i_5] [i_6 - 1] = var_6;
                            }
                        }
                    }
                    var_18 = ((min((min(72, 23846)), (arr_5 [i_0 - 2]))));
                }
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    var_19 = ((((((((arr_18 [i_7] [i_7] [6] [i_7] [i_7]) + 71)) / var_9))) + (((arr_15 [i_0] [i_0] [i_0 + 2]) ? (arr_24 [i_0 + 1]) : (arr_15 [i_0] [i_0] [i_0 - 1])))));
                    var_20 = (max(var_20, (arr_1 [i_1])));
                    arr_25 [i_0 + 1] [i_1] [i_1] [i_7] = var_14;
                }
                var_21 = (183 + 7638784023251107581);
            }
        }
    }
    var_22 = var_3;
    var_23 += var_11;
    #pragma endscop
}
