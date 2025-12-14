/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 6;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [1] [i_0] = var_2;
                            arr_12 [3] = (((-2147483647 - 1) ? -391295728 : 109));
                            var_15 = (-((-((max(0, (arr_6 [i_0 - 1] [1] [i_0 - 1])))))));
                        }
                    }
                }
                var_16 = (((((((0 < 1) && ((min(-30777699, var_0))))))) + -2831825213602335508));
            }
        }
    }
    var_17 = (((min((~var_12), (min(2831825213602335507, 2831825213602335507)))) < (max(((max(var_11, var_12))), ((-26375 ? var_0 : var_2))))));
    #pragma endscop
}
