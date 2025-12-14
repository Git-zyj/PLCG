/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0] = 16773120;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_2] [i_0] = 248;
                            arr_13 [i_0] [i_1] [i_1] [i_3] [i_3] = var_5;
                            arr_14 [i_1] [i_0] [i_1] [i_1] [i_2] [i_3] = -4086;
                        }
                    }
                }
            }
        }
    }
    var_19 = -var_5;
    #pragma endscop
}
