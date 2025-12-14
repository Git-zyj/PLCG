/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((1 ? var_10 : var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((max(((((((arr_1 [i_0] [i_0]) ? var_9 : (arr_4 [i_0] [i_1] [i_0])))) ? 1 : 1)), (((!(((~(arr_3 [3] [i_1] [6]))))))))))));
                arr_6 [i_1] = (((((max(65521, 1)))) ? 0 : ((~(((arr_1 [i_0] [i_0]) ? (arr_3 [i_0] [i_0] [i_0]) : 13687425485727431045))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] = (((((((((arr_5 [i_2] [i_2]) ? 1 : (arr_9 [i_2] [i_2] [i_4])))) ? ((max((arr_12 [i_0] [i_0] [i_2] [i_3 - 3]), var_18))) : ((87 ? var_16 : 1))))) ? ((min((arr_11 [i_0] [i_2]), (min((arr_13 [i_0] [i_1] [i_0] [i_3] [i_4] [i_0] [i_4]), 14))))) : ((-(min((arr_3 [i_3] [i_1] [i_3]), 1))))));
                                var_21 = -0;
                                var_22 = (((((!(arr_13 [i_0] [i_0] [i_3] [i_0] [i_2] [i_3 - 1] [i_1])))) >> (((min((max(-111, 2987705514)), (arr_4 [i_1] [i_3 - 2] [i_2]))) - 2264944755))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (max(var_5, (((min(0, 1)) ? (max(var_16, var_12)) : (((var_14 ? 1 : 27935)))))));
    #pragma endscop
}
