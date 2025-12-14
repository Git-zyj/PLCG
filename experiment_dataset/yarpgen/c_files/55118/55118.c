/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((-1697778019 ? var_2 : -1697778019)), ((((var_2 ? 2147483638 : 4360)) + -var_12))));
    var_14 = (((max(-1834786226, var_11)) / ((-var_0 ? -2147483638 : var_3))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [2] [i_2] [i_1] [i_2] [i_2] [2] = ((var_10 ? (((!(((arr_9 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3 - 1]) >= (arr_11 [i_0] [i_2] [i_3])))))) : (((((-3850 ? 2147483638 : var_1)) <= ((((arr_2 [i_0] [i_1]) > -16310))))))));
                        arr_13 [i_1] [i_1] &= var_4;
                    }
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_2] = (((max(var_3, ((16309 + (arr_16 [i_0] [i_1] [i_2] [i_4]))))) * ((2047 * (arr_14 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_2])))));
                        arr_18 [i_0] [i_4 + 2] [i_2] [i_4] [i_2] [i_4] = max((max((arr_5 [i_4 + 2] [i_2]), -6320460984314619267)), (70 % -68));
                        var_15 = (((arr_14 [i_4] [1] [1] [i_4 - 1] [i_2]) > (arr_8 [i_0] [i_2] [i_4 - 1])));
                    }
                    var_16 = var_8;

                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            arr_24 [i_0] [i_1] [i_0] [6] [i_0] [i_2] = ((((((arr_0 [i_5] [i_1]) - var_0))) && var_7));
                            var_17 = (max((arr_5 [i_0] [i_0]), (arr_4 [i_5] [i_6])));
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_18 = (max((max((max(var_9, var_0)), (arr_22 [i_7] [i_5] [i_2] [8] [i_0]))), (arr_20 [i_0] [16] [i_1] [16] [1] [i_7])));
                            var_19 = -var_10;
                            var_20 &= max(2622506076801341970, ((max(-22347, 32767))));
                        }
                        var_21 = var_5;
                        arr_27 [i_2] [i_2] [i_0] [i_2] = (arr_22 [i_0] [i_0] [i_1] [i_2] [i_5]);
                        var_22 = var_5;
                        var_23 = (min(var_23, (arr_26 [i_0] [i_2] [i_0])));
                    }
                }
            }
        }
        var_24 = ((((max(((var_0 ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (arr_20 [i_0] [i_0] [i_0] [i_0] [13] [16]))), 3145728))) ? ((((arr_22 [i_0] [i_0] [i_0] [i_0] [10]) > -9612))) : (arr_5 [i_0] [i_0])));
    }
    #pragma endscop
}
