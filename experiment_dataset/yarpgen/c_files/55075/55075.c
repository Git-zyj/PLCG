/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = var_8;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_13 = var_6;
                            var_14 = (((var_0 < 2602177568) | ((var_6 ? (arr_9 [i_1 + 3] [i_1 + 2]) : (arr_9 [i_1 - 1] [i_1 + 1])))));
                        }
                    }
                }
                arr_10 [i_0] = var_4;
                arr_11 [i_0] [i_0] [10] = (((((~var_9) == 1692789735)) ? var_10 : -3610714829549358995));
            }
        }
    }
    var_15 = var_9;
    #pragma endscop
}
