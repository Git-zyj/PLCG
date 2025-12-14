/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((341001716 ? (26482 / -54) : ((var_14 ? var_3 : -341001711))));
    var_18 &= var_9;
    var_19 = ((var_2 || (((~(~var_14))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = (~2448166680);
                var_21 = (arr_0 [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_22 = (arr_6 [i_0] [i_0 - 1]);
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((arr_11 [i_0] [i_1] [i_0]) || ((min(1, -509563685))))) ? var_0 : 3328894471));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_2;
    #pragma endscop
}
