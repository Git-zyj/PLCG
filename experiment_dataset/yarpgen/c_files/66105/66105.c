/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!(((!var_5) && ((max(var_2, -2096722933)))))));
    var_15 = ((var_3 ? var_4 : (((((max(var_3, var_4))) ? var_8 : var_7)))));
    var_16 = (max((((((max(var_5, var_10))) < ((15196 ? var_13 : var_0))))), (min((max(var_4, var_9)), var_1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = var_8;

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_17 = -var_10;

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            arr_14 [i_0] [i_1 - 1] [i_2] [i_3] [i_4] = -var_12;
                            var_18 = (((arr_11 [i_1 + 3] [i_1 + 2] [i_1] [i_3] [i_4] [i_4]) ? (arr_13 [i_1 + 3] [i_1 + 2] [i_3] [i_3] [i_3] [i_4] [i_4]) : (arr_13 [i_1 + 3] [i_1 + 2] [i_3] [i_4] [i_4] [i_4] [i_4])));
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        arr_18 [i_5] [i_5] = arr_2 [i_0];
                        arr_19 [i_5] = -var_1;
                        arr_20 [i_5] [i_2] [i_1 + 1] [i_1] [i_5] = (arr_5 [i_0] [i_1 + 1] [i_1] [i_1 + 3]);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        arr_25 [i_0] [i_1] = (!var_10);
                        arr_26 [i_0] [i_0] [i_2] [i_6] [i_0] [i_6] = ((var_8 << (((arr_21 [i_0] [i_1 - 1]) - 24))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
