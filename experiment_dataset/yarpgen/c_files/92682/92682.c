/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_7, var_5));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] = var_7;
                                var_11 -= ((var_0 ? (arr_5 [i_0 + 1]) : (arr_7 [1] [i_1 + 1])));
                                arr_15 [i_0 - 1] [i_0] [i_0 - 1] [i_3] [i_0 - 1] = (min(((~(arr_2 [i_0]))), (max(647378265, ((min((arr_11 [i_0] [i_1 + 1] [i_2] [8] [i_4]), (arr_1 [i_4]))))))));
                            }
                        }
                    }
                }
                var_12 = max((arr_5 [i_0 - 1]), (~var_2));
            }
        }
    }
    #pragma endscop
}
