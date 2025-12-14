/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (((-25626 / 15) == -var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_2] [i_2] [i_2] = (((~(~var_12))));
                    var_18 = (min(var_18, (((((~255) ? 25 : 6232198277697105238))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, 162));
                                arr_13 [14] [14] [i_2] [14] [0] = ((((((~var_8) >= ((max(var_9, var_16)))))) != (!var_7)));
                                arr_14 [15] [i_3 + 3] [i_2] [i_1] [3] = ((var_11 ? (!var_11) : (((~var_4) ? -6983 : ((-16551 ? var_9 : var_15))))));
                                arr_15 [i_0] [i_1] [i_0] [12] [6] [i_0] [i_0] = ((((6232198277697105231 < (!-6613826234975483339))) ? (min(-var_5, var_8)) : (min(-16551, -25626))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_9;
    #pragma endscop
}
