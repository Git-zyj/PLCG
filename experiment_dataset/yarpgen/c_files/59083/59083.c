/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [i_1] [i_2] [i_3] [i_4 - 1] = ((~((var_0 ? (arr_10 [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1]) : (((arr_6 [i_2] [i_1] [i_2] [i_3]) ? var_8 : 434645333))))));
                                var_18 = ((-((var_5 ? (min(var_9, (arr_5 [i_0]))) : (arr_12 [i_2])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_21 [i_0] [i_1] [i_0] [i_6] = (((-var_9 || 3) % -1982647092));
                            arr_22 [0] [i_5] [i_1] [i_0] = (min(((~(arr_8 [i_6 + 1] [i_6 - 1] [i_1] [i_6 - 1]))), ((~(arr_8 [i_6 + 1] [i_6] [i_1] [i_6 - 1])))));
                        }
                    }
                }
            }
        }
    }
    var_19 = var_13;
    #pragma endscop
}
