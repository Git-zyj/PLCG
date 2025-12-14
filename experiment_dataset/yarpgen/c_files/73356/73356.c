/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_18 = 0;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_8 [i_1] [i_0] [i_0] [i_0 + 1] = ((-(min(var_0, (~-5209028420397044915)))));
                        arr_9 [i_0] [i_0] [i_2 - 3] [i_2 - 1] = ((((min(((max(var_0, var_15))), (min((arr_6 [i_0] [i_1] [i_2] [i_2]), (arr_5 [i_0 - 1] [i_1] [i_1] [i_3 + 1])))))) && ((((arr_4 [i_0] [i_0] [i_0]) ? (arr_4 [i_3] [6] [i_0]) : (arr_4 [i_0] [i_1] [i_0]))))));
                        arr_10 [i_0] [i_0 + 1] [i_2] [i_1] [i_0] = ((~(((!((((arr_1 [i_1] [i_1]) - 3584))))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_19 = (max(var_19, ((((arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? ((78 / (arr_16 [i_0] [i_6] [i_5] [i_6]))) : (arr_15 [i_6] [i_6]))))));
                            arr_23 [i_0] [i_6] [i_0] [i_5] [i_0] [i_0 + 1] [i_0] = (arr_20 [i_0] [i_4] [i_6] [i_6] [i_7] [i_7] [i_7]);
                            arr_24 [i_0] [i_4 + 1] [i_4] [i_4 - 2] [i_4] [i_4] = 0;
                        }
                        var_20 = (min((max(var_9, (arr_21 [i_4 + 1] [i_4 + 2] [i_4 + 1] [i_4 - 3] [i_0 - 1] [i_5 + 1] [i_4]))), (((arr_21 [i_0] [i_0] [i_5 + 1] [i_4 + 2] [i_0 + 1] [i_5 + 1] [i_0]) - (arr_21 [i_0] [i_4] [i_5] [i_4 + 2] [i_0 + 1] [i_5 + 1] [i_0 + 1])))));
                    }
                    var_21 = var_8;
                    arr_25 [i_4] [i_0] [i_5] = 0;
                }
            }
        }
    }
    var_22 = (min(var_22, (((!(((((max(var_12, var_13))) ? ((min(var_8, var_16))) : ((41565 ? var_3 : var_15))))))))));
    #pragma endscop
}
