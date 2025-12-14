/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_0 ? (((((max(var_5, var_9))) ? var_3 : var_0))) : ((((max(var_10, var_1))) ? var_1 : var_6))));
    var_12 = (max(var_12, var_4));
    var_13 += var_0;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_11 [i_0] = var_9;
                    var_14 = (min(var_14, ((((arr_9 [i_0] [2] [i_2]) ? (arr_2 [i_0 + 1] [i_2]) : var_3)))));
                    var_15 = (arr_6 [i_0] [i_0]);
                    var_16 = var_2;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 = (((((((arr_16 [3] [11] [i_0] [i_3] [i_0] [12] [i_4]) & var_8))) ? (((var_4 ? (arr_16 [i_0] [i_0] [i_0] [i_3 - 2] [i_4] [i_4] [i_1]) : (arr_6 [i_1 + 1] [i_2])))) : -12)));
                                var_18 = (min(var_18, (((((((min(var_8, (arr_15 [i_0] [i_0] [i_2] [i_3] [i_0])))) ? (((arr_1 [i_0] [i_0]) ? (arr_2 [i_0] [i_2]) : (arr_15 [11] [i_1] [i_2] [12] [i_4]))) : 536870656))) ? (arr_14 [i_0] [i_1] [i_2] [i_0] [i_4] [i_3] [i_2]) : ((((((arr_0 [i_0] [i_0]) ? var_0 : (arr_7 [4] [i_2])))) ? (((arr_6 [i_4] [i_2]) ? (arr_14 [7] [7] [7] [i_3] [11] [i_3] [i_3 - 1]) : (arr_4 [14] [i_1]))) : (arr_6 [i_0] [i_1])))))));
                                arr_17 [i_0] = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (17 <= 4);
    #pragma endscop
}
