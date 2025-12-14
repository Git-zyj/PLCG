/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_2] [i_2] [i_3] [i_3] = (min(86, (((arr_6 [i_0 + 1] [i_3] [i_3]) * (arr_6 [i_0 + 2] [4] [4])))));
                                var_15 -= (max((arr_5 [i_3 - 2]), var_10));
                            }
                        }
                    }
                    arr_12 [i_0] [i_2] [i_2] = (~var_7);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_19 [i_5] [i_2] = (max((((arr_14 [i_0 - 4] [i_0 - 4] [i_0 + 1] [i_0 + 2]) ? var_2 : var_4)), -5951325000488200974));
                                var_16 = (((arr_5 [i_0]) << (16649 - 16630)));
                                arr_20 [i_0] [5] [i_2] [i_2] [8] [i_6] = (min((arr_10 [i_0] [i_5] [i_2] [i_5] [i_6]), ((((!var_7) > ((var_6 ? (arr_4 [4] [i_2]) : var_12)))))));
                            }
                        }
                    }
                    arr_21 [i_0 - 3] [3] [i_0 - 3] = (max((((!(((var_4 ? var_13 : var_6)))))), (((arr_6 [4] [i_0 - 4] [4]) - (arr_6 [13] [i_0 - 2] [i_1])))));
                }
                var_17 = ((-(max(((max(var_5, var_2))), (arr_10 [i_1] [i_1] [i_1] [i_1] [i_0])))));
            }
        }
    }
    #pragma endscop
}
