/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    var_15 = (max(var_15, (~0)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 += var_3;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_4] [i_4] [8] [i_4] = 2567641120;
                                var_17 = (((-5542426837352163786 ? 51 : (~4260777519))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_2;
    var_19 = -3667572727209638649;
    #pragma endscop
}
