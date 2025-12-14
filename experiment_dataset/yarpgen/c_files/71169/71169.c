/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [23] = (max(0, (((!-739052843) ? 278119570 : var_5))));
                    var_12 = (((((3630942663 ? ((278119570 ? -278119570 : -31904)) : -14))) ? (((19 ? -28642 : var_1))) : 2994097461130162039));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [17] [8] [i_2] [i_1] [5] [i_0] = ((((min(-14, -47))) ? var_4 : 36430));
                                var_13 = ((max(var_3, var_8)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (!var_6);
    var_15 -= ((((((((1 ? var_9 : 39))) ? var_4 : ((-14 ? -4031761649377187608 : 1))))) ? (~-1838791043131758062) : var_1));
    #pragma endscop
}
