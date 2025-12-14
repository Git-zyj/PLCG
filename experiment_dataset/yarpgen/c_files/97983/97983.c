/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] = arr_2 [i_0] [i_0] [i_1];
                arr_6 [i_1] = (~(arr_0 [i_0]));
                var_11 = (max(var_11, ((var_1 * (arr_0 [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                var_12 = (~3478040128);
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_13 = max(3478040124, (((~3360878634) ? (min(var_7, 1145421664)) : ((858527430 ? (arr_13 [i_2]) : 1375385915)))));
                                arr_20 [i_2] [i_3] [i_2] [i_5 + 2] [i_5] = var_6;
                                var_14 = (min(var_14, var_6));
                                var_15 = (max(var_15, var_6));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
