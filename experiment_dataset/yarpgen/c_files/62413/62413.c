/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_7, (-1862852917261084929 != var_5)));
    var_18 = (((((max(1558637230193773469, var_15))) ? (min(2263179820686237718, var_3)) : (((var_9 ? var_7 : var_8))))));
    var_19 = (((var_14 >= var_16) ? var_12 : (min((max(1133185283, var_8)), (min(var_10, 0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = 16183564253023313898;
                                arr_14 [i_2] [i_4] [i_2] [i_2] [i_1] [i_0] [i_2] = var_8;
                                arr_15 [9] [i_2] [8] [i_2] [9] [i_2] [i_0] = ((var_7 ? (((arr_7 [i_0] [i_1] [i_3] [i_4]) ? (arr_7 [i_0] [i_1] [i_2] [i_3]) : (arr_7 [i_0] [i_1] [i_2] [i_4]))) : var_7));
                            }
                        }
                    }
                }
                var_21 = (max(((60812652921736598 ? var_10 : (((max(1, (arr_0 [3]))))))), 17));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_22 [i_0] [i_0] [1] [i_6] [i_6] [10] = var_3;
                            var_22 -= (max((arr_18 [i_0] [i_5 - 2] [5] [i_6]), var_1));
                            var_23 = var_12;
                            var_24 = (max((((127 ? 83 : (arr_11 [i_0] [i_1] [i_1] [i_5 + 2] [7])))), ((min(var_12, (arr_0 [i_5 - 1]))))));
                        }
                    }
                }
            }
        }
    }
    var_25 = var_1;
    #pragma endscop
}
