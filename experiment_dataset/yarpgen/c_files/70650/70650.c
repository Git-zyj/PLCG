/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [4] &= ((((var_3 ? (arr_2 [i_0] [i_1 - 3]) : (arr_0 [0]))) | (((arr_4 [i_1 + 1] [i_1 + 1] [i_1]) ? var_5 : (arr_4 [i_1 - 3] [i_1 + 1] [i_1])))));
                var_12 = ((var_2 + ((min((arr_3 [i_0]), (arr_2 [i_0] [i_0]))))));
                arr_6 [i_0] [i_1] = arr_4 [i_1] [i_1 + 1] [i_0];
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_3] = (arr_3 [i_0]);

                            for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                            {
                                var_13 = (((((((min(var_4, var_0))) / (arr_14 [i_0] [i_0] [i_1 - 2] [i_2 + 1] [i_3] [i_3 - 2] [i_4])))) ? ((min(var_6, (arr_4 [i_3 - 1] [i_2 - 3] [i_1 - 2])))) : ((min(var_2, 29537)))));
                                var_14 = (((((-(arr_17 [i_2])))) * (((63571 / (arr_10 [i_0] [i_2]))))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((((arr_12 [i_1 + 2] [i_0] [i_3 - 3] [i_4]) ? 63488 : 18554))) && 52679)) ? 65527 : (((arr_11 [i_2] [i_2 - 4] [i_2 + 2] [i_2]) / (arr_11 [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_2])))));
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (min((((arr_12 [i_1 - 2] [i_0] [i_3 + 1] [i_4]) ? (arr_12 [i_1 - 2] [i_0] [i_3 - 4] [i_3 + 1]) : (arr_12 [i_1 - 2] [i_0] [i_3 + 1] [i_4]))), var_1));
                            }
                            for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                            {
                                var_15 |= var_9;
                                arr_22 [i_0] [i_1 - 2] [i_3] [i_0] = (((((var_2 ? -var_1 : var_5))) ? (((arr_11 [i_2 - 1] [i_1 - 1] [i_2] [i_3 - 1]) + 65526)) : 16));
                            }
                        }
                    }
                }
                var_16 -= ((!(arr_17 [10])));
            }
        }
    }
    var_17 = ((~((var_3 << (var_5 - 16826)))));
    #pragma endscop
}
