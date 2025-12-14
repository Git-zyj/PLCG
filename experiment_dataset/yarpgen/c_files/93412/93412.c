/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_0] [i_2 - 1] = (max((!var_7), (max(((202934366510865604 ? (arr_1 [i_0]) : (arr_0 [i_0] [i_2]))), (min((arr_3 [i_0]), -389))))));
                    arr_7 [i_0] [i_0] [i_1] = ((!(arr_1 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2 + 1] [i_0] = ((max((arr_5 [i_2 - 1] [i_2 + 1] [i_2 + 1]), (arr_5 [i_2 - 1] [i_2 + 1] [i_2 - 1]))));
                                var_10 = (min(var_10, (((~((+(min((arr_9 [i_3] [i_1] [i_1] [i_3]), 7866)))))))));
                                arr_15 [i_0] [i_0] [i_0] = (max(((((arr_11 [i_0] [i_4 - 3]) ? var_3 : var_7))), (min((((!(arr_10 [i_0] [i_3] [i_1] [i_0])))), (min((arr_9 [i_0] [i_0] [i_0] [i_0]), (arr_1 [i_0])))))));
                                var_11 = (min(var_11, (max(1, 107))));
                            }
                        }
                    }
                    var_12 = (((arr_3 [i_0]) / (min((~var_3), ((min((arr_5 [i_0 - 1] [i_1] [i_0 - 1]), (arr_12 [i_0] [i_0] [i_0] [i_0]))))))));
                }
            }
        }
    }
    var_13 = (min(((var_1 ? var_1 : var_3)), (((!(-17 / var_8))))));
    #pragma endscop
}
