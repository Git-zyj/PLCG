/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    var_17 = var_2;
    var_18 = (max(var_18, 65535));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = (min((max(26, 0)), 37610));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_4] [i_2] [i_1] [i_4] = ((max((((-1 ? 0 : -32763))), -9120804231512310366)));
                                var_19 = (min(var_19, ((max(32763, ((0 ? 2 : 174)))))));
                            }
                        }
                    }
                }
                var_20 = (min(var_20, (((min(16738407376667042018, (((7 ? 604602319 : 2251799813685247)))))))));
            }
        }
    }
    #pragma endscop
}
