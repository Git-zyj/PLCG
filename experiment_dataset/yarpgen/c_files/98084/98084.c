/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] = (((((((arr_12 [i_0] [i_1] [i_2] [i_2] [i_1]) + (arr_0 [i_3] [i_3]))))) ? var_10 : var_8));
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] = (max(((min(11140, 9))), (((arr_11 [i_4 + 1] [i_1] [i_3] [i_2] [i_1] [1]) / var_1))));
                                arr_15 [i_2] [i_2] [i_1] [i_2 - 1] = ((((((!var_11) ? (max(11149, var_3)) : var_9))) ? var_0 : (((~(arr_2 [i_0] [i_2 + 2]))))));
                                arr_16 [i_4] [i_1] [11] [i_2] [i_1] [i_1] [i_0] = (((arr_12 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4]) ? (arr_12 [i_4 - 1] [i_1] [i_3] [1] [i_4 - 1]) : (max(var_3, (arr_12 [i_1] [i_1] [i_2] [i_2] [i_3])))));
                            }
                        }
                    }
                }
                var_14 = (((var_12 ? (arr_12 [i_1] [i_1] [i_1] [i_1] [i_0]) : 11140)));
            }
        }
    }
    var_15 ^= var_0;
    #pragma endscop
}
