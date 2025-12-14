/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_11 = ((((min(9850681503415624769, (((var_9 ? var_3 : -22982)))))) ? (((((var_3 ? 536160628 : (arr_3 [i_0] [i_0] [i_2])))) ? 1 : (((arr_2 [i_4] [i_4] [i_4]) ? 7907 : var_4)))) : var_5));
                                var_12 = ((2448996658 ? 108 : 1));
                                var_13 = (((((max(var_5, -29190)) ? 245 : 28888))));
                            }
                        }
                    }
                    arr_12 [i_2] [i_2] [i_1] [i_0] = ((197 ? (arr_0 [i_0]) : ((~(((arr_0 [i_0]) + var_9))))));
                }
            }
        }
    }
    var_14 = (((((((232 ? var_1 : var_1))) ? 4 : var_4))) ? ((((max(var_1, var_2))) ? 278132584 : var_1)) : var_9);
    #pragma endscop
}
