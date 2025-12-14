/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 6;i_1 += 1)
        {
            {
                var_14 = ((-(max((((arr_3 [i_0] [i_1]) - 1)), (max((arr_2 [i_0] [i_1]), 0))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_15 = ((var_1 + (arr_1 [i_1])));
                                var_16 = (arr_12 [i_2 - 2] [i_2] [i_2] [i_2]);
                                var_17 = (((((var_5 ? (arr_1 [i_4 - 2]) : var_5))) ? ((max((arr_7 [i_0] [5] [i_0] [i_0]), 57053))) : ((52473 ? var_11 : var_2))));
                                var_18 |= (((!((((arr_2 [i_0] [5]) ? (arr_6 [1] [i_2] [i_0]) : (arr_1 [6])))))));
                                var_19 = ((55047 ? (((((-(arr_4 [i_2] [i_1 + 3])))) ? (arr_12 [i_0] [i_0] [i_3] [i_4]) : (arr_7 [i_0] [i_2 - 2] [i_1 - 3] [i_2 - 2]))) : ((min(1, 10472)))));
                            }
                        }
                    }
                }
                var_20 -= (((arr_12 [i_0] [i_1 - 4] [i_1] [i_0]) ? ((((arr_12 [i_1 - 4] [i_1 - 4] [i_0] [i_1 + 1]) || (arr_12 [i_0] [i_1 - 4] [i_1 - 3] [i_0])))) : (((arr_12 [i_0] [i_1 - 4] [i_0] [i_0]) ? (arr_12 [i_0] [i_1 - 4] [i_0] [1]) : 17001))));
            }
        }
    }
    var_21 = ((1 & 55039) ? (max((var_3 | var_13), (-797305989365814160 ^ -106))) : ((((max(var_0, var_1))))));
    var_22 = ((0 ? 10489 : (var_9 - var_13)));
    #pragma endscop
}
