/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, ((((arr_7 [i_3] [i_0 + 4] [i_1 + 1] [i_3]) ? var_11 : 1)))));
                            arr_9 [i_2] [i_2] [i_2] [i_3] [i_3] &= var_7;
                            arr_10 [i_0] [i_1] [i_2] [i_3] = (((min(2828, 1))) ? ((max((-127 - 1), ((var_8 ? (arr_8 [i_0] [i_1]) : 1))))) : (arr_6 [i_3] [7] [i_1 - 1]));
                            arr_11 [i_2] [i_1] [i_2] = (!(((-(max((arr_3 [i_0] [i_3]), 89))))));
                            arr_12 [i_1] [i_1] [i_2] [i_1] [i_0] = (arr_0 [12]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_14 -= (min((max((arr_8 [i_0 + 3] [i_1 - 1]), (arr_2 [i_0 - 1] [i_1 - 1]))), (((3103400015817339629 ? 1 : 1)))));
                            arr_17 [i_0] [i_1] [i_4] [i_4] [i_5] = arr_4 [i_4] [i_0] [i_4] [i_5];
                        }
                    }
                }
            }
        }
    }
    var_15 = (min(var_3, (min(var_10, ((var_2 ? 1 : var_3))))));
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            {
                arr_23 [7] = var_9;
                arr_24 [i_6 + 1] = ((-((-((4132298080 ? var_2 : var_1))))));
                arr_25 [i_6] [i_7] = arr_22 [i_7];
            }
        }
    }
    var_16 = max((((!var_4) ? var_12 : var_0)), (((((var_8 ? var_0 : -2692076794756255844))) ? ((var_7 ? var_1 : 4366480434336948282)) : var_10)));
    var_17 = (min(1, 1));
    #pragma endscop
}
