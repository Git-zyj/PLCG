/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_1] = (min(63129, 2406));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_3] [i_2] [9] = (var_13 / var_1);
                                var_14 = (-(((!(arr_10 [i_0] [i_0] [i_0 - 2] [i_0] [5] [i_0] [i_3 + 1])))));
                                var_15 = ((-(((var_0 == (arr_7 [i_0 - 2] [i_0 + 2] [i_0]))))));
                                arr_14 [i_0] [i_2] [i_2] [i_1] [i_0] [i_0] = var_6;
                                arr_15 [i_1] [0] [i_1] [5] [i_1] = ((max(var_9, (arr_9 [i_0] [i_0 + 1] [i_3 + 1] [i_0 + 1]))) << ((((0 == var_6) < -var_2))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (max((((!((max(var_7, var_11)))))), var_2));
    #pragma endscop
}
