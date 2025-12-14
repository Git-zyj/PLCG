/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-((var_9 ? (((min(12796, 12796)))) : var_8))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [3] [i_2] [i_1] [i_2] = (((arr_6 [i_2] [i_2 - 1] [i_2 - 2] [9]) + ((((max(var_6, var_17))) * (arr_2 [i_2 + 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_20 = (12793 ^ 2080374784);
                                arr_16 [1] [i_3] [i_2] [i_0] [i_2] [i_0] [i_0] = (min(((1116892707587883008 << (var_13 - 265076849))), (arr_15 [i_0] [i_1] [i_2] [i_4 + 1] [3] [i_3])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (!12796);
    #pragma endscop
}
