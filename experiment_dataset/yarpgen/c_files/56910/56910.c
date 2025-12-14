/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_0] [i_4 + 1] = (((((var_7 ? (arr_7 [i_2] [i_3] [i_0]) : ((-27788 ? var_3 : var_0))))) ? (max(var_2, (((arr_10 [i_0] [i_1] [i_0] [i_3]) ? var_7 : (arr_10 [i_0] [i_0] [i_0] [i_0]))))) : (min(((min(var_12, (arr_6 [i_0] [i_2] [i_0])))), (max(var_0, var_9))))));
                                var_14 = ((0 ? (arr_2 [i_2]) : (min(1665902739268027813, 7))));
                                arr_13 [i_0] [i_1] [i_1] [i_0] [i_3] [i_4 + 1] = var_4;
                                var_15 = 0;
                            }
                        }
                    }
                }
                var_16 = (!var_2);
            }
        }
    }
    var_17 = ((var_3 ? (((-(max(17, 24959))))) : (((max(16780841334441523802, var_11)) + ((var_5 ? 12 : var_2))))));
    var_18 = (!(((var_4 ? (min(1, var_7)) : var_3))));
    #pragma endscop
}
