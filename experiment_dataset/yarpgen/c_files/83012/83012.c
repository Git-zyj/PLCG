/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 = (((((arr_8 [i_0]) - (arr_8 [i_2])))) ? (((((arr_2 [i_0]) ? (arr_6 [i_0]) : (arr_2 [i_0]))) >> (((arr_0 [i_0]) - 6791085101280322468)))) : (((((arr_1 [i_1]) > (arr_0 [i_0]))) ? (arr_2 [i_1 + 1]) : ((((arr_8 [i_0]) != (arr_1 [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 = arr_13 [i_4];
                                var_13 = (arr_3 [i_0] [i_0]);
                                var_14 = (((((((((arr_3 [i_2] [i_3]) ? (arr_8 [i_1]) : (arr_7 [i_2] [i_3] [i_4])))) ? (((((arr_1 [8]) || (arr_13 [i_4]))))) : (((arr_0 [i_0]) ? (arr_12 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0]) : (arr_3 [i_0] [i_1])))))) ? (arr_12 [i_4] [i_3 + 2] [i_1 - 3] [i_0] [i_0 + 1]) : ((3803820133 ? (arr_11 [i_0 + 1] [i_0 + 1]) : (arr_10 [i_3 - 1] [i_1 + 2] [i_0 + 1] [i_0])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_23 [5] [i_0] [5] [i_2] [i_5] [5] = (((((min((arr_0 [i_0]), (arr_9 [i_0 + 1] [i_1 - 3] [i_2] [i_5] [i_6] [i_5 + 1]))) >= (arr_15 [i_0] [i_1 - 1] [i_5 - 1] [i_0 + 1] [i_6] [i_6]))) ? ((max((arr_11 [i_0 + 1] [i_0 + 1]), (arr_11 [i_0 + 1] [i_1 - 3])))) : ((((arr_10 [i_0 + 1] [i_0] [i_1 - 1] [i_5 + 1]) <= (arr_15 [6] [6] [i_2] [i_5] [i_5] [i_6]))))));
                                var_15 = (max(var_15, (arr_10 [i_0] [i_1] [i_2] [i_5])));
                                var_16 = (min((max(((((arr_2 [i_0]) < (arr_9 [i_0] [i_5] [7] [i_1] [i_1] [i_0])))), (min((arr_7 [i_6] [i_2] [i_1]), (arr_21 [9] [i_1] [i_2] [5] [i_6]))))), ((max((arr_15 [7] [i_5 - 1] [i_0 + 1] [7] [i_1 - 2] [i_1]), (arr_18 [1] [i_1 - 2] [i_2] [i_5]))))));
                                arr_24 [16] [16] [16] [i_5] [i_6] = (((((((arr_3 [i_1] [i_5 + 1]) == (arr_19 [i_0] [10] [i_5 + 1] [i_5 - 1] [i_6]))))) < (((arr_7 [5] [i_2] [i_0]) << ((((arr_7 [i_0] [i_1] [i_5]) != (arr_3 [i_0] [i_1 - 3]))))))));
                                var_17 -= (arr_11 [i_0] [i_1]);
                            }
                        }
                    }
                    var_18 = ((((((arr_20 [i_0] [i_0 + 1] [i_0] [i_1 - 3] [i_0]) * (arr_0 [i_0])))) ? (max((arr_0 [i_0]), (arr_20 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1 - 2] [i_0 + 1]))) : (arr_20 [i_0] [i_0 + 1] [i_1] [i_1 + 1] [i_2])));
                }
            }
        }
    }
    var_19 = var_0;
    var_20 = var_7;
    #pragma endscop
}
