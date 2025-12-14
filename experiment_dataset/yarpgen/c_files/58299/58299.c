/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = var_13;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [7] [i_0] [5] [i_0] = var_2;
                            arr_13 [i_0] [i_1] [i_2] [i_3 + 2] [i_3 + 2] = var_0;
                            arr_14 [i_1] [i_2] [8] [i_3] [i_1] = var_13;
                            arr_15 [i_0] [i_0] [4] [i_3] = var_14;
                        }
                    }
                }
                var_17 = (min(var_17, var_8));
            }
        }
    }
    var_18 = var_5;
    #pragma endscop
}
