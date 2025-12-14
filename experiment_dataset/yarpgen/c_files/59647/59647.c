/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_11 = (((((arr_5 [i_0] [i_0] [i_0] [i_3 + 1]) ? var_0 : 13859)) ^ 0));
                                arr_11 [9] [i_0] [12] [i_2] [i_3 - 1] [i_4] = (((((((arr_6 [i_0] [8] [i_2] [i_4]) ? 97 : 35184372088831))) ? ((max((arr_8 [2] [i_3] [i_3] [i_3] [i_3 + 1] [i_3] [i_3]), (arr_2 [i_0] [i_2])))) : (max(-67305125942196662, var_10)))));
                                arr_12 [i_0] [i_0] [i_3] [i_4] = ((0 ? (!1) : (!235859044)));
                                var_12 = min((((arr_6 [i_0 - 1] [i_3 - 1] [i_3] [i_4]) ? (arr_6 [i_0 - 1] [i_3 + 1] [i_3] [i_3 + 1]) : (arr_6 [i_0 + 1] [i_3 + 1] [12] [i_3 - 1]))), ((-(arr_6 [i_0 - 1] [i_3 - 1] [i_4] [i_4]))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 3; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 9;i_7 += 1)
                        {
                            {
                                var_13 = ((~(max((((83 ? (arr_2 [10] [i_1 - 2]) : 47431))), var_9))));
                                arr_22 [i_0 - 1] [i_1] [i_6] |= (max(((159 ? 1 : (arr_6 [i_1] [i_1 - 1] [i_1 + 1] [i_1]))), -99));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 3; i_8 < 13;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 0;i_9 += 1)
        {
            {
                arr_28 [1] = (arr_25 [i_9] [i_9] [i_8]);
                var_14 = 4778613984165940378;
                arr_29 [i_9] = (max((max(((13668130089543611245 ? 1 : 971259057746060176)), (arr_26 [i_8 + 1] [i_8 + 3]))), (((arr_24 [i_9 + 1]) ? (arr_25 [13] [i_9 + 1] [i_9 + 1]) : var_0))));
            }
        }
    }
    var_15 = var_8;
    #pragma endscop
}
