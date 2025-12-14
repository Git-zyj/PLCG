/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-(max(14356, var_3))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = (((~(arr_3 [i_1] [i_1]))));
                var_14 *= (+((+((((arr_3 [6] [i_1]) && (arr_2 [i_0] [i_0])))))));
                arr_4 [i_1] [i_0] [i_0] = 51174;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_15 = var_7;
                                arr_16 [i_2] [i_2] [i_4] = var_1;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_22 [i_2] [i_8] [2] [i_7] [i_4] = (((((((((arr_21 [i_3] [i_3] [i_3] [i_3] [i_3]) * (arr_7 [i_8])))) ? (max(var_8, var_0)) : var_8))) ? var_7 : (((!(((-(arr_17 [i_8] [i_7] [8] [8])))))))));
                                var_16 = (((min(var_4, (arr_12 [i_2] [i_3] [i_4] [i_2] [i_3])))) ? (arr_11 [i_2] [10]) : (((!var_1) ? (arr_11 [i_2] [i_8]) : (arr_6 [i_2]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
