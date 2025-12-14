/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    var_18 = min(((((var_13 ? var_5 : var_14)) & (((var_5 ? var_2 : var_0))))), (var_16 - var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = (min(((((-(arr_2 [i_0]))))), (min((arr_3 [i_1] [i_1] [i_0]), (arr_0 [i_0] [i_1])))));
                var_20 = ((((((var_1 & (arr_2 [i_0])))) ? var_8 : ((((arr_1 [i_0]) == 66060288))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] [i_3] [i_2] = (min((min((((arr_0 [i_0] [10]) & var_1)), (min(var_2, (arr_11 [17] [17] [i_3] [i_3] [i_3]))))), ((min((arr_11 [i_0] [i_1] [i_1] [i_3] [i_0]), 2147483647)))));
                                var_21 = (min((min(-1, (min(var_5, var_10)))), ((min((-23 || -20), var_8)))));
                                var_22 += ((!((((arr_9 [4] [1] [i_0] [i_1] [i_2 - 1] [i_4 - 2]) ? var_14 : (arr_9 [i_2 - 2] [i_2 - 2] [i_4 - 3] [i_1] [22] [1]))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_23 = (max(((var_0 ? (arr_6 [i_0] [i_6] [8]) : (arr_16 [i_1] [i_1] [i_1] [i_1]))), ((max((arr_14 [i_0] [i_1] [i_5] [i_6]), (max(255, 0)))))));
                            var_24 = ((min(var_12, (arr_2 [i_0]))));
                        }
                    }
                }
            }
        }
    }
    var_25 |= var_2;
    var_26 &= (min((((((48 ? 147 : 0))) ? 5596684921418916653 : var_14)), ((((var_7 ? 70351564308480 : var_7)) / var_3))));
    #pragma endscop
}
