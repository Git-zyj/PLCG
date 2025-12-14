/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= ((((((var_11 ? var_13 : var_11))) ? var_5 : var_1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_20 = (arr_4 [i_2] [15]);
                    arr_10 [i_1] [i_0] [i_1] [i_2] |= (~222917268);
                    var_21 = (max(((((min(var_12, (arr_7 [i_0] [i_1] [i_0])))) ? (min(2667461186, 8284266827104532959)) : (((max(var_1, var_13)))))), (arr_6 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 = (((((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_15 : var_3))));
                                var_23 = (((arr_11 [i_3 - 1] [i_3 - 1] [18]) ? (min((arr_11 [i_3 - 1] [i_1] [i_2]), var_15)) : ((var_18 ? (arr_11 [i_3 - 1] [i_3 - 1] [i_2]) : (arr_11 [i_3 - 1] [i_1] [i_2])))));
                                arr_15 [i_0] [i_0] = (((arr_5 [i_0]) - (127 | 746675163)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 |= (((!(((var_9 ? var_12 : var_1))))));
    #pragma endscop
}
