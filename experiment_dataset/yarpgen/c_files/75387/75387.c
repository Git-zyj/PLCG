/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                var_11 = var_9;
                                var_12 = var_3;
                                var_13 = (max(var_13, ((((((var_3 - var_6) - var_8)) >> ((((~(var_1 | var_9))) + 206)))))));
                            }
                            arr_14 [i_0] [i_2] [i_2] [i_3] = var_3;
                        }
                    }
                }
                arr_15 [i_0] |= var_9;
                var_14 += ((((~var_9) - var_2)) >= (var_3 % var_4));
            }
        }
    }
    #pragma endscop
}
