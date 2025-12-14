/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_1 ^ var_11);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_12 [i_0 + 1] [i_0] [8] [i_2] [i_3] [i_4] = (min(var_9, var_9));
                                var_13 = (max(var_13, (max((((!(((41 ? 1 : (arr_2 [i_1] [2] [i_3 + 1]))))))), (max((arr_2 [i_0 + 2] [i_1] [i_2]), (arr_2 [i_0 + 1] [5] [i_2])))))));
                            }
                        }
                    }
                }
                var_14 = ((!(arr_4 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1])));
            }
        }
    }
    var_15 = (min(var_15, -95));
    #pragma endscop
}
