/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (max(var_16, var_16));
    var_18 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_2] [i_2] = (arr_3 [i_0] [i_0 - 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, (((((max((arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) << (((arr_15 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1]) - 9412)))))));
                                var_20 = (min(var_20, ((min(((((arr_13 [i_4] [i_3] [i_3] [i_3] [i_2] [i_0 - 1]) < var_6))), (min((arr_13 [i_4] [i_4] [i_4] [i_4] [i_4] [i_0 - 1]), (arr_13 [i_4] [i_4] [i_3] [i_1] [i_1] [i_0 - 1]))))))));
                            }
                        }
                    }
                    arr_18 [i_0] [i_0] = (((((arr_3 [i_0] [i_0 - 1]) ? (arr_5 [i_0]) : (arr_3 [i_0] [i_0 - 1]))) <= (((max((arr_6 [i_0 - 1]), (arr_6 [i_0 - 1])))))));
                    var_21 = var_12;
                    var_22 |= (arr_5 [10]);
                }
            }
        }
    }
    var_23 = var_0;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                var_24 = (min((arr_23 [i_5]), 78));
                var_25 = ((((min(-78, (arr_19 [i_5])))) ? 78 : (((arr_22 [i_6] [i_5] [i_5]) ? (arr_22 [i_5] [i_6] [i_6]) : (arr_22 [i_5] [i_6] [i_6])))));
                var_26 = var_7;
            }
        }
    }
    #pragma endscop
}
